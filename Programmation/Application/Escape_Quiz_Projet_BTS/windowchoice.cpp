#include "windowchoice.h"
#include "ui_windowchoice.h"
#include <QSerialPort>
#include <QSerialPortInfo>

WindowChoice::WindowChoice(QWidget *parent, QSerialPort *m_serial) :
    QWidget(parent),
    wc(new Ui::Form)
{
    wc->setupUi(this);
}

WindowChoice::~WindowChoice()
{
    delete wc;
}
