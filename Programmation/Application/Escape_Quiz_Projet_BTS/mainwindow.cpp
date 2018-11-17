#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "windowchoice.h"
#include <iostream>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QWidget>
#include <QMessageBox>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    m_parent = parent;
    ui->setupUi(this);
    setObject();
    setComPort();
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
    if(ui->comboBox_com->count() == 1){
        m_message_error = "Aucune carte arduino a été détecter."
                          "\nSi votre carte arduino est brancher sur votre ardinateur vérifier que le driver CH341SER est bien installé."
                          "\nSi celui ci n'est pas installé, consulter la page suivante : https://sparks.gogo.co.nz/ch340.html";
        display_message_box();
    }
}

void MainWindow::setObject(){
    connect(ui->button_start, SIGNAL (released()), this, SLOT(CheckButton()));
    connect(ui->pushButton_refresh, SIGNAL (released()), this, SLOT(refresh()));
}

void MainWindow::refresh(){
    ui->comboBox_com->clear();
    ui->comboBox_com->addItem("Séléctionner une carte arduino");
    setComPort();
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
        bool isClose = m_serial->open(QIODevice::ReadWrite);
        cout << "Conexion ok !" << endl;
        if(!isClose) close_item_config();
        else {
            m_message_error = "Le port série " + portName + " n'a pas été ouvert !\n\nRessayer !";
            display_message_box();
        }

    }else{
        cout << "Error code : " << m_serial->error() << endl;
        cout << "Error string : " << m_serial->errorString().toStdString() << endl;
        m_message_error = "Le port série " + portName + " de la carte arduino est déja ouvert !\n\nRessayer !";
        display_message_box();
    }
}

void MainWindow::display_message_box(){
    m_box.setText(m_message_error);
    m_box.setToolTip("Error");
    m_box.exec();
}

void MainWindow::sendData(const QByteArray &data){
    m_serial->write(data);
    cout << "Envoi : " << data.toStdString() << endl;
}

void MainWindow::readData(){
    cout << m_serial->readAll().toStdString() << endl;
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
