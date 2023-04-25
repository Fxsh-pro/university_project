#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <aboutuserform.h>
#include "singletonClient.h"
#include <QClipboard>
#include <QApplication>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui_auth = new AuthForm;
    ui_user_info = new AboutUserForm;
   // connect(ui_auth, &AuthForm::closed, this, &MainWindow::slot_show);
    connect(SingletonClient::getInstance(),
            &SingletonClient::auth_ok,
            this,
            &MainWindow::slot_on_auth_ok);

    connect(this, &MainWindow::open_user_info,
            ui_user_info, &AboutUserForm::show);

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


void MainWindow::on_listWidget_currentRowChanged(int currentRow){}


void MainWindow::on_pushButton_clicked()
{
    this->setEnabled(false);
    emit open_user_info();
}


void MainWindow::on_pushButton_copy_login_clicked()
{
    QClipboard* clip = QGuiApplication::clipboard();
    clip->setText(ui->lineEdit->text());
}

void MainWindow::on_pushButton_copy_password_clicked()
{
    QClipboard* clip = QGuiApplication::clipboard();
    clip->setText(ui->lineEdit_2->text());
}

