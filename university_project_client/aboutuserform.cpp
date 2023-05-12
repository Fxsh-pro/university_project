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

void AboutUserForm::set_user_data_info(QString name, QString access_level)
{
    ui->label_user_val->setText(name);
    ui->label_level_val->setText(access_level);
}
