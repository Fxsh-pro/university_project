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
//    SingletonDataBase::insertUser("1","1",12);
//    SingletonDataBase::insertUser("2","2",2);
    return QByteArray("Пользователь добавлен\r\n");
}

QByteArray show_pass(QString account){
    return QByteArray("Ваш пароль...\r\n");
}
QByteArray invalidRequest(){
    return QByteArray("Неверная команда или неверное количесво параметров.\r\n");
};


QByteArray parse(QString message){
    QStringList parts = message.left(message.length() - 2).split(" ");

    switch(parts.size()){
        case 1:
            if(parts[0] == "log_out")
                return log_out();
        case 2:
            if(parts[0] == "show_pass")
                return show_pass(parts[1]);
            break;
        case 3:
            if (parts[0] == "log_in")
                return log_in(parts[1],parts[2]);
            if (parts[0] == "give_a_role")
                return give_a_role(parts[1],parts[2]);
            if (parts[0] == "change_role")
                return change_role(parts[1],parts[2]);
            if (parts[0] == "add_user")
                return add_user(parts[1],parts[2]);
            break;
        case 4:
            if (parts[0] == "change_pass")
                return change_pass(parts[1],parts[2],parts[3]);
    }
    return invalidRequest();
}
