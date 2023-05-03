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
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

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

        static void generate_sevices();
    public:
        static SingletonDataBase* getInstance();

        /// \brief createDB создаёт базу данных
        /// \param void
        /// \return void
        static void createDB();
        /// \brief insertUser добавляет пользователя в базу
        /// \param QString login, QString password, int position_id
        /// \return void
        static void insertUser(QString login, QString password, int position_id);

        /// \brief changePassword изменяет пароль пользователя для входа
        /// \param QString login, QString newPassword
        /// \return void
        static void changePassword(QString login, QString newPassword);

        /// \brief change_role изменяет роль пользователя
        /// \param QString username, QString new_role
        /// \return void
        static void change_role(QString username, QString new_role);

        /// \brief log_in существует, если ли пользователь с указанными данными
        /// \param QString login, QString password
        /// \return bool
        static bool log_in(QString login, QString password);

        /// \brief show_pass показывает пароль к сервису
        /// \param QString service_name, int access_level
        /// \return QString
        static QString show_pass(QString service_name, int access_level);

        static QJsonObject send_user_data(QString login);

        /// \brief close закрывает базу данных
        /// \param void
        /// \return void
        static void close();
};
#endif // SINGLETONDATABASE_H
