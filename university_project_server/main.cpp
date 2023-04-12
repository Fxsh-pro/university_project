#include <QCoreApplication>
#include "mytcpserver.h"
#include "SingletonDataBase.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    SingletonDataBase::createDB();
    MyTcpServer myserver;
    return a.exec();
}
