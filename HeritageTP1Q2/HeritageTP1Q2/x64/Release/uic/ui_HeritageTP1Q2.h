/********************************************************************************
** Form generated from reading UI file 'HeritageTP1Q2.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HERITAGETP1Q2_H
#define UI_HERITAGETP1Q2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HeritageTP1Q2Class
{
public:
    QWidget *centralWidget;
    QPushButton *BoutonAfficheD;
    QPushButton *BoutonTireD;
    QLabel *labelJet;
    QLabel *labelD;
    QPushButton *BoutonJet;
    QPushButton *BoutonHisto;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HeritageTP1Q2Class)
    {
        if (HeritageTP1Q2Class->objectName().isEmpty())
            HeritageTP1Q2Class->setObjectName(QString::fromUtf8("HeritageTP1Q2Class"));
        HeritageTP1Q2Class->resize(654, 469);
        HeritageTP1Q2Class->setStyleSheet(QString::fromUtf8("color-background:rgba(46, 46, 46, 246);"));
        centralWidget = new QWidget(HeritageTP1Q2Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        BoutonAfficheD = new QPushButton(centralWidget);
        BoutonAfficheD->setObjectName(QString::fromUtf8("BoutonAfficheD"));
        BoutonAfficheD->setGeometry(QRect(30, 50, 231, 41));
        BoutonAfficheD->setStyleSheet(QString::fromUtf8("background-color:rgb(170, 170, 255);\n"
"border-radius:10px;\n"
"color:white;\n"
"font:15px;\n"
"font: 16pt \"Trebuchet MS\";\n"
"\n"
""));
        BoutonTireD = new QPushButton(centralWidget);
        BoutonTireD->setObjectName(QString::fromUtf8("BoutonTireD"));
        BoutonTireD->setGeometry(QRect(290, 50, 131, 41));
        BoutonTireD->setStyleSheet(QString::fromUtf8("background-color:rgb(170, 170, 255);\n"
"border-radius:10px;\n"
"color:white;\n"
"font:15px;\n"
"font: 16pt \"Trebuchet MS\";"));
        labelJet = new QLabel(centralWidget);
        labelJet->setObjectName(QString::fromUtf8("labelJet"));
        labelJet->setGeometry(QRect(190, 200, 91, 71));
        labelJet->setStyleSheet(QString::fromUtf8("font: 16pt \"Trebuchet MS\";"));
        labelD = new QLabel(centralWidget);
        labelD->setObjectName(QString::fromUtf8("labelD"));
        labelD->setGeometry(QRect(190, 90, 91, 71));
        labelD->setStyleSheet(QString::fromUtf8("font: 16pt \"Trebuchet MS\";"));
        BoutonJet = new QPushButton(centralWidget);
        BoutonJet->setObjectName(QString::fromUtf8("BoutonJet"));
        BoutonJet->setGeometry(QRect(160, 160, 151, 41));
        BoutonJet->setStyleSheet(QString::fromUtf8("background-color:rgb(170, 170, 255);\n"
"border-radius:10px;\n"
"color:white;\n"
"font:15px;\n"
"font: 16pt \"Trebuchet MS\";\n"
""));
        BoutonHisto = new QPushButton(centralWidget);
        BoutonHisto->setObjectName(QString::fromUtf8("BoutonHisto"));
        BoutonHisto->setGeometry(QRect(490, 50, 121, 41));
        BoutonHisto->setStyleSheet(QString::fromUtf8("background-color:rgb(170, 170, 255);\n"
"border-radius:10px;\n"
"color:white;\n"
"font:15px;\n"
"font: 16pt \"Trebuchet MS\";"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(475, 101, 141, 211));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:0.33 rgba(0, 0, 0, 255), stop:0.34 rgba(255, 30, 30, 255), stop:0.66 rgba(255, 0, 0, 255), stop:0.67 rgba(255, 255, 0, 255), stop:1 rgba(255, 255, 0, 255));\n"
"border-radius:10px;\n"
"\n"
"font:15px\n"
""));
        HeritageTP1Q2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HeritageTP1Q2Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 654, 21));
        HeritageTP1Q2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HeritageTP1Q2Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        HeritageTP1Q2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HeritageTP1Q2Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        HeritageTP1Q2Class->setStatusBar(statusBar);

        retranslateUi(HeritageTP1Q2Class);
        QObject::connect(BoutonAfficheD, SIGNAL(clicked()), HeritageTP1Q2Class, SLOT(onBoutonDclicked()));
        QObject::connect(BoutonTireD, SIGNAL(clicked()), HeritageTP1Q2Class, SLOT(onJet()));
        QObject::connect(BoutonJet, SIGNAL(clicked()), HeritageTP1Q2Class, SLOT(onBoutonJet()));

        QMetaObject::connectSlotsByName(HeritageTP1Q2Class);
    } // setupUi

    void retranslateUi(QMainWindow *HeritageTP1Q2Class)
    {
        HeritageTP1Q2Class->setWindowTitle(QCoreApplication::translate("HeritageTP1Q2Class", "HeritageTP1Q2", nullptr));
        BoutonAfficheD->setText(QCoreApplication::translate("HeritageTP1Q2Class", "Affiche la valeur du d\303\251", nullptr));
        BoutonTireD->setText(QCoreApplication::translate("HeritageTP1Q2Class", "Tire le d\303\251", nullptr));
        labelJet->setText(QCoreApplication::translate("HeritageTP1Q2Class", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#5555ff;\">TextLabel</span></p></body></html>", nullptr));
        labelD->setText(QCoreApplication::translate("HeritageTP1Q2Class", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#5555ff;\">TextLabel</span></p></body></html>", nullptr));
        BoutonJet->setText(QCoreApplication::translate("HeritageTP1Q2Class", "Nombre de Jets", nullptr));
        BoutonHisto->setText(QCoreApplication::translate("HeritageTP1Q2Class", "Historique", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HeritageTP1Q2Class: public Ui_HeritageTP1Q2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HERITAGETP1Q2_H
