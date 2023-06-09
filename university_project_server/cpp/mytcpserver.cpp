#include "h/mytcpserver.h"
#include "h/functions.h"
#include "h/rsa.h"
#include "h/bigprimegenerator.h"

QHash<QTcpSocket*, QByteArray> MyTcpServer::mTcpSocket;

MyTcpServer::MyTcpServer(QObject *parent) : QObject(parent)
{
    RSA rsa();
    mTcpServer = new QTcpServer(this);
    connect(mTcpServer, &QTcpServer::newConnection, this, &MyTcpServer::slotNewConnection);

    if (!mTcpServer->listen(QHostAddress::Any, 33333)) {
        qDebug() << "server is not started";
    } else {
        server_status = 1;
        qDebug() << "server is started";
    }
}

MyTcpServer::~MyTcpServer()
{
    for (auto socket : mTcpSocket.keys()) {
        socket->close();
        socket->deleteLater();
    }
    mTcpServer->close();
    server_status = 0;
}

void MyTcpServer::slotNewConnection()
{
    if (server_status == 1) {
        QTcpSocket* cTcpSocket = mTcpServer->nextPendingConnection();
        cTcpSocket->write("send_to_client_public_keys#" + this->rsa.getPubKeys());
        setKeys("", cTcpSocket);

        connect(cTcpSocket, &QTcpSocket::readyRead, this, &MyTcpServer::slotServerRead);
        connect(cTcpSocket, &QTcpSocket::disconnected, this, &MyTcpServer::slotClientDisconnected);
    }
}

void MyTcpServer::slotServerRead()
{
    QByteArray array;
    QTcpSocket* cTcpSocket = qobject_cast<QTcpSocket*>(sender());
    if (!cTcpSocket) {
        return;
    }

    while (cTcpSocket->bytesAvailable() > 0) {
        array.append(cTcpSocket->readAll());
    }

    cTcpSocket->write(parse(array, cTcpSocket));
}

void MyTcpServer::slotClientDisconnected()
{
    QTcpSocket* cTcpSocket = qobject_cast<QTcpSocket*>(sender());
    if (!cTcpSocket) {
        return;
    }

    cTcpSocket->close();
}

void MyTcpServer::setKeys(QByteArray keys, QTcpSocket* cTcpSocket)
{
    mTcpSocket.insert(cTcpSocket, keys);
}

QByteArray MyTcpServer::getKeys(QTcpSocket* cTcpSocket)
{
    return mTcpSocket.value(cTcpSocket);
}
