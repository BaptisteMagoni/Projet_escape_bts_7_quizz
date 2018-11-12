#ifndef WINDOWCHOICE_H
#define WINDOWCHOICE_H

#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>

namespace Ui {
    class Form;
}


class WindowChoice : public QWidget
{
    Q_OBJECT

public:
    WindowChoice(QWidget *parent, QSerialPort *m_serial);
    ~WindowChoice();

private:
    Ui::Form *wc;
private:
    void read_sequence();
};

#endif // WINDOWCHOICE_H
