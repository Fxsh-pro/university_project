#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QHash>

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

    static void setKeys(QByteArray keys, QTcpSocket* cTcpSocket);
    static QByteArray getKeys(QTcpSocket* cTcpSocket);

private:
    QTcpServer* mTcpServer;
    static QHash<QTcpSocket*, QByteArray> mTcpSocket;
    int server_status;
};

#endif // MYTCPSERVER_H
