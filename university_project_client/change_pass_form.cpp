#include "change_pass_form.h"
#include "ui_change_pass_form.h"

change_pass_form::change_pass_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::change_pass_form)
{
    ui->setupUi(this);

    connect(SingletonClient::getInstance(), &SingletonClient::change_pass_ok,
            this, &change_pass_form::slot_on_change_pass_ok);
}

change_pass_form::~change_pass_form()
{
    delete ui;
}

void change_pass_form::slot_on_change_pass(QString user_name)
{
    ui->change_pass_lineEdit->clear();
    ui->change_pass_2_lineEdit->clear();
    this->setModal(true);
    this->show();
    this->user_login = user_name;
}

void change_pass_form::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == (int)Qt::Key_Return)
    {
        this->on_confirm_pushbutton_clicked();
    }
    if (event->key() == (int)Qt::Key_Down)
    {
        ui->change_pass_2_lineEdit->setFocus();
    }
    if (event->key() == (int)Qt::Key_Up)
    {
        ui->change_pass_lineEdit->setFocus();
    }
}

void change_pass_form::on_confirm_pushbutton_clicked()
{
    if (ui->change_pass_2_lineEdit->text() == ui->change_pass_lineEdit->text())
    {
        QRegularExpression pass_pattern("^.*(?=.{8,})(?=.*[a-zA-Z])(?=.*\\d)(?=.*[!#$%&? ]).*$");
        QRegularExpressionMatch pass_match = pass_pattern.match(ui->change_pass_lineEdit->text());
        if (pass_match.hasMatch())
        {
            SingletonClient::getInstance()->send_msg_to_server("change_pass " + user_login + " " + ui->change_pass_lineEdit->text() + "\n");
        }
        else QMessageBox::warning(nullptr, "Ошибка", "Пароль недостаточно надежный!");

    }
    else QMessageBox::warning(nullptr, "Ошибка", "Пароли не совпадают!");
}

void change_pass_form::slot_on_change_pass_ok()
{
    QMessageBox::information(nullptr, "Смена пароля", "Пароль бы успешно изменен!");
    this->close();
}


void change_pass_form::on_cancel_pushbutton_clicked()
{
    this->close();
}

