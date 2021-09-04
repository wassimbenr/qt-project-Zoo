/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_animaux;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_nom;
    QLabel *label_2;
    QLineEdit *lineEdit_sexe;
    QLabel *label_3;
    QDateEdit *dateEdit_naissance;
    QLabel *label_4;
    QDateEdit *dateEdit_deces;
    QLabel *label_5;
    QComboBox *comboBox_cage;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_ajouter;
    QPushButton *pushButton_annuler;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QCalendarWidget *calendarWidget;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_rechercher;
    QPushButton *pushButton_tri;
    QComboBox *comboBox_tri;
    QHBoxLayout *horizontalLayout_6;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_PDFa;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_modifier;
    QPushButton *pushButton_supprimer;
    QWidget *tab_cage;
    QGroupBox *groupBox_3;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QComboBox *comboBox_typeC;
    QLabel *label_7;
    QLineEdit *lineEdit_capaciteC;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_ajouterC;
    QPushButton *pushButton_annulerC;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_4;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *lineEdit_rechercherC;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *radioButton_capacite;
    QRadioButton *radioButton_type;
    QHBoxLayout *horizontalLayout_8;
    QTableView *tableView_cage;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_modifierC;
    QPushButton *pushButton_supprimerC;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_8;
    QLineEdit *lineEdit_subject;
    QLabel *label_9;
    QTextEdit *textEdit;
    QPushButton *pushButton_mail;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(6, 9, 791, 551));
        tab_animaux = new QWidget();
        tab_animaux->setObjectName(QStringLiteral("tab_animaux"));
        groupBox = new QGroupBox(tab_animaux);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(9, 8, 350, 521));
        groupBox->setAutoFillBackground(true);
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(-1, 19, 351, 211));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_nom = new QLineEdit(formLayoutWidget);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_nom);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_sexe = new QLineEdit(formLayoutWidget);
        lineEdit_sexe->setObjectName(QStringLiteral("lineEdit_sexe"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_sexe);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        dateEdit_naissance = new QDateEdit(formLayoutWidget);
        dateEdit_naissance->setObjectName(QStringLiteral("dateEdit_naissance"));
        dateEdit_naissance->setCalendarPopup(true);
        dateEdit_naissance->setDate(QDate(2018, 1, 1));

        formLayout->setWidget(2, QFormLayout::FieldRole, dateEdit_naissance);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        dateEdit_deces = new QDateEdit(formLayoutWidget);
        dateEdit_deces->setObjectName(QStringLiteral("dateEdit_deces"));
        dateEdit_deces->setCalendarPopup(true);
        dateEdit_deces->setDate(QDate(2021, 1, 1));

        formLayout->setWidget(3, QFormLayout::FieldRole, dateEdit_deces);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        comboBox_cage = new QComboBox(formLayoutWidget);
        comboBox_cage->setObjectName(QStringLiteral("comboBox_cage"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox_cage);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_ajouter = new QPushButton(formLayoutWidget);
        pushButton_ajouter->setObjectName(QStringLiteral("pushButton_ajouter"));

        horizontalLayout_2->addWidget(pushButton_ajouter);

        pushButton_annuler = new QPushButton(formLayoutWidget);
        pushButton_annuler->setObjectName(QStringLiteral("pushButton_annuler"));

        horizontalLayout_2->addWidget(pushButton_annuler);


        formLayout->setLayout(7, QFormLayout::SpanningRole, horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(6, QFormLayout::LabelRole, verticalSpacer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(8, QFormLayout::LabelRole, horizontalSpacer_2);

        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-1, 229, 351, 281));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        calendarWidget = new QCalendarWidget(gridLayoutWidget);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(calendarWidget->sizePolicy().hasHeightForWidth());
        calendarWidget->setSizePolicy(sizePolicy);
        calendarWidget->setAutoFillBackground(false);
        calendarWidget->setGridVisible(false);

        gridLayout->addWidget(calendarWidget, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(tab_animaux);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(369, 10, 411, 511));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, 20, 411, 491));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lineEdit_rechercher = new QLineEdit(verticalLayoutWidget);
        lineEdit_rechercher->setObjectName(QStringLiteral("lineEdit_rechercher"));

        horizontalLayout_4->addWidget(lineEdit_rechercher);

        pushButton_tri = new QPushButton(verticalLayoutWidget);
        pushButton_tri->setObjectName(QStringLiteral("pushButton_tri"));

        horizontalLayout_4->addWidget(pushButton_tri);

        comboBox_tri = new QComboBox(verticalLayoutWidget);
        comboBox_tri->setObjectName(QStringLiteral("comboBox_tri"));

        horizontalLayout_4->addWidget(comboBox_tri);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        tableView = new QTableView(verticalLayoutWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout_6->addWidget(tableView);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_PDFa = new QPushButton(verticalLayoutWidget);
        pushButton_PDFa->setObjectName(QStringLiteral("pushButton_PDFa"));

        horizontalLayout_5->addWidget(pushButton_PDFa);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        pushButton_modifier = new QPushButton(verticalLayoutWidget);
        pushButton_modifier->setObjectName(QStringLiteral("pushButton_modifier"));
        pushButton_modifier->setCheckable(true);

        horizontalLayout_5->addWidget(pushButton_modifier);

        pushButton_supprimer = new QPushButton(verticalLayoutWidget);
        pushButton_supprimer->setObjectName(QStringLiteral("pushButton_supprimer"));

        horizontalLayout_5->addWidget(pushButton_supprimer);


        verticalLayout->addLayout(horizontalLayout_5);

        tabWidget->addTab(tab_animaux, QString());
        tab_cage = new QWidget();
        tab_cage->setObjectName(QStringLiteral("tab_cage"));
        groupBox_3 = new QGroupBox(tab_cage);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(6, 9, 350, 521));
        formLayoutWidget_2 = new QWidget(groupBox_3);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(0, 20, 351, 151));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        comboBox_typeC = new QComboBox(formLayoutWidget_2);
        comboBox_typeC->setObjectName(QStringLiteral("comboBox_typeC"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, comboBox_typeC);

        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        lineEdit_capaciteC = new QLineEdit(formLayoutWidget_2);
        lineEdit_capaciteC->setObjectName(QStringLiteral("lineEdit_capaciteC"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_capaciteC);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(2, QFormLayout::FieldRole, verticalSpacer_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        pushButton_ajouterC = new QPushButton(formLayoutWidget_2);
        pushButton_ajouterC->setObjectName(QStringLiteral("pushButton_ajouterC"));

        horizontalLayout_7->addWidget(pushButton_ajouterC);

        pushButton_annulerC = new QPushButton(formLayoutWidget_2);
        pushButton_annulerC->setObjectName(QStringLiteral("pushButton_annulerC"));

        horizontalLayout_7->addWidget(pushButton_annulerC);


        formLayout_2->setLayout(3, QFormLayout::FieldRole, horizontalLayout_7);

        gridLayoutWidget_2 = new QWidget(groupBox_3);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 179, 351, 331));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(tab_cage);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(369, 10, 411, 521));
        verticalLayoutWidget_2 = new QWidget(groupBox_4);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 20, 411, 491));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        lineEdit_rechercherC = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_rechercherC->setObjectName(QStringLiteral("lineEdit_rechercherC"));

        horizontalLayout_11->addWidget(lineEdit_rechercherC);

        pushButton = new QPushButton(verticalLayoutWidget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_11->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_11->addWidget(pushButton_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_5);

        radioButton_capacite = new QRadioButton(verticalLayoutWidget_2);
        radioButton_capacite->setObjectName(QStringLiteral("radioButton_capacite"));

        horizontalLayout_11->addWidget(radioButton_capacite);

        radioButton_type = new QRadioButton(verticalLayoutWidget_2);
        radioButton_type->setObjectName(QStringLiteral("radioButton_type"));

        horizontalLayout_11->addWidget(radioButton_type);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        tableView_cage = new QTableView(verticalLayoutWidget_2);
        tableView_cage->setObjectName(QStringLiteral("tableView_cage"));

        horizontalLayout_8->addWidget(tableView_cage);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        pushButton_modifierC = new QPushButton(verticalLayoutWidget_2);
        pushButton_modifierC->setObjectName(QStringLiteral("pushButton_modifierC"));
        pushButton_modifierC->setCheckable(true);

        horizontalLayout_10->addWidget(pushButton_modifierC);

        pushButton_supprimerC = new QPushButton(verticalLayoutWidget_2);
        pushButton_supprimerC->setObjectName(QStringLiteral("pushButton_supprimerC"));

        horizontalLayout_10->addWidget(pushButton_supprimerC);


        verticalLayout_2->addLayout(horizontalLayout_10);

        verticalSpacer_3 = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_cage, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        formLayoutWidget_3 = new QWidget(tab);
        formLayoutWidget_3->setObjectName(QStringLiteral("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(60, 30, 651, 461));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(formLayoutWidget_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_8);

        lineEdit_subject = new QLineEdit(formLayoutWidget_3);
        lineEdit_subject->setObjectName(QStringLiteral("lineEdit_subject"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit_subject);

        label_9 = new QLabel(formLayoutWidget_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_9);

        textEdit = new QTextEdit(formLayoutWidget_3);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, textEdit);

        pushButton_mail = new QPushButton(formLayoutWidget_3);
        pushButton_mail->setObjectName(QStringLiteral("pushButton_mail"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, pushButton_mail);

        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Zoo", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Ajouter un animal", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Sexe", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Naissance", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Deces", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Cage", Q_NULLPTR));
        pushButton_ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        pushButton_annuler->setText(QApplication::translate("MainWindow", "Annuler", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Liste des animaux", Q_NULLPTR));
        pushButton_tri->setText(QApplication::translate("MainWindow", "Tri", Q_NULLPTR));
        comboBox_tri->clear();
        comboBox_tri->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ID_ANIMAL", Q_NULLPTR)
         << QApplication::translate("MainWindow", "NOM_ANIMAL", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SEXE_ANIMAL", Q_NULLPTR)
         << QApplication::translate("MainWindow", "DATE_NAISSANCE", Q_NULLPTR)
         << QApplication::translate("MainWindow", "DATE_DECES", Q_NULLPTR)
         << QApplication::translate("MainWindow", "ID_CAGE", Q_NULLPTR)
        );
        pushButton_PDFa->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        pushButton_modifier->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pushButton_supprimer->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_animaux), QApplication::translate("MainWindow", "Animaux", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Ajouter un cage", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        comboBox_typeC->clear();
        comboBox_typeC->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Amphibie", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Sauvage", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Aquatique", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("MainWindow", "Capacite", Q_NULLPTR));
        pushButton_ajouterC->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        pushButton_annulerC->setText(QApplication::translate("MainWindow", "Annuler", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Liste des cages", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Trier", Q_NULLPTR));
        radioButton_capacite->setText(QApplication::translate("MainWindow", "Capacite", Q_NULLPTR));
        radioButton_type->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        pushButton_modifierC->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pushButton_supprimerC->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_cage), QApplication::translate("MainWindow", "Cages", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Sujet", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Contenu", Q_NULLPTR));
        pushButton_mail->setText(QApplication::translate("MainWindow", "Envoyer mail", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Fournisseur", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
