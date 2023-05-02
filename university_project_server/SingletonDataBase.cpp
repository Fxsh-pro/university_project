#include "SingletonDataBase.h"


DatabaseDestroyer::~DatabaseDestroyer(){delete p_instance;}
void DatabaseDestroyer::initialize(SingletonDataBase * p) {p_instance = p;}

void SingletonDataBase::openDB(){
    if (db.isOpen()) {
          return;
    }
    qDebug()<<"MyDB()\n";
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../university_project_server/encryptiz.sql");

    if(!db.open())
        qDebug()<<db.lastError().text();
}

void SingletonDataBase::createTables(){
    QSqlQuery query(db);

    query.exec("CREATE TABLE IF NOT EXISTS User("
               "user_id INTEGER PRIMARY KEY AUTOINCREMENT,"
               "login VARCHAR(30) NOT NULL,"
               "password VARCHAR(32) NOT NULL,"
               "position_id int"
               ")");

    query.exec("CREATE TABLE IF NOT EXISTS Access_position("
               "position_id bigint NOT NULL,"
               "access_level int NOT NULL,"
               "PRIMARY KEY(position_id)"
               ")");

    query.exec("CREATE TABLE IF NOT EXISTS Services("
               "service_id INTEGER PRIMARY KEY AUTOINCREMENT,"
               "access_level int NOT NULL,"
               "login VARCHAR(30) NOT NULL,"
               "password VARCHAR(30) NOT NULL,"
               "FOREIGN KEY(access_level) REFERENCES Access_position(access_level)"
               ")");

    query.exec("CREATE TABLE IF NOT EXISTS Watched_services("
               "watched_service_id bigint NOT NULL,"
               "service_id int NOT NULL,"
               "user_id bigint NOT NULL,"
               "access_date date NOT NULL,"
               "FOREIGN KEY(user_id) REFERENCES User(user_id)"
               ")");

    query.exec("CREATE TABLE IF NOT EXISTS Position("
               "position_id bigint NOT NULL,"
               "position_name VARCHAR(30) NOT NULL,"
               "PRIMARY KEY(position_id)"
               ")");

    query.exec("CREATE TABLE IF NOT EXISTS Services_name("
               "service_id bigint,"
               "service_name VARCHAR(30),"
               "FOREIGN KEY(service_id) REFERENCES Services(service_id)"
               ")");
}

void SingletonDataBase::generate_sevices(){
    QSqlQuery query(db);
/*
    query.prepare("INSERT INTO Services(service_id, access_level, login,password) "
                  " VALUES (:serv_id, :access_level, :login, :password);");
    query.bindValue(":serv_id", 1);
    query.bindValue(":access_level", 1);
    query.bindValue(":login", "user1");
    query.bindValue(":password", "userciscopass");
    if(!query.exec())
        qDebug()<<query.lastError().text();

    query.prepare("INSERT INTO Services_name"
                  " VALUES (:serv_id, :serv_name);");
    query.bindValue(":serv_id", 1);
    query.bindValue(":serv_name", "netacad.info");
    if(!query.exec())
        qDebug()<<query.lastError().text();

    query.prepare("INSERT INTO Services_name"
                  " VALUES (:serv_id, :serv_name);");
    query.bindValue(":serv_id", 2);
    query.bindValue(":serv_name", "google.com");
    if(!query.exec())
        qDebug()<<query.lastError().text();

    query.prepare("INSERT INTO User"
                  " VALUES (:login, :password, :position_id);");
    query.bindValue(":login", "12");
    query.bindValue(":password", "12");
    query.bindValue(":position_id", "12");
    if(!query.exec())
        qDebug()<<query.lastError().text();
        */
}
SingletonDataBase* SingletonDataBase::getInstance(){
    if (!p_instance)
    {
        p_instance = new SingletonDataBase();
        destroyer.initialize(p_instance);
    }
    return p_instance;
}

void SingletonDataBase::createDB(){
    SingletonDataBase::getInstance();
    openDB();
//    createTables();
//    insertUser("1","1",1);
//    generate_sevices();
}

void  SingletonDataBase::insertUser(QString login, QString password, int position_id){
    QSqlQuery query(db);
    query.prepare("INSERT INTO User (login, password, position_id) "
                  "VALUES (:login, :password, :position_id)");
    query.bindValue(":login", login);
    query.bindValue(":password", password);
    query.bindValue(":position_id", position_id);

    if(!query.exec())
        qDebug()<<query.lastError().text();
}

void SingletonDataBase::changePassword(QString login, QString newPassword){
    QSqlQuery query(db);
    query.prepare("UPDATE User SET password = :newPassword WHERE login = :login");
    query.bindValue(":newPassword", newPassword);
    query.bindValue(":login", login);

    if(!query.exec())
        qDebug()<<query.lastError().text();
}

void SingletonDataBase::change_role(QString login, QString new_role){
    QSqlQuery query(db);
    query.prepare("UPDATE User SET position_id = :new_role WHERE login = :login");
    query.bindValue(":new_role", new_role);
    query.bindValue(":login", login);
    if(!query.exec())
            qDebug()<<query.lastError().text();
}

bool SingletonDataBase::log_in(QString login, QString password){
    QSqlQuery query(db);
//    qDebug()<<password<<"-_-";
    query.prepare("SELECT COUNT(*) FROM User WHERE login = :login AND password = :password");
    query.bindValue(":login", login);
    query.bindValue(":password", password);
    if (query.exec() && query.next()) {
           int count = query.value(0).toInt();
           return count > 0;
    }
    return false;
}

QString SingletonDataBase::show_pass(QString service_name, int access_level){
    QSqlQuery query(db);

    query.prepare("SELECT service_id FROM Services_name WHERE service_name = :service_name");
    query.bindValue(":service_name", service_name);
    if(!query.exec() || !query.first()) {
        qDebug() << "Error retrieving service ID:" << query.lastError().text();
        return QString("Error");
    }
    int service_id = query.value(0).toInt();

    query.prepare("SELECT password FROM Services WHERE service_id = :service_id AND access_level = :access_level");
    query.bindValue(":service_id", service_id);
    query.bindValue(":access_level", access_level);
     if(!query.exec() || !query.first()) {
        qDebug() << "Error retrieving password:" << query.lastError().text();
        return QString("Error");
    }
    return query.value(0).toString();

}

QString SingletonDataBase::get_level_access(QString login)
{

}
void SingletonDataBase::close(){
    if(db.isOpen())
        db.close();
}

QSqlDatabase SingletonDataBase::db;
SingletonDataBase* SingletonDataBase::p_instance;
DatabaseDestroyer SingletonDataBase::destroyer;
