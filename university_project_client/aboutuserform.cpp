#include "aboutuserform.h"
#include "ui_aboutuserform.h"
#include <authform.h>
#include <mainwindow.h>

AboutUserForm::AboutUserForm(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::AboutUserForm)
{
    ui->setupUi(this);
}

AboutUserForm::~AboutUserForm()
{
    delete ui;
}

void AboutUserForm::on_pushButton_2_clicked()
{
    // Создание метода было ошибкой
}

void AboutUserForm::on_pushButton_exit_clicked()
{
    this->close();
    emit user_exit_press();
}
