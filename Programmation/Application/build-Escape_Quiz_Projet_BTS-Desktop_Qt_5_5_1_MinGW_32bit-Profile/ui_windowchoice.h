/********************************************************************************
** Form generated from reading UI file 'windowchoice.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWCHOICE_H
#define UI_WINDOWCHOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApplicationMode
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_musical;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_informatique;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_mixte;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *ApplicationMode)
    {
        if (ApplicationMode->objectName().isEmpty())
            ApplicationMode->setObjectName(QStringLiteral("ApplicationMode"));
        ApplicationMode->resize(478, 602);
        ApplicationMode->setStyleSheet(QStringLiteral("background-color: rgb(203, 203, 152);"));
        verticalLayout = new QVBoxLayout(ApplicationMode);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(ApplicationMode);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QStringLiteral("background-color: rgb(203, 203, 152);"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_musical = new QPushButton(widget_2);
        pushButton_musical->setObjectName(QStringLiteral("pushButton_musical"));
        pushButton_musical->setEnabled(true);
        pushButton_musical->setMinimumSize(QSize(400, 170));
        pushButton_musical->setSizeIncrement(QSize(1000, 1000));
        pushButton_musical->setBaseSize(QSize(1000, 10000));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 170, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush2(QColor(51, 153, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        pushButton_musical->setPalette(palette);
        pushButton_musical->setStyleSheet(QLatin1String("background-color: rgb(0, 170, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Comic Sans MS\";"));

        horizontalLayout_2->addWidget(pushButton_musical);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(ApplicationMode);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        pushButton_informatique = new QPushButton(widget_3);
        pushButton_informatique->setObjectName(QStringLiteral("pushButton_informatique"));
        pushButton_informatique->setMinimumSize(QSize(400, 170));
        pushButton_informatique->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Comic Sans MS\";"));

        horizontalLayout_3->addWidget(pushButton_informatique);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget_3);

        widget = new QWidget(ApplicationMode);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        pushButton_mixte = new QPushButton(widget);
        pushButton_mixte->setObjectName(QStringLiteral("pushButton_mixte"));
        pushButton_mixte->setEnabled(false);
        pushButton_mixte->setMinimumSize(QSize(400, 170));
        pushButton_mixte->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Comic Sans MS\";"));

        horizontalLayout->addWidget(pushButton_mixte);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addWidget(widget);


        retranslateUi(ApplicationMode);

        QMetaObject::connectSlotsByName(ApplicationMode);
    } // setupUi

    void retranslateUi(QWidget *ApplicationMode)
    {
        ApplicationMode->setWindowTitle(QApplication::translate("ApplicationMode", "Form", 0));
        pushButton_musical->setText(QApplication::translate("ApplicationMode", "Quizz Musical", 0));
        pushButton_informatique->setText(QApplication::translate("ApplicationMode", "Quizz Informatique", 0));
        pushButton_mixte->setText(QApplication::translate("ApplicationMode", "Quizz al\303\251atoire", 0));
    } // retranslateUi

};

namespace Ui {
    class ApplicationMode: public Ui_ApplicationMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWCHOICE_H
