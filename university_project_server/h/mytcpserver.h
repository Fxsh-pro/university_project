#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QHash>
#include "h/rsa.h"


class MyTcpServer : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpServer(QObject *parent = nullptr);
    ~MyTcpServer();

public slots:
    void slotNewConnection();
    void slotClientDisconnected();
    void slotServerRead();

    static void setClientKeys(QByteArray keys, QTcpSocket* cTcpSocket);
    static QByteArray getClientKeys(QTcpSocket* cTcpSocket);

    static QByteArray getServerPubKeys();
    static QByteArray getServerPrKeys();

private:
    static unsigned long long int p, q, n, t, e, d;
    QTcpServer* mTcpServer;
    static QHash<QTcpSocket*, QByteArray> mTcpSocket;
    int server_status;
};

#endif // MYTCPSERVER_H
