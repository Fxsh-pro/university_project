#include <QCoreApplication>
#include "mytcpserver.h"
#include "SingletonDataBase.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    SingletonDataBase::createDB();
    MyTcpServer myserver;

    SingletonDataBase::insertUser("1","1",12);
    SingletonDataBase::insertUser("2","2",2);
    return a.exec();
}
