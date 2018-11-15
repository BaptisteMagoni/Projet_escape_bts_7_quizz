/********************************************************************************
** Form generated from reading UI file 'windowquestion.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWQUESTION_H
#define UI_WINDOWQUESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApplicationQuestion
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_answer1;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_answer2;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_answer3;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QWidget *ApplicationQuestion)
    {
        if (ApplicationQuestion->objectName().isEmpty())
            ApplicationQuestion->setObjectName(QStringLiteral("ApplicationQuestion"));
        ApplicationQuestion->resize(479, 545);
        verticalLayout = new QVBoxLayout(ApplicationQuestion);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(ApplicationQuestion);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(ApplicationQuestion);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_answer1 = new QPushButton(widget_2);
        pushButton_answer1->setObjectName(QStringLiteral("pushButton_answer1"));
        pushButton_answer1->setMinimumSize(QSize(370, 75));

        horizontalLayout_2->addWidget(pushButton_answer1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(ApplicationQuestion);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        pushButton_answer2 = new QPushButton(widget_3);
        pushButton_answer2->setObjectName(QStringLiteral("pushButton_answer2"));
        pushButton_answer2->setMinimumSize(QSize(370, 75));

        horizontalLayout_3->addWidget(pushButton_answer2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(ApplicationQuestion);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        pushButton_answer3 = new QPushButton(widget_4);
        pushButton_answer3->setObjectName(QStringLiteral("pushButton_answer3"));
        pushButton_answer3->setMinimumSize(QSize(370, 75));

        horizontalLayout_4->addWidget(pushButton_answer3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout->addWidget(widget_4);


        retranslateUi(ApplicationQuestion);

        QMetaObject::connectSlotsByName(ApplicationQuestion);
    } // setupUi

    void retranslateUi(QWidget *ApplicationQuestion)
    {
        ApplicationQuestion->setWindowTitle(QApplication::translate("ApplicationQuestion", "Form", 0));
        label->setText(QApplication::translate("ApplicationQuestion", "Question", 0));
        pushButton_answer1->setText(QApplication::translate("ApplicationQuestion", "PushButton", 0));
        pushButton_answer2->setText(QApplication::translate("ApplicationQuestion", "PushButton", 0));
        pushButton_answer3->setText(QApplication::translate("ApplicationQuestion", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class ApplicationQuestion: public Ui_ApplicationQuestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWQUESTION_H
