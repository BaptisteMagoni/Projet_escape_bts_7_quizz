/********************************************************************************
** Form generated from reading UI file 'windowquestion.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
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
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_page;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_question_ligne1;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_question_ligne2;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_answer1;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_answer2;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_answer3;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget_rejouer;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *pushButton_rejouer;

    void setupUi(QWidget *ApplicationQuestion)
    {
        if (ApplicationQuestion->objectName().isEmpty())
            ApplicationQuestion->setObjectName(QStringLiteral("ApplicationQuestion"));
        ApplicationQuestion->resize(478, 558);
        verticalLayout = new QVBoxLayout(ApplicationQuestion);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_5 = new QWidget(ApplicationQuestion);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        label_page = new QLabel(widget_5);
        label_page->setObjectName(QStringLiteral("label_page"));
        label_page->setStyleSheet(QLatin1String("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(223, 67, 28, 228));\n"
"font: italic 8pt \"Comic Sans MS\";"));

        horizontalLayout_5->addWidget(label_page);


        verticalLayout->addWidget(widget_5);

        widget = new QWidget(ApplicationQuestion);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget_7 = new QWidget(widget);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(widget_7);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_question_ligne1 = new QLabel(widget_7);
        label_question_ligne1->setObjectName(QStringLiteral("label_question_ligne1"));
        label_question_ligne1->setStyleSheet(QLatin1String("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(223, 67, 28, 228));\n"
"font: 12pt \"Comic Sans MS\";"));

        horizontalLayout->addWidget(label_question_ligne1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(widget_7);

        widget_6 = new QWidget(widget);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setMinimumSize(QSize(0, 0));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        label_question_ligne2 = new QLabel(widget_6);
        label_question_ligne2->setObjectName(QStringLiteral("label_question_ligne2"));
        label_question_ligne2->setStyleSheet(QLatin1String("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(223, 67, 28, 228));\n"
"font: 12pt \"Comic Sans MS\";"));

        horizontalLayout_6->addWidget(label_question_ligne2);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);


        verticalLayout_2->addWidget(widget_6);


        verticalLayout->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget_2 = new QWidget(ApplicationQuestion);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_answer1 = new QPushButton(widget_2);
        pushButton_answer1->setObjectName(QStringLiteral("pushButton_answer1"));
        pushButton_answer1->setMinimumSize(QSize(370, 75));
        pushButton_answer1->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(223, 67, 28, 228));\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Comic Sans MS\";"));

        horizontalLayout_2->addWidget(pushButton_answer1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(widget_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget_3 = new QWidget(ApplicationQuestion);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        pushButton_answer2 = new QPushButton(widget_3);
        pushButton_answer2->setObjectName(QStringLiteral("pushButton_answer2"));
        pushButton_answer2->setMinimumSize(QSize(370, 75));
        pushButton_answer2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(223, 67, 28, 228));\n"
"font: 12pt \"Comic Sans MS\";"));

        horizontalLayout_3->addWidget(pushButton_answer2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addWidget(widget_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        widget_4 = new QWidget(ApplicationQuestion);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        pushButton_answer3 = new QPushButton(widget_4);
        pushButton_answer3->setObjectName(QStringLiteral("pushButton_answer3"));
        pushButton_answer3->setMinimumSize(QSize(370, 75));
        pushButton_answer3->setStyleSheet(QLatin1String("font: 12pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(223, 67, 28, 228));"));

        horizontalLayout_4->addWidget(pushButton_answer3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout->addWidget(widget_4);

        widget_rejouer = new QWidget(ApplicationQuestion);
        widget_rejouer->setObjectName(QStringLiteral("widget_rejouer"));
        horizontalLayout_7 = new QHBoxLayout(widget_rejouer);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);

        pushButton_rejouer = new QPushButton(widget_rejouer);
        pushButton_rejouer->setObjectName(QStringLiteral("pushButton_rejouer"));
        pushButton_rejouer->setStyleSheet(QLatin1String("font: 8pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(223, 67, 28, 228));\n"
"border: 1px solid black;\n"
"padding: 2px;"));

        horizontalLayout_7->addWidget(pushButton_rejouer);


        verticalLayout->addWidget(widget_rejouer);


        retranslateUi(ApplicationQuestion);

        QMetaObject::connectSlotsByName(ApplicationQuestion);
    } // setupUi

    void retranslateUi(QWidget *ApplicationQuestion)
    {
        ApplicationQuestion->setWindowTitle(QApplication::translate("ApplicationQuestion", "Form", Q_NULLPTR));
        label_page->setText(QApplication::translate("ApplicationQuestion", "{page}/{nb_de_page}", Q_NULLPTR));
        label_question_ligne1->setText(QApplication::translate("ApplicationQuestion", "Question_ligne1", Q_NULLPTR));
        label_question_ligne2->setText(QApplication::translate("ApplicationQuestion", "Question_ligne2", Q_NULLPTR));
        pushButton_answer1->setText(QApplication::translate("ApplicationQuestion", "PushButton", Q_NULLPTR));
        pushButton_answer2->setText(QApplication::translate("ApplicationQuestion", "PushButton", Q_NULLPTR));
        pushButton_answer3->setText(QApplication::translate("ApplicationQuestion", "PushButton", Q_NULLPTR));
        pushButton_rejouer->setText(QApplication::translate("ApplicationQuestion", "Rejouer la musique", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ApplicationQuestion: public Ui_ApplicationQuestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWQUESTION_H
