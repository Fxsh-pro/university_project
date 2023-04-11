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


        static void insertUser(QString login, QString password, int position_id);

        static void changePassword(QString login, QString newPassword);

        static void close();
};
#endif // SINGLETONDATABASE_H
