#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

#include <QtNetwork>
#include <QByteArray>
#include <QDebug>

class MyTcpServer : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpServer(QObject *parent = nullptr);
    ~MyTcpServer();
public slots:
    /// \brief slotNewConnection отвечает за подключение клиента к серверу
    /// \param void
    /// \return void
    ///
    void slotNewConnection();

    /// \brief slotClientDisconnected отвечает за отключение клиента от сервера
    /// \param void
    /// \return void
    ///
    void slotClientDisconnected();

    /// \brief slotServerRead отвечает за отслеживание информации от клиента
    /// \param void
    /// \return void
    ///
    void slotServerRead();
//    void slotReadClient();
private:
    QTcpServer * mTcpServer;
    QVector<QTcpSocket*> mTcpSocket;
    int server_status;
};
#endif // MYTCPSERVER_H







