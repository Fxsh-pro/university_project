#include "h/functions.h"
#include "h/SingletonDataBase.h"
#include "h/mytcpserver.h"

QByteArray log_in(QString login, QString password, QTcpSocket * cTcpSocket){
    MD5 hash;

    bool ok = SingletonDataBase::log_in(login,QString::fromStdString(hash.get_hash(password.toStdString())));
    if (ok) {
        QJsonDocument data(SingletonDataBase::send_user_data(login, cTcpSocket));
        QString result_data = data.toJson();

        QList<QByteArray> keys = MyTcpServer::getClientKeys(cTcpSocket).split('#');

        return QByteArray("auth+#" + RSA::encrypt(result_data.toUtf8(), keys[0].toLong(), keys[1].toLong()).toUtf8());
    }

    return QByteArray("auth-");
}

QByteArray log_out(){
    return QByteArray("Выход...");
}

QByteArray change_role(QString username, QString new_role){
    SingletonDataBase::change_role(username,new_role);
    return QByteArray("Роль успешно изменена");
}

QByteArray change_pass(QString login, QString new_pass){
    MD5 hash;
    QString new_pass_hash = QString::fromStdString(hash.get_hash(new_pass.toStdString()));
    SingletonDataBase::changePassword(login, new_pass_hash);
    return QByteArray("change_pass+");

}

QByteArray add_user(QString username, QString pass, int new_role){
    SingletonDataBase::insertUser(username, pass, new_role);
    return QByteArray("Пользователь добавлен");
}

QByteArray show_pass(QString login,int access_level){
    QString response = SingletonDataBase::show_pass(login,access_level);
    return response.toUtf8();
}
QByteArray invalidRequest(){
    return QByteArray("Неверная команда или неверное количесво параметров");
};


QByteArray parse(QString message, QTcpSocket* cTcpSocket){
    QList<QByteArray> keys = MyTcpServer::getServerPrKeys().split('#');

    QStringList parts = message.split("#");

    if (parts[0] != "send_to_server_public_keys")
        for (int i = 1; i < parts.size(); i++) {
            parts[i] = RSA::decrypt(parts[i], keys[0].toLong(), keys[1].toLong());
        }

    qDebug() << message;

    switch(parts.size()){
        case 1:
            if(parts[0] == "log_out")
                return log_out();
            break;
        case 3:
            if(parts[0] == "show_pass")
                return show_pass(parts[1],parts[2].toInt());
            if (parts[0] == "log_in")
                return log_in(parts[1],parts[2], cTcpSocket);
            if (parts[0] == "change_role")
                return change_role(parts[1],parts[2]);
            if (parts[0] == "change_pass")
                return change_pass(parts[1],parts[2]);
            if (parts[0] == "send_to_server_public_keys")
                return set_client_public_keys(parts[1].toUtf8() + "#" + parts[2].toUtf8(), cTcpSocket);
            break;
        case 4:
            if (parts[0] == "add_user")
                return add_user(parts[1],parts[2], parts[3].toInt());
    }
    return invalidRequest();
}

QByteArray set_client_public_keys(QByteArray keys, QTcpSocket* cTcpSocket) {
    MyTcpServer::setClientKeys(keys, cTcpSocket);
    return "Ключи клиента: " + MyTcpServer::getClientKeys(cTcpSocket);
}

