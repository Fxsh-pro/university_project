#include "SingletonDataBase.h"


DatabaseDestroyer::~DatabaseDestroyer(){delete p_instance;}
void DatabaseDestroyer::initialize(SingletonDataBase * p) {p_instance = p;}

void SingletonDataBase::openDB(){
    if (db.isOpen()) {
          return;
    }
    qDebug()<<"MyDB()\n";
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("encryptiz.sql");

    if(!db.open())
        qDebug()<<db.lastError().text();
}

void SingletonDataBase::createTables(){
    QSqlQuery query(db);

    query.exec("CREATE TABLE IF NOT EXISTS User("
               "user_id INTEGER PRIMARY KEY AUTOINCREMENT,"
               "login VARCHAR(30) NOT NULL,"
               "password VARCHAR(30) NOT NULL,"
               "position_id int"
               ")");

    query.exec("CREATE TABLE IF NOT EXISTS Access_position("
               "position_id bigint NOT NULL,"
               "access_level int NOT NULL,"
               "PRIMARY KEY(position_id)"
               ")");

    query.exec("CREATE TABLE IF NOT EXISTS Services("
               "service_id int NOT NULL,"
               "access_level int NOT NULL,"
               "login VARCHAR(30) NOT NULL,"
               "password VARCHAR(30) NOT NULL,"
               "PRIMARY KEY(service_id),"
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
    createTables();
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

void SingletonDataBase::close(){
    if(db.isOpen())
        db.close();
}

QSqlDatabase SingletonDataBase::db;
SingletonDataBase* SingletonDataBase::p_instance;
DatabaseDestroyer SingletonDataBase::destroyer;
