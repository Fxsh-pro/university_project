
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <aboutuserform.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui_auth = new AuthForm;
    connect(ui_auth, &AuthForm::closed, this, &MainWindow::slot_show);
    ui_auth->show();

}
void MainWindow::slot_show(QString log)
{
    this->show();
}


MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_Test_clicked()
{

}


void MainWindow::on_listWidget_currentRowChanged(int currentRow)
{

}


void MainWindow::on_pushButton_clicked()
{
    AboutUserForm* ab_user_form = new AboutUserForm();
    ab_user_form->show();
}

