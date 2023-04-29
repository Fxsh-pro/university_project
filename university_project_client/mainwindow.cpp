#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <aboutuserform.h>
#include "singletonClient.h"
#include <QClipboard>
#include <QApplication>
#include <QTimer>
#include <QColor>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui_auth = new AuthForm;
    ui_user_info = new AboutUserForm;


    connect(timer1, SIGNAL(timeout()), this, SLOT(update1()));
    connect(timer2, SIGNAL(timeout()), this, SLOT(update2()));
    connect(ui_user_info, &AboutUserForm::user_exit_press,
            this, &MainWindow::user_exit);

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
void MainWindow::update1(){
    ui->pushButton_copy_login->setText("Скопировать ");
    ui->pushButton_copy_login->setStyleSheet("background-color: ");
}
void MainWindow::update2(){
    ui->pushButton_copy_password->setText("Скопировать ");
    ui->pushButton_copy_password->setStyleSheet("background-color: ");
}


void MainWindow::slot_on_auth_ok(QString log)
{
    ui_auth->close();
    this->show();
    ui->pushButton_user_info->setText(log);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Test_clicked()
{
    // Создание этой процедуры было ошибкой
}


void MainWindow::on_listWidget_currentRowChanged(int currentRow)
{
    // Не трогать, взорвется
}


void MainWindow::on_pushButton_clicked()
{
    // Не трогать, все взорвется
}

void MainWindow::button_is_pressed(QPushButton * but)
{
    QClipboard* clip = QGuiApplication::clipboard();
    but->setText("Скопировано✅");
    but->setStyleSheet("background-color:" + QColor(217, 245, 196, 127).name());
    if (but == ui->pushButton_copy_login)
    {
        clip->setText(ui->lineEdit_service_login->text());
        timer1->start(1500);
    }
    else if (but == ui->pushButton_copy_password)
    {
        clip->setText(ui->lineEdit_service_password->text());
        timer2->start(1500);
    }
}

void MainWindow::on_pushButton_copy_login_clicked()
{
    this->button_is_pressed(ui->pushButton_copy_login);
}

void MainWindow::on_pushButton_copy_password_clicked()
{
    this->button_is_pressed(ui->pushButton_copy_password);
}

void MainWindow::on_pushButton_user_info_clicked()
{
    ui_user_info->setModal(true);
    ui_user_info->show();
}

void MainWindow::user_exit()
{
    this->close();
    ui_auth->show();
}
