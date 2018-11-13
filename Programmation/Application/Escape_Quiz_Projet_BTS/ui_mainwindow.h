/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *ApplicationGlobale;
    QVBoxLayout *verticalLayout_2;
    QWidget *ZoneLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *espaceGauche_3;
    QLabel *label_bienvenue;
    QSpacerItem *espaceDroit_3;
    QWidget *ZoneComboBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *espaceGauche;
    QComboBox *comboBox_com;
    QSpacerItem *espaceDroit;
    QWidget *ZoneBouton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *espaceGauche_2;
    QPushButton *button_start;
    QSpacerItem *espaceDroit_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(484, 580);
        ApplicationGlobale = new QWidget(MainWindow);
        ApplicationGlobale->setObjectName(QStringLiteral("ApplicationGlobale"));
        verticalLayout_2 = new QVBoxLayout(ApplicationGlobale);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        ZoneLabel = new QWidget(ApplicationGlobale);
        ZoneLabel->setObjectName(QStringLiteral("ZoneLabel"));
        horizontalLayout = new QHBoxLayout(ZoneLabel);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        espaceGauche_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(espaceGauche_3);

        label_bienvenue = new QLabel(ZoneLabel);
        label_bienvenue->setObjectName(QStringLiteral("label_bienvenue"));

        horizontalLayout->addWidget(label_bienvenue);

        espaceDroit_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(espaceDroit_3);


        verticalLayout_2->addWidget(ZoneLabel);

        ZoneComboBox = new QWidget(ApplicationGlobale);
        ZoneComboBox->setObjectName(QStringLiteral("ZoneComboBox"));
        horizontalLayout_2 = new QHBoxLayout(ZoneComboBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        espaceGauche = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(espaceGauche);

        comboBox_com = new QComboBox(ZoneComboBox);
        comboBox_com->setObjectName(QStringLiteral("comboBox_com"));

        horizontalLayout_2->addWidget(comboBox_com);

        espaceDroit = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(espaceDroit);


        verticalLayout_2->addWidget(ZoneComboBox);

        ZoneBouton = new QWidget(ApplicationGlobale);
        ZoneBouton->setObjectName(QStringLiteral("ZoneBouton"));
        horizontalLayout_3 = new QHBoxLayout(ZoneBouton);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        espaceGauche_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(espaceGauche_2);

        button_start = new QPushButton(ZoneBouton);
        button_start->setObjectName(QStringLiteral("button_start"));
        button_start->setEnabled(true);

        horizontalLayout_3->addWidget(button_start);

        espaceDroit_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(espaceDroit_2);


        verticalLayout_2->addWidget(ZoneBouton);

        MainWindow->setCentralWidget(ApplicationGlobale);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_bienvenue->setText(QApplication::translate("MainWindow", "Bienvenue sur l'application QUIZZ", 0));
        button_start->setText(QApplication::translate("MainWindow", "Valider", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
