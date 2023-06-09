#include "h/singletonClient.h"
#include "h/bigprimegenerator.h"

SingletonClient::SingletonClient(QObject *parent) : QObject(parent){
    mTcpSocket = new QTcpSocket(this);
    mTcpSocket -> connectToHost("127.0.0.1",33333);
    connect(mTcpSocket, &QTcpSocket::readyRead,
            this, &SingletonClient::slotServerRead);
    send_msg_to_server("send_to_server_public_keys#" + rsa.getPubKeys());

}
SingletonClient* SingletonClient::getInstance(){
    if (!p_instance)
        {
            p_instance = new SingletonClient();
            destroyer.initialize(p_instance);
        }
    return p_instance;
}

void SingletonClient::send_msg_to_server(QString query){
    mTcpSocket->write(query.toUtf8());
}

void SingletonClient::slotServerRead(){
    QString msg = "";
    while(mTcpSocket->bytesAvailable()>0)
    {
        msg.append(mTcpSocket->readAll());
        if(msg.right(1) == "\n")
            break;
    }
    qDebug()<<msg;
    QStringList answer = msg.split("#");

    if(answer[0] == "auth+")
        emit auth_ok(answer[1]);
    else if (answer[0] == "auth-")
    {
        emit auth_invalid();
    }
    else if (answer[0] == "change_pass+")
    {
        emit change_pass_ok();
    }
    else if (answer[0] == "send_to_client_public_keys")
    {
        qDebug() << "Ключи сервера: " + answer[1] + "#" + answer[2];
    }
}

SingletonClient::~SingletonClient(){
    mTcpSocket->close();
};

SingletonClient* SingletonClient::p_instance;
SingletonDestroyer SingletonClient::destroyer;
