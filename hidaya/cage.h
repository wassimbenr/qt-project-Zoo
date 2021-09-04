#ifndef CAGE_H
#define CAGE_H
#include <QString>
#include "qstring.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QVariant>
#include<QtCharts> //stat
#include<QChartView> //stat
#include<QPieSeries> //stat
#include<QPieSlice> //stat

class cage
{
public:
    cage();
    cage(QString i, QString t, QString c): id(i),type(t),capacite(c){}
    void setid(QString n);
    void settype(QString n);
    void setcapacite(QString n);
    QString get_id();
    QString get_type();
    QString get_capacite();
    bool ajouter();
    bool supprimer(QString id_cage);
    QSqlQueryModel *afficher();
    QSqlQueryModel *recherche(QString);
    QSqlQueryModel *chercher_emp(const QString &aux);
    QSqlQueryModel *chercher_emp2(const QString &aux);
    QChartView * stats();
private:
    QString id;
    QString type;
    QString capacite;
};

#endif // CAGE_H
