#include "authform.h"
#include "ui_authform.h"

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
    qDebug() << "req" << ui->lineEdit_login->text()<<" "<< ui->lineEdit_pass->text()<<" " <<ui->lineEdit_mail->text();
    this->on_pushButton_auth_clicked();
}


void AuthForm::on_pushButton_auth_clicked()
{
    SingletonClient::getInstance()->send_msg_to_server("log_in "+ui->lineEdit_login->text()+
                                                       " "+ ui->lineEdit_pass->text()+"\n");
    qDebug() << "log_in " + ui->lineEdit_login->text()+" "+ ui->lineEdit_pass->text();
    //emit closed(ui->lineEdit_login->text());
    //this->close();
}

void AuthForm::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == (int)Qt::Key_Return)
    {
        this->on_pushButton_auth_clicked();
    }
    if (event->key() == (int)Qt::Key_Down)
    {
        ui->lineEdit_pass->setFocus();
    }
    if (event->key() == (int)Qt::Key_Up)
    {
        ui->lineEdit_login->setFocus();
    }

}

