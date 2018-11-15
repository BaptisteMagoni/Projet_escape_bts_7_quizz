#ifndef WINDOWQUESTION_H
#define WINDOWQUESTION_H

#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QFile>
#include <vector>
#include <iostream>
#include <QString>

namespace Ui{
    class ApplicationQuestion;
}

class WindowQuestion : public QWidget
{

    Q_OBJECT

public:
    WindowQuestion(QWidget *parent, QSerialPort *serial, QString type_question);
    ~WindowQuestion();

private:
    Ui::ApplicationQuestion *wq;
    QSerialPort *m_serial;
    QString m_type_question;
    std::vector<QString> question;
    int question_number;

private:
    void read_one_question();
    void open_file();
    void display_question();
};

#endif // WINDOWQUESTION_H
