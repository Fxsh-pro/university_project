#include "functions.h"


QByteArray log_in(QString username, QString password){
    return QByteArray("Авторизация...\r\n");
}

QByteArray log_out(){
    return QByteArray("Выход...\r\n");
}

QByteArray give_a_role(QString username, QString new_role){
    return QByteArray("Роль успешно выдана\r\n");
}

QByteArray change_role(QString username, QString new_role){
    return QByteArray("Роль успешно изменена\r\n");
}

QByteArray change_pass(QString old_pass, QString new_pass1,  QString new_pass2){
    return QByteArray("Пароль изменён\r\n");
}

QByteArray add_user(QString username, QString new_role){
    return QByteArray("Пользователь добавлен\r\n");
}

QByteArray show_pass(QString account){
    return QByteArray("Ваш пароль...\r\n");
}
QByteArray wrong_param(){
    return QByteArray("Неверное количесво параметров\r\n");
};
QByteArray parse(QString message){
    QStringList parts = message.split("&");
    if(parts.size() == 3)
    {
        if (parts[0] == "log_in")
            return log_in(parts[1],parts[2]);
        if (parts[0] == "give_a_role")
            return give_a_role(parts[1],parts[2]);
        if (parts[0] == "change_role")
            return change_role(parts[1],parts[2]);
        if (parts[0] == "add_user")
            return add_user(parts[1],parts[2]);
    }
    if(parts[0] == "log_out")
        return log_out();
    if(parts[0] == "show_pass" && parts.size() == 2)
        return show_pass(parts[0]);
    return wrong_param();


}
