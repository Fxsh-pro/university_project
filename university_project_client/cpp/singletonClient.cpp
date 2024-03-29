#include "h/singletonClient.h"

SingletonClient::SingletonClient(QObject *parent) : QObject(parent){
    mTcpSocket = new QTcpSocket(this);
    mTcpSocket -> connectToHost("127.0.0.1",33333);
    connect(mTcpSocket, &QTcpSocket::readyRead,
            this, &SingletonClient::slotServerRead);

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
    qDebug()<<"slot";
    QString msg = "";
    while(mTcpSocket->bytesAvailable()>0)
    {
        msg.append(mTcpSocket->readAll());
        if(msg.right(1) == "\n")
            break;
    }
    qDebug()<<msg;
    QStringList answer = msg.split("&");
    //emit message_from_server(msg);
    if(answer[0] == "auth+")
        emit auth_ok(answer[1]);
    else if (answer[0] == "auth-\r\n")
    {
        emit auth_invalid();
    }
    else if (answer[0] == "change_pass+\r\n")
    {
        emit change_pass_ok();
    }
}

SingletonClient::~SingletonClient(){
    mTcpSocket->close();
};



SingletonClient* SingletonClient::p_instance;
SingletonDestroyer SingletonClient::destroyer;
