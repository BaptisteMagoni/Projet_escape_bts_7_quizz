#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <iostream>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

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
    void show_item_config();
    void close_item_config();
    void init_item_config();
    void show_item_choice();
    void close_item_choice();
    void init_item_choice();

private:
    Ui::MainWindow *ui;
    QSerialPort *m_serial;

private slots:
    void CheckButton();
    void sendData(const QByteArray &data);
    void readData();
};

#endif // MAINWINDOW_H
