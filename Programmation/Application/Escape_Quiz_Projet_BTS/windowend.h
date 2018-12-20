#ifndef WINDOWEND_H
#define WINDOWEND_H

#include <QWidget>
#include <QSerialPort>
#include <iostream>
#include <QSerialPort>
#include <QMessageBox>
#include <client.h>

namespace Ui {
    class ApplicationEnd;
}

class WindowEnd : public QWidget
{
    Q_OBJECT

public:
    WindowEnd(QWidget *parent, QSerialPort *serial, std::vector<bool> score, QString answer_number_all, Client *client, bool demo);
    ~WindowEnd();

private:
    Ui::ApplicationEnd *we;
    std::vector<bool> m_score;
    QString m_number_all;
    QWidget *m_parent;
    QSerialPort *m_serial;
    QMessageBox m_message_box;
    QTcpSocket *m_tcpSocket;
    quint16 m_blockSize;
    QNetworkSession *m_networkSession;
    Client *m_client;
    bool m_demo;

private:
    int count_score();
    void show_windowchoice();
    void init_button();
    void display_message_box();
    void send_socket(const std::string& s);

private slots:
    void event_button();
};

#endif // WINDOWEND_H
