#include "windowquestion.h"

#include "ui_windowquestion.h"

#include <QSerialPort>
#include <QSerialPortInfo>
#include <windowchoice.h>
#include <iostream>

using namespace std;

WindowQuestion::WindowQuestion(QWidget *parent, QSerialPort *serial) :
    QWidget(parent),
    wq(new Ui::ApplicationQuestion)
{
    wq->setupUi(this);
    m_serial = serial;
    cout << "Salussss" << endl;

}

WindowQuestion::~WindowQuestion()
{
    delete wq;
}

