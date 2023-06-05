#include "admin_form.h"
#include "ui_admin_form.h"

admin_form::admin_form(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin_form)
{
    ui->setupUi(this);

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
    this->prepare_window();
}

void admin_form::prepare_window()
{
    QJsonArray UsersArr = admin_data["Users"].toArray();
    for (const QJsonValue& value : UsersArr)
    {
        QJsonObject object = value.toObject();
        QListWidgetItem* NewService = new QListWidgetItem(object["login"].toString());
        ui->listWidget->addItem(NewService);
    }
    ui->frame_3->hide();
}


void admin_form::on_comboBox_currentIndexChanged(int index)
{
    ui->listWidget->clear();
    switch(index)
    {
    case 0:
    {
        QJsonArray UsersArr = admin_data["Users"].toArray();
        for (const QJsonValue& value : UsersArr)
        {
            QJsonObject object = value.toObject();
            QListWidgetItem* NewUser = new QListWidgetItem(object["login"].toString());
            ui->listWidget->addItem(NewUser);
        }
    }; break;
    case 1:
    {
        QJsonArray PositionArr = admin_data["Positions"].toArray();
        for (const QJsonValue& value : PositionArr)
        {
            QJsonObject object = value.toObject();
            QListWidgetItem* NewPosition = new QListWidgetItem(object["name"].toString());
            ui->listWidget->addItem(NewPosition);
        }
    }; break;
    case 2:
    {
        QJsonArray AccessArr = admin_data["Access"].toArray();
        for (const QJsonValue& value : AccessArr)
        {
            QJsonObject object = value.toObject();
            QListWidgetItem* NewAccess = new QListWidgetItem(object["name"].toString());
            ui->listWidget->addItem(NewAccess);
        }
    }; break;
    case 3:
    {
        QJsonArray ServicesArr = admin_data["Services"].toArray();
        for (const QJsonValue& value : ServicesArr)
        {
            QJsonObject object = value.toObject();
            QListWidgetItem* NewService = new QListWidgetItem(object["name"].toString());
            ui->listWidget->addItem(NewService);
        }
    }; break;
    }
}

