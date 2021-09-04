#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QItemSelectionModel>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QRegularExpression>
#include <QTableWidgetItem>
#include <QDebug>
#include <QSqlTableModel>
#include <QAbstractItemView>
#include <QRegExp>
#include <QFileDialog>
#include <QSortFilterProxyModel>
#include <QTextDocument>
#include<QMediaPlayer>
#include<QSqlRecord>
#include<QtCharts> //stat
#include<QChartView> //stat
#include<QPieSeries> //stat
#include<QPieSlice> //stat
#include<QSystemTrayIcon> //notification
#include<QtPrintSupport/QPrinter> //imprimer
#include<QtPrintSupport/QPrintDialog> //imprimer
#include <QPropertyAnimation>
#include "database.h"
#include "animal.h"
#include "cage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_ajouterC_clicked();

    void on_pushButton_clicked();

    void on_pushButton_modifierC_clicked();

    void on_pushButton_modifier_clicked();

    void on_pushButton_supprimerC_clicked();

    void on_pushButton_ajouter_clicked();

    void on_lineEdit_rechercher_textChanged(const QString &arg1);

    void on_pushButton_supprimer_clicked();

    void on_pushButton_PDFa_clicked();

    void on_pushButton_annuler_clicked();

private:
    Ui::MainWindow *ui;
    animal tmpanimal;
    cage tmpcage;
    QMediaPlayer *click; //music
    QMediaPlayer *music; //music
    QTabWidget * tab;
    QSystemTrayIcon *mysystem; //notification
    QPropertyAnimation * animation; //animation
};
#endif // MAINWINDOW_H
