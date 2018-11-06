#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>

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

private:
    Ui::MainWindow *ui;
    QSerialPort * m_serial;

private slots:
    void CheckButton();
};

#endif // MAINWINDOW_H
