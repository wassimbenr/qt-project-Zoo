#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cage.h"
#include <QPrinter>
#include <QFileDialog>
#include <QTranslator>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDatabase>
#include "smtp.h"
#include <QDebug>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QtPrintSupport>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Hidaya mcharek");
    QSqlQueryModel * modell = tmpcage.afficher();
    ui->tableView_cage->setModel(modell);
    ui->tableView->setModel(tmpanimal.afficher());
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);

    //Mise a jour combo box ANIMAL pour ID CAGE
    QSqlQueryModel *model2=new QSqlQueryModel();
    QString id_cage;
    model2->setQuery("select ID_CAGE from CAGE");
    ui->comboBox_cage->setModel(model2);

    //music
    click = new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/dedpy/Desktop/hidaya.mcharek/hidaya/Click.wav"));
    music = new QMediaPlayer();
    music->setMedia(QUrl::fromLocalFile("C:/Users/dedpy/Desktop/hidaya.mcharek/hidaya/music.mp3"));
    music->play();

    //notification
    mysystem = new QSystemTrayIcon(this);
    mysystem->setVisible(true);

    // controle de saisie

    ui->lineEdit_nom->setMaxLength(6);
    ui->lineEdit_nom->maxLength();
    ui->lineEdit_sexe->setMaxLength(6);
    ui->lineEdit_sexe->maxLength();
    //animation
    animation =new QPropertyAnimation(ui->calendarWidget,"geometry");
    animation->setDuration(8000);
    animation->setStartValue(QRect(1, 1, 290, 200));
    animation->setEndValue(QRect(0,0,349,279));
    animation->setEasingCurve(QEasingCurve::InOutQuint);
    animation->start();
    MainWindow::updatestat();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updatestat()
{
    QChartView *chart=tmpcage.stats();
    ui->gridLayout_2->addWidget(chart,1,1);
    show();
}

void MainWindow::on_pushButton_ajouterC_clicked()
{
    click->play();
    cage tmpcage;
    QString id;
    QString type=ui->comboBox_typeC->currentText();
    QString capacite=ui->lineEdit_capaciteC->text();
    cage cage(id,type, capacite);
    cage.ajouter();
    QSqlQueryModel * modell = tmpcage.afficher();
    ui->tableView_cage->setModel( modell);
    QSortFilterProxyModel *mm=new QSortFilterProxyModel(this);
    mm->setDynamicSortFilter(true);
    mm->setSourceModel(modell);
    ui->tableView_cage->setModel(mm);
    ui->tableView_cage->setSortingEnabled(true);
    foreach(QLineEdit *widget, this->findChildren<QLineEdit*>()) {
        widget->clear();
    }
    QSqlQueryModel *model2=new QSqlQueryModel();
    QString id_cage;
    model2->setQuery("select ID_CAGE from CAGE");
    ui->comboBox_cage->setModel(model2);
    QMessageBox::information(nullptr,QObject::tr("Ajout d'un cage"),QObject::tr("Cage ajoute avec success\n click ok to exit"),QMessageBox::Ok);
    updatestat();
    //}
}

void MainWindow::on_pushButton_clicked()
{
    {
        click->play();
        cage e;
        QString text;
        if (ui->radioButton_type->isChecked()==true)
        {
            text=ui->lineEdit_rechercherC->text();
            if(text == "")
            {
                ui->tableView_cage->setModel(e.afficher());
            }
            else
            {
                ui->tableView_cage->setModel(e.chercher_emp(text));
            }
        }
        else if     (ui->radioButton_capacite->isChecked()==true)
        {
            text=ui->lineEdit_rechercherC->text();
            if(text == "")
            {
                ui->tableView_cage->setModel(e.afficher());
            }
            else
            {
                ui->tableView_cage->setModel(e.chercher_emp2(text));
            }
        }
    }
}

void MainWindow::on_pushButton_modifierC_clicked()
{
    click->play();
    if (ui->pushButton_modifierC->isChecked())
    {
        ui->pushButton_modifierC->setDisabled(true);
        ui->pushButton_modifierC->setText("Modifiable");
        QSqlTableModel *tableModel= new QSqlTableModel();
        tableModel->setTable("CAGE");
        tableModel->select();
        ui->tableView_cage->setModel(tableModel);
    }
    else
    {
        ui->pushButton_modifierC->setText("Modifier");
        QSqlQueryModel * model = tmpanimal.afficher();
        ui->tableView->setModel( model);
        QSortFilterProxyModel *m=new QSortFilterProxyModel(this);
        m->setDynamicSortFilter(true);
        m->setSourceModel(model);
        ui->tableView_cage->setModel(m);
        ui->tableView_cage->setSortingEnabled(true);
    }
    ui->pushButton_modifierC->setChecked(false);
    updatestat();
}

void MainWindow::on_pushButton_modifier_clicked()
{
    click->play();
    if (ui->pushButton_modifier->isChecked())
    {
        ui->pushButton_modifier->setText(tr("Modifiable"));
        QSqlTableModel *tableModel= new QSqlTableModel();
        tableModel->setTable("ANIMAL");
        tableModel->select();
        ui->tableView->setModel(tableModel);
    }
    else
    {
        ui->pushButton_modifier->setText(tr("Modifier"));
        ui->tableView->setModel(tmpanimal.afficher());
    }
    QMessageBox::information(nullptr,QObject::tr("modification d'un animal"),QObject::tr("Animal a ete modifie avec success\n click ok to exit"),QMessageBox::Ok);

}

void MainWindow::on_pushButton_supprimerC_clicked()
{
    cage tmpcage;
    click->play();
    QItemSelectionModel *select = ui->tableView_cage->selectionModel();
    QString idstaff =select->selectedRows(0).value(0).data().toString();
    if(tmpcage.supprimer(idstaff))
    {
        QSqlQueryModel * modell = tmpcage.afficher();
        ui->tableView_cage->setModel( modell);
        QSortFilterProxyModel *mm=new QSortFilterProxyModel(this);
        mm->setDynamicSortFilter(true);
        mm->setSourceModel(modell);
        ui->tableView_cage->setModel(mm);
        ui->tableView_cage->setSortingEnabled(true);
    }
    QSqlQueryModel *model2=new QSqlQueryModel();
    QString id_cage;
    model2->setQuery("select ID_CAGE from CAGE");
    ui->comboBox_cage->setModel(model2);
    QMessageBox::information(nullptr,QObject::tr("suppression d'un cage"),QObject::tr("Cage supprime avec success\n click ok to exit"),QMessageBox::Ok);
    updatestat();
}

void MainWindow::on_pushButton_ajouter_clicked()
{
    click->play();
    QString id;
    QString nom=ui->lineEdit_nom->text();
    QString sexe=ui->lineEdit_sexe->text();
    QString dn=ui->dateEdit_naissance->text();
    QString dd=ui->dateEdit_deces->text();
    QString cage=ui->comboBox_cage->currentText();


    animal animal(id,nom,sexe,dn,dd,cage);
    if (animal.ajouter())
    {
        ui->tableView->setModel(tmpanimal.afficher());
        QMessageBox::information(nullptr,QObject::tr("Ajout d'un animal"),QObject::tr("Animal ajoute avec success\n click ok to exit"),QMessageBox::Ok);

    }
    else
    {
        qDebug() << "Erreur d'ajout.";
        QMessageBox::warning(nullptr,QObject::tr("Ajout d'un animal"),QObject::tr("Erreur d'ajout\n click ok to exit"),QMessageBox::Ok);

    }
}

void MainWindow::on_lineEdit_rechercher_textChanged(const QString &arg1)
{
    ui->tableView->setModel(tmpanimal.rechercher(arg1));
}

void MainWindow::on_pushButton_supprimer_clicked()
{
    click->play();
    QItemSelectionModel *select = ui->tableView->selectionModel();

    QString id =select->selectedRows(0).value(0).data().toString();

    if(tmpanimal.supprimer(id))
    {
        ui->tableView->setModel(tmpanimal.afficher());
        QMessageBox::information(nullptr,QObject::tr("suppression d'un animal"),QObject::tr("Animal supprime avec success\n click ok to exit"),QMessageBox::Ok);
    }

}
void MainWindow::on_pushButton_PDFa_clicked()
{
    click->play();
    QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
    if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append("ListeAnimaux.pdf"); }

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName(fileName);

    QTextDocument doc;
    QSqlQuery q;
    q.prepare("SELECT * FROM ANIMAL ");
    q.exec();
    QString pdf="<br><br><img src='C:/Users/dedpy/Desktop/hidaya.mcharek/hidaya/profile.jpg' height='42' align='left' width='42'/>  <h1 align='middle' style='color:blue;   style='display: block;margin: auto;max-width: 600px;padding:5px;width: 100%;'>LISTE DES ANIMAUX<><br></h1>\n <br> <table  style='border: 1px solid black;background: white; border-radius:3px; border-collapse: collapse; margin: auto;  padding:5px; width: 100%; box-shadow: 0 5px 10px rgba(0, 0, 0, 0.1);'>  <tr>  <th style='border: 1px solid black;color:#D5DDE5;background:#1b1e24;border-bottom:4px solid #9ea7af;border-right: 1px solid #343a45;font-size:12px;font-weight: 100;padding:24px;text-align:left;text-shadow: 0 1px 1px rgba(0, 0, 0, 0.1);vertical-align:middle;'>ID </th> <th style='border: 1px solid black;color:#D5DDE5;background:#1b1e24;border-bottom:4px solid #9ea7af;border-right: 1px solid #343a45;font-size:12px;font-weight: 100;padding:24px;text-align:left;text-shadow: 0 1px 1px rgba(0, 0, 0, 0.1);vertical-align:middle;'>NOM</th> <th style='border: 1px solid black;color:#D5DDE5;background:#1b1e24;border-bottom:4px solid #9ea7af;border-right: 1px solid #343a45;font-size:12px;font-weight: 100;padding:24px;text-align:left;text-shadow: 0 1px 1px rgba(0, 0, 0, 0.1);vertical-align:middle;'>SEXE</th> <th style='border: 1px solid black;color:#D5DDE5;background:#1b1e24;border-bottom:4px solid #9ea7af;border-right: 1px solid #343a45;font-size:12px;font-weight: 100;padding:12px;text-align:left;text-shadow: 0 1px 1px rgba(0, 0, 0, 0.1);vertical-align:middle;'> Date de naissance </th> <th style='border: 1px solid black;color:#D5DDE5;background:#1b1e24;border-bottom:4px solid #9ea7af;border-right: 1px solid #343a45;font-size:12px;font-weight: 100;padding:12px;text-align:left;text-shadow: 0 1px 1px rgba(0, 0, 0, 0.1);vertical-align:middle;border: 1px solid black;'>Date de deces</th><th style='border: 1px solid black;color:#D5DDE5;background:#1b1e24;border-bottom:4px solid #9ea7af;border-right: 1px solid #343a45;font-size:12px;font-weight: 100;padding:12px;text-align:left;text-shadow: 0 1px 1px rgba(0, 0, 0, 0.1);vertical-align:middle;border: 1px solid black;'>Id cage</th>  </tr>";


    while ( q.next()) {

        pdf= pdf+ " <br> <tr style='border-top: 1px solid #C1C3D1; border-bottom-: 1px solid #C1C3D1; color:#666B85;padding-bottom:5px; font-size:16px; font-weight:normal; text-shadow: 0 1px 1px rgba(256, 256, 256, 0.1);'> <td style='border: 1px solid black;border: 1px solid black;background:#FFFFFF; padding:20px; text-align:left; vertical-align:middle; font-weight:300; font-size:8px; text-shadow: -1px -1px 1px rgba(0, 0, 0, 0.1); border-right: 1px solid #C1C3D1;'>"+ q.value(0).toString()+"</td>  <td style='border: 1px solid black;border: 1px solid black;background:#FFFFFF; padding:20px; text-align:left; vertical-align:middle; font-weight:300; font-size:8px; text-shadow: -1px -1px 1px rgba(0, 0, 0, 0.1); border-right: 1px solid #C1C3D1;'> " + q.value(1).toString() +"</td>   <td style='border: 1px solid black;background:#FFFFFF; padding:20px; text-align:left; vertical-align:middle; font-weight:300; font-size:8px; text-shadow: -1px -1px 1px rgba(0, 0, 0, 0.1); border-right: 1px solid #C1C3D1;'>" +q.value(2).toString() +"  "" " "</td>   <td style='border: 1px solid black;background:#FFFFFF; padding:20px; text-align:left; vertical-align:middle; font-weight:300; font-size:8px; text-shadow: -1px -1px 1px rgba(0, 0, 0, 0.1); border-right: 1px solid #C1C3D1;'>"+q.value(3).toString()+"</td>   <td style='border: 1px solid black;background:#FFFFFF; padding:20px; text-align:left; vertical-align:middle; font-weight:300; font-size:8px; text-shadow: -1px -1px 1px rgba(0, 0, 0, 0.1); border-right: 1px solid #C1C3D1;'>"+q.value(4).toString()+" "  " " "</td><td style='border: 1px solid black;background:#FFFFFF; padding:20px; text-align:left; vertical-align:middle; font-weight:300; font-size:8px; text-shadow: -1px -1px 1px rgba(0, 0, 0, 0.1); border-right: 1px solid #C1C3D1;'>"+q.value(5).toString()+" "  " " "</td> </td>" ;

    }
    doc.setHtml(pdf);
    doc.setPageSize(printer.pageRect().size()); // t5abbi numero l page
    doc.print(&printer);
    QMessageBox::information(nullptr,QObject::tr("Generation PDF"),QObject::tr("PDF generé avec succes\n click ok to exit"),QMessageBox::Ok);

}

void MainWindow::on_pushButton_annuler_clicked()
{
    click->play();
}

void MainWindow::on_pushButton_mail_clicked()
{
    Smtp* smtp = new Smtp("dedsec1450@gmail.com", "wassimben123", "smtp.gmail.com", 465);
    smtp->sendMail( ui->lineEdit_subject->text(), "wassimbenr@gmail.com" ,"Demande d'animal",ui->textEdit->toPlainText());
}

void MainWindow::on_pushButton_tri_clicked()
{
    click->play();
    ui->tableView->setModel(tmpanimal.tri(ui->comboBox_tri->currentText()));
}
