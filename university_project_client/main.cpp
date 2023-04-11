#include <QCoreApplication>
#include "singletonClient.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    SingletonClient::getInstance();
    SingletonClient::getInstance()->send_msg_to_server("1234");
    SingletonClient::getInstance()->send_msg_to_server("log_in 1 1");

    return a.exec();
}
