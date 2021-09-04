#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QTranslator>
#include <QInputDialog>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Database db;
    db.createconnect();
    MainWindow w;

    /*    //Traduction
    QTranslator T;
    QStringList langue;
    langue<<"English"<<"Francais";
    const QString languel=QInputDialog::getItem(NULL,"Langue","Selectionner langue",langue);
    if(languel=="English")
        T.load(":/english.qm");
    if(languel!="Francais")
        a.installTranslator(&T);
    */

    //style
    QFile file(":/new/prefix1/style.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet { QLatin1String(file.readAll()) };
    a.setStyleSheet(styleSheet);
    //fin style

    w.show();
    return a.exec();
}
