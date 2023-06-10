#include <QFontDatabase>
#include "h/authform.h"
#include "ui_authform.h"
#include <h/singletonClient.h>

AuthForm::AuthForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AuthForm)
{
    ui->setupUi(this);
    this->change_mode(true);
}

AuthForm::~AuthForm()
{
    delete ui;
}
void AuthForm::change_mode(bool mode){ // mode = true for auth
    ui->label_mail->setVisible(!mode);
    ui->lineEdit_mail->setVisible(!mode);
    ui->pushButton_auth->setVisible(mode);
    ui->pushButton_reg->setVisible(!mode);

    if (mode)
        ui->pushButton_change->setText("Зарегистрироваться");
    else
        ui->pushButton_change->setText("К авторизации");
}

void AuthForm::on_pushButton_change_clicked()
{
    this->change_mode(ui->pushButton_reg->isVisible());

}


void AuthForm::on_pushButton_reg_clicked()
{
    qDebug() << "req#" << ui->lineEdit_login->text()<<"#"<< ui->lineEdit_pass->text()<< "#" <<ui->lineEdit_mail->text();
    this->on_pushButton_auth_clicked();
}


void AuthForm::on_pushButton_auth_clicked()
{
    QString message = "log_in#" +
            RSA::encrypt(ui->lineEdit_login->text() ,
                            SingletonClient::getInstance()->server_public_keys[0].toLong(),
                            SingletonClient::getInstance()->server_public_keys[1].toLong()) + "#" +
            RSA::encrypt(ui->lineEdit_pass->text(),
                            SingletonClient::getInstance()->server_public_keys[0].toLong(),
                            SingletonClient::getInstance()->server_public_keys[1].toLong());
    SingletonClient::getInstance()->send_msg_to_server(message);
    qDebug() << message;
    ui->lineEdit_pass->clear();
}

void AuthForm::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == (int)Qt::Key_Return)
    {
        this->on_pushButton_auth_clicked();
    }
    if (event->key() == (int)Qt::Key_Down)
    {
        if (ui->lineEdit_login->hasFocus()) {
            ui->lineEdit_pass->setFocus();
        }
        else if (ui->lineEdit_mail->hasFocus()) {
            ui->lineEdit_login->setFocus();
        }
        else if (ui->lineEdit_pass->hasFocus()) {
            ui->pushButton_auth->setFocus();
            ui->pushButton_reg->setFocus();
        }
    }
    if (event->key() == (int)Qt::Key_Up)
    {
        if (ui->lineEdit_login->hasFocus() && ui->lineEdit_mail->isVisible()) {
            ui->lineEdit_mail->setFocus();
        }
        else if (ui->lineEdit_pass->hasFocus()) {
            ui->lineEdit_login->setFocus();
        }
    }

}

