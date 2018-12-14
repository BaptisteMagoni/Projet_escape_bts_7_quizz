#ifndef CLIENT_H
#define CLIENT_H

#include <QTcpSocket>
#include <QNetworkSession>

class Client : public QObject
{
public:
    Client();
    Client(QString addr);
    bool getStateConnection();
    void finish();
private:
    QTcpSocket *m_tcpSocket;
    quint16 m_blockSize;
    QNetworkSession *m_networkSession;
    bool m_state_connection;
private:
    void send_data( const std::string& s);
    void connection_socket(QString addr = NULL);

};

#endif // CLIENT_H
