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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_musicale;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_informatique;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_mixte;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(484, 602);
        verticalLayout = new QVBoxLayout(Form);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(Form);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_musicale = new QPushButton(widget_2);
        pushButton_musicale->setObjectName(QStringLiteral("pushButton_musicale"));
        pushButton_musicale->setMinimumSize(QSize(0, 23));
        QPalette palette;
        QBrush brush(QColor(0, 170, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        QBrush brush1(QColor(51, 153, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        pushButton_musicale->setPalette(palette);

        horizontalLayout_2->addWidget(pushButton_musicale);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(Form);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_informatique = new QPushButton(widget_3);
        pushButton_informatique->setObjectName(QStringLiteral("pushButton_informatique"));
        pushButton_informatique->setMinimumSize(QSize(0, 23));

        horizontalLayout_3->addWidget(pushButton_informatique);


        verticalLayout->addWidget(widget_3);

        widget = new QWidget(Form);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_mixte = new QPushButton(widget);
        pushButton_mixte->setObjectName(QStringLiteral("pushButton_mixte"));

        horizontalLayout->addWidget(pushButton_mixte);


        verticalLayout->addWidget(widget);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        pushButton_musicale->setText(QApplication::translate("Form", "Quizz Musicale", 0));
        pushButton_informatique->setText(QApplication::translate("Form", "Quizz Informatique", 0));
        pushButton_mixte->setText(QApplication::translate("Form", "Quizz mixte", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWCHOICE_H
