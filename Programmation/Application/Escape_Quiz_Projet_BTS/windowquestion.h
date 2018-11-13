#ifndef WINDOWQUESTION_H
#define WINDOWQUESTION_H

#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>

namespace Ui{
    class ApplicationQuestion;
}

class WindowQuestion : public QWidget
{

    Q_OBJECT

public:
    WindowQuestion(QWidget *parent, QSerialPort *serial);
    ~WindowQuestion();

private:
    Ui::ApplicationQuestion *wq;
    QSerialPort *m_serial;

private:
    void read_question();
};

#endif // WINDOWQUESTION_H
