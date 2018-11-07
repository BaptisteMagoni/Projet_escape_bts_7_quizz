#include "mainwindow.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>
#include <QSerialPort>
#include <QSerialPortInfo>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setComPort();
    setObject();
}

MainWindow::~MainWindow()
{
    delete ui;
    m_serial->close();
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
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
        if(info.portName().compare(comPort) == 0)
            openPort(comPort, QSerialPort::Baud9600);
    sendData("ALLUME");
}

void MainWindow::openPort(QString portName, QSerialPort::BaudRate actualBaudRate)
{
    m_serial = new QSerialPort(this);
    m_serial->setPortName(portName);
    if(m_serial->open(QSerialPort::ReadWrite)){
        m_serial->setBaudRate(actualBaudRate);
        m_serial->setDataBits(QSerialPort::Data8);
        m_serial->setParity(QSerialPort::NoParity);
        m_serial->setStopBits(QSerialPort::OneStop);
        m_serial->setFlowControl(QSerialPort::NoFlowControl);
        m_serial->open(QIODevice::ReadWrite);
        cout << "Conexion" << endl;
    }else{
        cout << "Error code : " << m_serial->error() << endl;
        cout << "Error string : " << m_serial->errorString().toStdString() << endl;
    }
}

void MainWindow::sendData(const char * data){
    m_serial->write(data);
    cout << "Envoi : " << data << endl;
}

char MainWindow::readData(){

}
