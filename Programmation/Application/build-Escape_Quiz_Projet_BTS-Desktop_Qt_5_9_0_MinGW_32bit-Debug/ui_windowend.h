/********************************************************************************
** Form generated from reading UI file 'windowend.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWEND_H
#define UI_WINDOWEND_H

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

class Ui_ApplicationEnd
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_score;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_finish;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *ApplicationEnd)
    {
        if (ApplicationEnd->objectName().isEmpty())
            ApplicationEnd->setObjectName(QStringLiteral("ApplicationEnd"));
        ApplicationEnd->resize(478, 478);
        verticalLayout = new QVBoxLayout(ApplicationEnd);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(ApplicationEnd);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_score = new QLabel(widget);
        label_score->setObjectName(QStringLiteral("label_score"));

        horizontalLayout->addWidget(label_score);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label = new QLabel(ApplicationEnd);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8("../Picto-Mixed-Quizz.png")));
        label->setScaledContents(true);

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget_2 = new QWidget(ApplicationEnd);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_finish = new QPushButton(widget_2);
        pushButton_finish->setObjectName(QStringLiteral("pushButton_finish"));

        horizontalLayout_2->addWidget(pushButton_finish);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(widget_2);


        retranslateUi(ApplicationEnd);

        QMetaObject::connectSlotsByName(ApplicationEnd);
    } // setupUi

    void retranslateUi(QWidget *ApplicationEnd)
    {
        ApplicationEnd->setWindowTitle(QApplication::translate("ApplicationEnd", "Form", Q_NULLPTR));
        label_score->setText(QApplication::translate("ApplicationEnd", "Score", Q_NULLPTR));
        label->setText(QString());
        pushButton_finish->setText(QApplication::translate("ApplicationEnd", "J'ai fini", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ApplicationEnd: public Ui_ApplicationEnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWEND_H
