#ifndef WINDOWEND_H
#define WINDOWEND_H

#include <QWidget>
#include <QSerialPort>
#include <iostream>
#include <QSerialPort>
#include <QMessageBox>
#include "client.h"

namespace Ui {
    class ApplicationEnd;
}

class WindowEnd : public QWidget
{
    Q_OBJECT

public:
    WindowEnd(QWidget *parent, QSerialPort *serial, std::vector<bool> score, QString answer_number_all);
    ~WindowEnd();

private:
    Ui::ApplicationEnd *we;
    std::vector<bool> m_score;
    QString m_number_all;
    QWidget *m_parent;
    QSerialPort *m_serial;
    QMessageBox m_message_box;
    Client *m_c;

private:
    int count_score();
    void show_windowchoice();
    void init_button();
    void display_message_box();

private slots:
    void event_button();
};

#endif // WINDOWEND_H
