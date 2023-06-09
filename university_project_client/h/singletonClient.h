#ifndef SINGLETONCLIENT_H
#define SINGLETONCLIENT_H
#include<QDebug>
#include<QObject>
#include<QtNetwork>
#include<QTcpSocket>
#include<QByteArray>
#include<QString>

class SingletonClient;

class SingletonDestroyer
{
    private:
        SingletonClient * p_instance;
    public:
        ~SingletonDestroyer() { delete p_instance; }
        /// \brief initialize
        /// \param
        /// \return
        ///
        void initialize(SingletonClient * p){p_instance = p;};
};


class SingletonClient : public QObject
{
    Q_OBJECT
    private:
//      int access_level = 0;

        static SingletonClient * p_instance;
        static SingletonDestroyer destroyer;
        QTcpSocket * mTcpSocket;
    protected:
        explicit SingletonClient(QObject *parent = nullptr);
        SingletonClient(const SingletonClient& ) = delete;
        SingletonClient& operator = (SingletonClient &) = delete;
        ~SingletonClient();
        friend class SingletonDestroyer;
    public:
        /// \brief getInstance отвечает за получение объекта SingletonClient
        /// \param void
        /// \return SingletonClient*
        ///
        static SingletonClient* getInstance();

        /// \brief send_msg_to_server отвечает за отправку сообщений на сервер
        /// \param QString query - сообщение
        /// \return void
        ///
        void send_msg_to_server(QString query);
    signals:
        /// \brief message_from_server отвечает за получение сообщений от сервера
        /// \param QString msg - сообщение
        /// \return void
        ///
       void message_from_server(QString msg);

    private slots:
       /// \brief slotServerRead отвечает за чтение данных с сервера
       /// \param void
       /// \return void
       ///
       void slotServerRead();

signals:
       /// \brief auth_ok отвечает за успешную авторизацию
       /// \param QString
       /// \return void
       ///
       void auth_ok(QString);

       /// \brief auth_invalid отвечает за неуспешную автоирзацию
       /// \param void
       /// \return void
       ///
       void auth_invalid();

       /// \brief change_pass_ok отвечает за успешное изменение пароля
       /// \param void
       /// \return void
       ///
       void change_pass_ok();

       void admin_ok(QString);


       void add_access_ok();
       void add_access_fail();
};

#endif // SINGLETONCLIENT_H
