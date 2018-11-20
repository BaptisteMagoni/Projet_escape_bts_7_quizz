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
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_score;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_finish;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *ApplicationEnd)
    {
        if (ApplicationEnd->objectName().isEmpty())
            ApplicationEnd->setObjectName(QStringLiteral("ApplicationEnd"));
        ApplicationEnd->resize(479, 556);
        ApplicationEnd->setMinimumSize(QSize(479, 556));
        ApplicationEnd->setMaximumSize(QSize(479, 556));
        verticalLayout = new QVBoxLayout(ApplicationEnd);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(ApplicationEnd);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(365, 367));
        label->setAutoFillBackground(true);
        label->setTextFormat(Qt::AutoText);
        label->setPixmap(QPixmap(QString::fromUtf8("../Picto-Mixed-Quizz.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        label_score = new QLabel(ApplicationEnd);
        label_score->setObjectName(QStringLiteral("label_score"));

        horizontalLayout_7->addWidget(label_score);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_7);


        verticalLayout->addLayout(verticalLayout_4);

        widget_2 = new QWidget(ApplicationEnd);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_finish = new QPushButton(widget_2);
        pushButton_finish->setObjectName(QStringLiteral("pushButton_finish"));
        pushButton_finish->setMinimumSize(QSize(75, 23));
        pushButton_finish->setMaximumSize(QSize(100, 35));
        pushButton_finish->setIconSize(QSize(40, 40));

        horizontalLayout_2->addWidget(pushButton_finish);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(widget_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(ApplicationEnd);

        QMetaObject::connectSlotsByName(ApplicationEnd);
    } // setupUi

    void retranslateUi(QWidget *ApplicationEnd)
    {
        ApplicationEnd->setWindowTitle(QApplication::translate("ApplicationEnd", "Form", Q_NULLPTR));
        label->setText(QString());
        label_score->setText(QApplication::translate("ApplicationEnd", "Score", Q_NULLPTR));
        pushButton_finish->setText(QApplication::translate("ApplicationEnd", "J'ai fini", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ApplicationEnd: public Ui_ApplicationEnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWEND_H
