
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <aboutuserform.h>
#include "singletonClient.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui_auth = new AuthForm;
   // connect(ui_auth, &AuthForm::closed, this, &MainWindow::slot_show);
    connect(SingletonClient::getInstance(),
            &SingletonClient::auth_ok,
            this,
            &MainWindow::slot_on_auth_ok);
    ui_auth->show();

}
void MainWindow::slot_show(QString log)
{
    this->show();
}

void MainWindow::slot_on_auth_ok(QString log)
{
    ui_auth->close();
    this->show();
    ui->pushButton->setText(log);
}


MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_Test_clicked(){}


void MainWindow::on_listWidget_currentRowChanged(int currentRow)
{

}


void MainWindow::on_pushButton_clicked()
{
    AboutUserForm* ab_user_form = new AboutUserForm();
    ab_user_form->show();
}

