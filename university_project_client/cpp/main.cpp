#include <QFontDatabase>
#include "h/mainwindow.h"
#include <QDialog>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    return a.exec();
}
