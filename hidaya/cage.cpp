#include "cage.h"

cage::cage()
{

}

bool cage::ajouter(){
    QSqlQuery query;
    query.prepare("INSERT INTO cage (ID_CAGE, TYPE_CAGE, CAPACITE_CAGE) VALUES (:ID, :TYPE, :CAPACITE)");
    query.bindValue(":ID", id);
    query.bindValue(":TYPE", type);
    query.bindValue(":CAPACITE", capacite);
    return query.exec();
}
bool cage::supprimer(QString idcage){
    QSqlQuery qry;
    qry.prepare("Delete from cage where ID_CAGE = :ID");
    qry.bindValue(":ID",idcage);
    return qry.exec();
}
QSqlQueryModel *cage::afficher(){
    QSqlQueryModel *model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM cage");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID_CAGE"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("TYPE_CAGE"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("CAPACITE_CAGE"));
    return model;
}
QChartView * cage::stats(){


    //stat
    int nb1;
    int nb2;
    int nb3;

    QString nb01;
    QString nb02;
    QString nb03;
    QSqlQuery q;

    q.prepare("SELECT COUNT(ID_CAGE) FROM CAGE where TYPE_CAGE='Sauvage' ");
    q.exec();
    q.first() ;
    nb1=(q.value(0).toInt());

    q.prepare("SELECT COUNT(ID_CAGE) FROM CAGE where TYPE_CAGE='Aquatique' ");
    q.exec();
    q.first() ;
    nb2=(q.value(0).toInt());

    q.prepare("SELECT COUNT(ID_CAGE) FROM CAGE where TYPE_CAGE='Amphibie' ");
    q.exec();
    q.first() ;
    nb3=(q.value(0).toInt());
    int tt=nb1+nb2+nb3;

    nb1=((double)nb1/(double)tt)*100;
    nb2=((double)nb2/(double)tt)*100;
    nb3=((double)nb3/(double)tt)*100;


    nb01= QString::number(nb1);
    nb02=QString::number(nb2);
    nb03=QString::number(nb3);

    QPieSeries *series;
    series= new  QPieSeries();
    series->append("Sauvage"+nb01+"%",nb1);
    series->append("Aquatique"+nb02+"%",nb2);
    series->append("Amphibie"+nb03+"%",nb3);

    QPieSlice *slice0 = series->slices().at(0);
    slice0->setLabelVisible();

    QPieSlice *slice1 = series->slices().at(1);
    slice1->setExploded();
    slice1->setLabelVisible();
    slice1->setPen(QPen(Qt::green, 3));
    slice1->setBrush(Qt::darkYellow);

    QPieSlice *slice2 = series->slices().at(2);
    slice2->setExploded();
    slice2->setLabelVisible();
    slice2->setPen(QPen(Qt::blue, 3));
    slice2->setBrush(Qt::darkYellow);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Statistique du type des cages ");
    chart->legend()->show();
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    return chartView;

}

void cage::setid(QString n){id=n;}
void cage::settype(QString t){type=t;}
void cage::setcapacite(QString c){capacite=c;}

QString cage::get_id(){return id;}
QString cage::get_type(){return type;}
QString cage::get_capacite(){return capacite;}


QSqlQueryModel *cage::recherche(QString num)
{
    QSqlQueryModel *model= new QSqlQueryModel;
    model->setQuery("SELECT * FROM cage WHERE ID_CAGE LIKE'"+num+"%'");
    return model;
}

QSqlQueryModel * cage::chercher_emp(const QString &aux)
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from cage where ((TYPE_CAGE ) LIKE '%"+aux+"%')");
    model->setHeaderData(0,Qt::Vertical,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("TYPE"));
    model->setHeaderData(2,Qt::Vertical,QObject::tr("CAPACITE"));
    return model;
}

QSqlQueryModel * cage::chercher_emp2(const QString &aux)
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from cage where ((CAPACITE_CAGE ) LIKE '%"+aux+"%')");
    model->setHeaderData(0,Qt::Vertical,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("TYPE"));
    model->setHeaderData(2,Qt::Vertical,QObject::tr("CAPACITE"));
    return model;
}
