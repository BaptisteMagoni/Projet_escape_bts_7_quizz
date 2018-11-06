#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>
#include <QSerialPort>
#include <QSerialPortInfo>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_serial(new QSerialPort(this))
{
    ui->setupUi(this);
    setComPort();
    setObject();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setComPort(){
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
            ui->comboBox_com->addItem(info.portName() + " : " + info.description());
}

void MainWindow::setObject(){
    connect(ui->button_start, SIGNAL (released()), this, SLOT(CheckButton()));
}

void MainWindow::CheckButton(){
    cout << ui->comboBox_com->currentText().toStdString() << endl;
    QString textCurrent = ui->comboBox_com->currentText();
    QStringList listContent = textCurrent.split(":");
    QString comPort = listContent.at(0);
    comPort = comPort.replace(" ", "");
    QString nameDevice = listContent.at(1);
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
            if(info.portName().compare(comPort) == 0)
                openPort(comPort, QSerialPort::Baud9600);

    m_serial->write("OPEN");
}

bool MainWindow::openPort(QString portName, QSerialPort::BaudRate actualBaudRate)
{
    bool open = false;

    if (NULL != m_serial)
    {
        open = m_serial->open(QIODevice::WriteOnly);
        m_serial->setPortName(portName);
        m_serial->setBaudRate(actualBaudRate);
        m_serial->setDataBits(QSerialPort::Data8);
        m_serial->setParity(QSerialPort::NoParity);
        m_serial->setStopBits(QSerialPort::OneStop);
        m_serial->setFlowControl(QSerialPort::HardwareControl);
    }
    return open;
}
