#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <iostream>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void setComPort();
    void setObject();
    void openPort(QString portName, QSerialPort::BaudRate actualBaudRate);

private:
    Ui::MainWindow *ui;
    QSerialPort * m_serial;

private slots:
    void CheckButton();
    void sendData(const char *data);
    char readData();
};

#endif // MAINWINDOW_H
