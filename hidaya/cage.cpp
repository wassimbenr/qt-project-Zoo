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
