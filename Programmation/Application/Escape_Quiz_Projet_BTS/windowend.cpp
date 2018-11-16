#include "windowend.h"

#include <ui_windowend.h>
#include <QWidget>
#include <QSerialPort>
#include <iostream>

WindowEnd::WindowEnd(QWidget *parent, QSerialPort *serial, std::vector<bool> score, QString answer_number_all) :
    QWidget(parent),
    we(new Ui::ApplicationEnd)
{
    we->setupUi(this);
    m_score = score;
    m_number_all = answer_number_all;
    we->label_score->setText("Vous avez un total de " + QString::number(count_score()) + "/" + m_number_all + " bonne réponse !");
}

WindowEnd::~WindowEnd(){
    delete we;
}

int WindowEnd::count_score(){
    int nb = 0;
    for(int i=0;i<m_score.size();i++)
        if(m_score.at(i))
            nb++;
    return nb;
}
