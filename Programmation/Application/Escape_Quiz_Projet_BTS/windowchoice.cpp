#include "windowchoice.h"
#include "ui_windowchoice.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <windowquestion.h>
#include <iostream>

using namespace std;

WindowChoice::WindowChoice(QWidget *parent, QSerialPort *serial) :
    QWidget(parent),
    wc(new Ui::ApplicationMode)
{
    m_serial = serial;
    wc->setupUi(this);
    m_parent = parent;
    init_widget_question();
}

WindowChoice::~WindowChoice()
{
    delete wc;
}

void WindowChoice::init_widget_question(){
    connect(wc->pushButton_musical, SIGNAL (released()), this, SLOT(event_button_choice()));
    connect(wc->pushButton_informatique, SIGNAL (released()), this, SLOT(event_button_choice()));
}

void WindowChoice::link_widget_question(QString type_question){
    WindowQuestion *question = new WindowQuestion(m_parent, m_serial, type_question);
    question->show();
}

void WindowChoice::event_button_choice(){
    this->close();
    QPushButton *btnSender = qobject_cast<QPushButton*>(sender());
    QString clickedBtnName = btnSender->objectName();
    QStringList list_name = clickedBtnName.split("_");
    link_widget_question(list_name.at(1));
}
