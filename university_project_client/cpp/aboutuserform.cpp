#include <QFontDatabase>
#include "h/aboutuserform.h"
#include "ui_aboutuserform.h"

AboutUserForm::AboutUserForm(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::AboutUserForm)
{
    ui->setupUi(this);
    ui_change_pass = new change_pass_form;

    connect(this, &AboutUserForm::change_pass_press,
            ui_change_pass, &change_pass_form::slot_on_change_pass);
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

void AboutUserForm::on_pushButton_change_pass_clicked()
{
    emit change_pass_press(ui->label_user_val->text());
}

