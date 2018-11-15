#ifndef WINDOWCHOICE_H
#define WINDOWCHOICE_H

#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <iostream>

namespace Ui {
    class ApplicationMode;
}


class WindowChoice : public QWidget
{
    Q_OBJECT

public:
    WindowChoice(QWidget *parent, QSerialPort *serial);
    ~WindowChoice();

private:
    Ui::ApplicationMode *wc;
    QSerialPort *m_serial;
    QWidget *m_parent;

private:
    void init_widget_question();
    void link_widget_question(QString type_question);

private slots:
    void event_button_choice();
};

#endif // WINDOWCHOICE_H
