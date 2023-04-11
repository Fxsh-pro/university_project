#ifndef SINGLETONDATABASE_H
#define SINGLETONDATABASE_H
#include <QCoreApplication>
#include <QVariant>
#include<QDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlDatabase>
#include <QString>
class SingletonDataBase;

class DatabaseDestroyer
{
    private:
        SingletonDataBase * p_instance;
    public:
        ~DatabaseDestroyer();
        void initialize(SingletonDataBase * p);
};


class SingletonDataBase
{
    private:
        static SingletonDataBase * p_instance;
        static DatabaseDestroyer destroyer;

        static QSqlDatabase db;

        static void openDB();
        static void createTables();
        SingletonDataBase(){};
        SingletonDataBase(const SingletonDataBase& ) = delete;
        SingletonDataBase& operator = (SingletonDataBase &) = delete;
        ~SingletonDataBase(){};
        friend class DatabaseDestroyer;
    public:
        static SingletonDataBase* getInstance();

        static void createDB();

<<<<<<< HEAD
        static void insertUser(QString login, QString password, int position_id);
=======
            if(!query.exec())
                qDebug()<<query.lastError().text();
        }
        static void changePassword(QString login, QString newPassword)
        {
            QSqlQuery query(db);
            query.prepare("UPDATE User SET password = :newPassword WHERE login = :login");
            query.bindValue(":newPassword", newPassword);
            query.bindValue(":login", login);

            if(!query.exec())
                qDebug()<<query.lastError().text();
        }
>>>>>>> 00fcbe729110be670784cfee84bd1f624b5ecd0b

        static void close();
};
<<<<<<< HEAD
=======
QSqlDatabase SingletonDataBase::db;
SingletonDataBase* SingletonDataBase::p_instance;
DatabaseDestroyer SingletonDataBase::destroyer;

>>>>>>> 00fcbe729110be670784cfee84bd1f624b5ecd0b
#endif // SINGLETONDATABASE_H
