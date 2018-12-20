#include "windowend.h"

#include <ui_windowend.h>
#include <QWidget>
#include <QSerialPort>
#include <iostream>
#include <windowchoice.h>
#include <QMessageBox>

WindowEnd::WindowEnd(QWidget *parent, QSerialPort *serial, std::vector<bool> score, QString answer_number_all, Client *client, bool demo) :
    QWidget(parent),
    we(new Ui::ApplicationEnd)
{
    we->setupUi(this);
    m_score = score;
    m_parent = parent;
    m_serial = serial;
    m_number_all = answer_number_all;
    init_button();
    we->label_score->setText("Vous avez un total de " + QString::number(count_score()) + "/" + m_number_all + " bonne réponse !");
    m_client = client;
    m_demo = demo;
}

WindowEnd::~WindowEnd(){
    delete we;
}

int WindowEnd::count_score(){
    int nb = 0;
    for(unsigned int i=0;i<m_score.size();i++)
        if(m_score.at(i))
            nb++;
    return nb;
}

void WindowEnd::init_button(){
    connect(we->pushButton_finish, SIGNAL (released()), this, SLOT(event_button()));
}

void WindowEnd::event_button(){
    show_windowchoice();
}

void WindowEnd::display_message_box(){
    m_message_box.setText("Bravo vous avez réussi vous pouvez passer a l'énigme suivante");
    m_message_box.exec();
}

void WindowEnd::show_windowchoice(){
    m_client->finish();
    this->close();
    display_message_box();
    WindowChoice *choice = new WindowChoice(m_parent, m_serial, m_client, m_demo);
    choice->show();
}
