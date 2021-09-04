#ifndef ANIMAL_H
#define ANIMAL_H
#include <QString>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QDebug>

class animal
{
    QString ID_ANIMAL,NOM_ANIMAL,SEXE_ANIMAL,DATE_NAISSANCE,DATE_DECES,ID_CAGE;

public:
    animal();
    animal(QString i,QString n,QString s,QString dn,QString dd,QString idcage):ID_ANIMAL(i),NOM_ANIMAL(n),SEXE_ANIMAL(s),DATE_NAISSANCE(dn),DATE_DECES(dd),ID_CAGE(idcage){}
    bool ajouter();
    QSqlQueryModel *rechercheanimal(QString);
    QSqlQueryModel *afficher();
    bool supprimer(QString);
    QSqlQueryModel *rechercher(QString r);
    QSqlQueryModel *tri(QString selon);
};

#endif // ANIMAL_H
