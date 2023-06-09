#include "h/functions.h"
#include "h/SingletonDataBase.h"

QByteArray log_in(QString login, QString password){
    MD5 hash;
//    qDebug()<<password;
//    qDebug()<<QString::fromStdString(hash->get_hash(password.toStdString()))<<"_-_";
//    qDebug()<<QString::fromStdString(hash->get_hash(password.toStdString()));

    bool ok = SingletonDataBase::log_in(login,QString::fromStdString(hash.get_hash(password.toStdString())));
    if (ok) {
        QJsonObject user_data = SingletonDataBase::send_user_data(login);
        QJsonDocument data(user_data);
        QString result_data = data.toJson();
        if (user_data["Position"] == "администратор")
        {
            QJsonDocument admin_data(SingletonDataBase::send_admin_data());
            QString result_admin_data = admin_data.toJson();
            return QByteArray("auth+&" + result_data.toUtf8()+"&" + result_admin_data.toUtf8() + "\r\n");
        }
        return QByteArray("auth+&" + result_data.toUtf8()+"\r\n");
    }

    return QByteArray("auth-\r\n");
}

QByteArray log_out(){
    return QByteArray("Выход...\r\n");
}

QByteArray change_role(QString username, QString new_role){
    SingletonDataBase::change_role(username,new_role);
    return QByteArray("Роль успешно изменена\r\n");
}

QByteArray change_pass(QString login, QString new_pass){
    MD5 hash;
    QString new_pass_hash = QString::fromStdString(hash.get_hash(new_pass.toStdString()));
    SingletonDataBase::changePassword(login, new_pass_hash);
    return QByteArray("change_pass+\r\n");

}

QByteArray add_user(QString username, QString pass, int new_role){
    SingletonDataBase::insertUser(username, pass, new_role);
    return QByteArray("Пользователь добавлен\r\n");
}

QByteArray show_pass(QString login,int access_level){
    QString response = SingletonDataBase::show_pass(login,access_level);
    return response.toUtf8();
}
QByteArray invalidRequest(){
    return QByteArray("Неверная команда или неверное количесво параметров.\r\n");
};


QByteArray parse(QString message){
    // QStringList parts = message.left(message.length() - 2).split(" ");
    QStringList parts = message.left(message.length()-1).split(" ");
    switch(parts.size()){
        case 1:
            if(parts[0] == "log_out")
                return log_out();
            break;
        case 2:
            if (parts[0] == "add_new_access")
                    return add_new_access(parts[1]);
        case 3:
            if(parts[0] == "show_pass")
                return show_pass(parts[1],parts[2].toInt());
            if (parts[0] == "log_in")
                return log_in(parts[1],parts[2]);
            if (parts[0] == "change_role")
                return change_role(parts[1],parts[2]);
            if (parts[0] == "change_pass")
                return change_pass(parts[1],parts[2]);
            break;
        case 4:
            if (parts[0] == "add_user")
                return add_user(parts[1],parts[2], parts[3].toInt());
    }
    return invalidRequest();
}

QByteArray add_new_access(QString new_access)
{
    if(SingletonDataBase::add_new_access(new_access))
        return "add_access+";
    else return "add_access-";
}
