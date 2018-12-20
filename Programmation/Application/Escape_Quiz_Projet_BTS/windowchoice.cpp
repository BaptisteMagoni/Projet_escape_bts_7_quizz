#include "windowchoice.h"
#include "ui_windowchoice.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <windowquestion.h>
#include <iostream>
#include <client.h>

using namespace std;

WindowChoice::WindowChoice(QWidget *parent, QSerialPort *serial, Client *client, bool demo) :
    QWidget(parent),
    wc(new Ui::ApplicationMode)
{
    m_serial = serial;
    wc->setupUi(this);
    m_parent = parent;
    init_widget_question();
    m_client = client;
    m_demo = demo;
    if(!m_demo)
        wc->label_mode->hide();
    else
        wc->label_mode->show();
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
    WindowQuestion *question = new WindowQuestion(m_parent, m_serial, type_question, m_client, m_demo);
    question->show();
}

void WindowChoice::event_button_choice(){
    this->close();
    QPushButton *btnSender = qobject_cast<QPushButton*>(sender());
    QString clickedBtnName = btnSender->objectName();
    QStringList list_name = clickedBtnName.split("_");
    link_widget_question(list_name.at(1));
}
