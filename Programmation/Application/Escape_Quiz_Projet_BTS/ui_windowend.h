/********************************************************************************
** Form generated from reading UI file 'windowend.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApplicationEnd
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_score;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ApplicationEnd)
    {
        if (ApplicationEnd->objectName().isEmpty())
            ApplicationEnd->setObjectName(QStringLiteral("ApplicationEnd"));
        ApplicationEnd->resize(400, 369);
        horizontalLayout = new QHBoxLayout(ApplicationEnd);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_score = new QLabel(ApplicationEnd);
        label_score->setObjectName(QStringLiteral("label_score"));

        horizontalLayout->addWidget(label_score);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(ApplicationEnd);

        QMetaObject::connectSlotsByName(ApplicationEnd);
    } // setupUi

    void retranslateUi(QWidget *ApplicationEnd)
    {
        ApplicationEnd->setWindowTitle(QApplication::translate("ApplicationEnd", "Form", 0));
        label_score->setText(QApplication::translate("ApplicationEnd", "Score", 0));
    } // retranslateUi

};

namespace Ui {
    class ApplicationEnd: public Ui_ApplicationEnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWEND_H
