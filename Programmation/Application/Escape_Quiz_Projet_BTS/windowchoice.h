#ifndef WINDOWCHOICE_H
#define WINDOWCHOICE_H

#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <iostream>
#include <client.h>

namespace Ui {
    class ApplicationMode;
}


class WindowChoice : public QWidget
{
    Q_OBJECT

public:
    WindowChoice(QWidget *parent, QSerialPort *serial, Client *client, bool demo);
    ~WindowChoice();

private:
    Ui::ApplicationMode *wc;
    QSerialPort *m_serial;
    QWidget *m_parent;
    Client * m_client;
    bool m_demo;

private:
    void init_widget_question();
    void link_widget_question(QString type_question);

private slots:
    void event_button_choice();
};

#endif // WINDOWCHOICE_H
