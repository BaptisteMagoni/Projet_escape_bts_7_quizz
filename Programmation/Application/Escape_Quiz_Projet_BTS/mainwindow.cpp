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
    QString nameDevice = listContent.at(1);

}
