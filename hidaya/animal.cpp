#include "animal.h"

animal::animal()
{

}

bool animal::ajouter()
{
    QSqlQuery query;



    query.prepare("INSERT INTO ANIMAL (ID_ANIMAL, NOM_ANIMAL, SEXE_ANIMAL,DATE_NAISSANCE,DATE_DECES,ID_CAGE)"
                      "VALUES (:id, :nom, :sexe,:dn,:dd,:cage)");

    query.bindValue(":id",ID_ANIMAL);
    query.bindValue(":nom",NOM_ANIMAL);
    query.bindValue(":sexe",SEXE_ANIMAL);
    query.bindValue(":dn",DATE_NAISSANCE);
    query.bindValue(":dd",DATE_DECES);
    query.bindValue(":cage",ID_CAGE);

    return query.exec();
}

QSqlQueryModel * animal::afficher()
{
    QSqlQueryModel *model= new QSqlQueryModel();

    model->setQuery("select * from animal");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_ANIMAL"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM_ANIMAL"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("SEXE_ANIMAL"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATE_NAISSANCE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATE_DECES"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("ID_CAGE"));
    return model;
}
bool animal::supprimer(QString id)
{
    QSqlQuery qry;
    qry.prepare("Delete from ANIMAL where ID_ANIMAL = :Id");
    qry.bindValue(":Id",id);
    return qry.exec();
}

QSqlQueryModel * animal::rechercher(QString r)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from ANIMAL where upper(ID_ANIMAL) like upper('%"+r+"%') or upper(NOM_ANIMAL) like upper('%"+r+"%') or upper(SEXE_ANIMAL) like upper('%"+r+"%') or upper(DATE_NAISSANCE) like upper('%"+r+"%') or upper(DATE_DECES) like upper('%"+r+"%') or upper(ID_CAGE) like upper('%"+r+"%')");
    return model;
}
