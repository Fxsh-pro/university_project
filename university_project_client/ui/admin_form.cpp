#include "admin_form.h"
#include "ui_admin_form.h"

admin_form::admin_form(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin_form)
{
    ui->setupUi(this);
    ui->frame_3->hide();// прячем рамку с паролями и логинами

    connect(SingletonClient::getInstance(), &SingletonClient::admin_ok,
            this, &admin_form::get_admin_json);
}

admin_form::~admin_form()
{
    delete ui;
}

void admin_form::on_pushButton_user_info_clicked()
{
    emit press_user_info();
}

void admin_form::get_admin_json(QString ser_json)
{
    QJsonDocument doc = QJsonDocument::fromJson(ser_json.toUtf8());
    this->admin_data = doc.object();
}

