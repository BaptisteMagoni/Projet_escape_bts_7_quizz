#ifndef CLIENT_H
#define CLIENT_H

#include <QTcpSocket>
#include <QNetworkSession>

class Client : public QObject
{
public:
    Client();

private:
    QTcpSocket *m_tcpSocket;
    quint16 m_blockSize;
    QNetworkSession *m_networkSession;
    void send_data( const std::string& s);
};

#endif // CLIENT_H
