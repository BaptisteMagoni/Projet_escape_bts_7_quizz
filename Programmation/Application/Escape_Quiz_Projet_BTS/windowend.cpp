#include "windowend.h"

#include <ui_windowend.h>
#include <QWidget>
#include <QSerialPort>
#include <iostream>

WindowEnd::WindowEnd(QWidget *parent, QSerialPort *serial, std::vector<bool> score) :
    QWidget(parent),
    we(new Ui::ApplicationEnd)
{
    we->setupUi(this);
}

WindowEnd::~WindowEnd(){

}
