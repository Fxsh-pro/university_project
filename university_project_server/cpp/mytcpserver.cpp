#include "h/mytcpserver.h"
#include "h/functions.h"
#include "h/rsa.h"
#include "h/bigprimegenerator.h"

QHash<QTcpSocket*, QByteArray> MyTcpServer::mTcpSocket;
unsigned long long int MyTcpServer::p, MyTcpServer::q, MyTcpServer::n, MyTcpServer::t, MyTcpServer::e, MyTcpServer::d;

MyTcpServer::MyTcpServer(QObject *parent) : QObject(parent)
{
    mTcpServer = new QTcpServer(this);
    connect(mTcpServer, &QTcpServer::newConnection, this, &MyTcpServer::slotNewConnection);

    if (!mTcpServer->listen(QHostAddress::Any, 33333)) {
        qDebug() << "server is not started";
    } else {
        server_status = 1;
        qDebug() << "server is started";
    }

    long long int p = BigPrimeGenerator::getBigPrime(), q = BigPrimeGenerator::getBigPrime();


    // Cоздание открытого и секретного ключей

    // 1. Выбираются два различных случайных простых числа p и q заданного размера
    this->p = p;
    this->q = q;

    // 2. Вычисляется их произведение n = p ⋅ q, которое называется модулем.
    this->n = this->p * this->q;

    // 3. Вычисляется значение функции Эйлера от числа n: φ(n) = (p−1)⋅(q−1)
    this->t = (this->p - 1) * (this->q - 1);

    // 4. Выбирается целое число e ( 1 < e < φ(n) ), взаимно простое со значением функции Эйлера (t)
    //	  Число e называется открытой экспонентой
    this->e = RSA::calculateE(this->t);

    // 5. Вычисляется число d, мультипликативно обратное к числу e по модулю φ(n), то есть число, удовлетворяющее сравнению:
    //    d ⋅ e ≡ 1 (mod φ(n))
    this->d = RSA::calculateD(this->e, this->t);


    // 6. Пара {e, n} публикуется в качестве открытого ключа RSA

    // 7. Пара {d, n} играет роль закрытого ключа RSA и держится в секрете

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
        cTcpSocket->write("send_to_client_public_keys#" + this->getServerPubKeys());
        setClientKeys("", cTcpSocket);

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

void MyTcpServer::setClientKeys(QByteArray keys, QTcpSocket* cTcpSocket)
{
    mTcpSocket.insert(cTcpSocket, keys);
}

QByteArray MyTcpServer::getClientKeys(QTcpSocket* cTcpSocket)
{
    return mTcpSocket.value(cTcpSocket);
}

QByteArray MyTcpServer::getServerPubKeys() {
    return QByteArray::number(MyTcpServer::e) + "#" + QByteArray::number(MyTcpServer::n);
}

QByteArray MyTcpServer::getServerPrKeys() {
    return QByteArray::number(MyTcpServer::d) + "#" + QByteArray::number(MyTcpServer::n);
}
