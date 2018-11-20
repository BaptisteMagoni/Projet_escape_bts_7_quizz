#include "client.h"
#include "QNetworkConfiguration"
#include <iostream>
#include <QTcpSocket>
#include <QNetworkSession>
#include <QDataStream>
#include <QByteArray>
#include <QIODevice>
#include <sstream>

Client::Client() : m_networkSession(0)
{
    std::cout << "Application Client" << std::endl;
    m_tcpSocket = new QTcpSocket(this);

    QNetworkConfiguration config;

    std::cout << "Ouverture session" << std::endl;
    m_networkSession = new QNetworkSession(config, this);

    m_networkSession->open();

    m_blockSize = 0;
    m_tcpSocket->abort();

        // connexion au serveur sur le port 53000

    connect(m_tcpSocket, SIGNAL(connected()), this, SLOT(connexion_ok()));

    m_tcpSocket->connectToHost( QHostAddress("10.16.3.214").toString(),53000);

}

void Client::connexion_ok()
{
    send_data("GAGNE:7");
}

void Client::send_data( const std::string& s )
{
    std::cout << "Envoi de : " << s << std::endl;
    QString texte = tr(s.c_str());
    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_0);
    out << (quint16)0;
    out << texte;
    out.device()->seek(0);
    out << (quint16)(block.size() - sizeof(quint16));

    m_tcpSocket->write(block);
}
