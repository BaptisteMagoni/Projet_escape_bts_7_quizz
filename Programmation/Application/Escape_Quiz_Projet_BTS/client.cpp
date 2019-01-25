#include "client.h"
#include <QtNetwork>
#include <stdlib.h>
#include <iostream>
#include <QTcpSocket>
#include <QNetworkSession>
#include <QByteArray>
#include <sstream>

Client::Client() :
    m_networkSession(0)
{
    connection_socket();
}

Client::Client(QString addr, int port){
    connection_socket(addr, port);
}

void Client::connection_socket(QString addr, int port){
    m_state_connection = false;
    std::cout << "Application Client" << std::endl;
    m_tcpSocket = new QTcpSocket(this);
    QNetworkConfiguration config;

    std::cout << "Ouverture session" << std::endl;
    m_networkSession = new QNetworkSession(config, this);

    m_networkSession->open();

    m_blockSize = 0;
    m_tcpSocket->abort();
    if(addr == NULL)
        m_tcpSocket->connectToHost( QHostAddress("10.16.3.214").toString(),53000);
    else{
        m_port = port;
        m_addr = addr;
    }

    //m_state_connection = m_tcpSocket->state();

}

//###############################################################################################################
// Méthode envoyant un texte au client
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

bool Client::getStateConnection(){
    return m_state_connection;
}

void Client::finish(){
    m_tcpSocket->connectToHost( QHostAddress(m_addr).toString(), m_port);
    m_state_connection = m_tcpSocket->state();
    send_data("GAGNE:7");
    m_tcpSocket->close();
}
