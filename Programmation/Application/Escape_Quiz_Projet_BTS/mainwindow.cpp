#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "windowchoice.h"
#include <iostream>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QWidget>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    m_parent = parent;
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
        if(info.portName().compare("COM1") != 0)
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
    sendData("1");
    //connect(m_serial, SIGNAL(readyRead()), this, SLOT(readData()));
    //close_item_config();
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
        bool check = m_serial->open(QIODevice::ReadWrite);
        cout << "Conexion ok !" << endl;
        if(!check) close_item_config();

    }else{
        cout << "Error code : " << m_serial->error() << endl;
        cout << "Error string : " << m_serial->errorString().toStdString() << endl;
    }
}

void MainWindow::sendData(const QByteArray &data){
    m_serial->write(data);
    cout << "Envoi : " << data.toStdString() << endl;
}

void MainWindow::readData(){
    sendData("a");
}

void MainWindow::close_item_config(){
    ui->ApplicationGlobale->close();
    init_item_choice();
}

void MainWindow::show_item_config(){
    ui->ApplicationGlobale->show();
}

void MainWindow::init_item_choice(){
    WindowChoice *choice = new WindowChoice(this, m_serial);
    choice->show();
}
