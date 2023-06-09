#include "admin_form.h"
#include "ui_admin_form.h"
#include "h/singletonClient.h"

admin_form::admin_form(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin_form)
{
    ui->setupUi(this);
    ui_add_access = new add_access_form;
    ui_change_access_name = new change_access_name_form;

    connect(SingletonClient::getInstance(), &SingletonClient::admin_ok,
            this, &admin_form::get_admin_json);
    connect(this, &admin_form::open_add_access,
            ui_add_access, &add_access_form::open_form);
    connect(this, &admin_form::open_change_access_name,
            ui_change_access_name, &change_access_name_form::open_form);

    connect(ui_add_access, &add_access_form::send_new_access,
            this, &admin_form::get_new_access);
    connect(SingletonClient::getInstance(), &SingletonClient::add_access_ok,
            this, &admin_form::add_new_access_success);
    connect(SingletonClient::getInstance(), &SingletonClient::add_access_fail,
            this, &admin_form::add_new_access_failed);
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
        if (object["position"].toString() != "администратор")
        {
            QListWidgetItem* NewUser = new QListWidgetItem(object["login"].toString());
            ui->listWidget->addItem(NewUser);
        }
    }
    ui->frame_3->hide();
    ui->frame_5->hide();
}


void admin_form::on_comboBox_currentIndexChanged(int index)
{
    ui->listWidget->clear();
    ui->pushButton_delete_item->setEnabled(false);
    switch(index)
    {
    case 0:// Пользователи
    {
        QJsonArray UsersArr = admin_data["Users"].toArray();
        for (const QJsonValue& value : UsersArr)
        {
            QJsonObject object = value.toObject();
            if (object["position"].toString() != "администратор")
            {
                QListWidgetItem* NewUser = new QListWidgetItem(object["login"].toString());
                ui->listWidget->addItem(NewUser);
            }
        }
    }; break;
    case 1: // Позиции
    {
        QJsonArray PositionArr = admin_data["Positions"].toArray();
        for (const QJsonValue& value : PositionArr)
        {
            QJsonObject object = value.toObject();
            if (object["name"].toString() != "администратор")
            {
                QListWidgetItem* NewPosition = new QListWidgetItem(object["name"].toString());
                ui->listWidget->addItem(NewPosition);
            }
        }
    }; break;
    case 2: // Уровни доступа
    {
        QJsonArray AccessArr = admin_data["Access"].toArray();
        for (const QJsonValue& value : AccessArr)
        {
            QJsonObject object = value.toObject();
            QListWidgetItem* NewAccess = new QListWidgetItem(object["name"].toString());
            ui->listWidget->addItem(NewAccess);
        }
    }; break;
    case 3: // Службы
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


void admin_form::on_lineEdit_services_search_textEdited(const QString &arg)
{
    for (int i = 0; i < ui->listWidget->count(); i++) // Для Эмина
    {
        QListWidgetItem* item = ui->listWidget->item(i);
        if (!(item->text().toUpper().contains(arg.toUpper()))) item->setHidden(true);
        else item->setHidden(false);
    }
}


void admin_form::on_listWidget_itemClicked(QListWidgetItem *item)
{
    if (ui->frame_3->isHidden())
    {
        ui->frame_3->show();
    }
    ui->pushButton_delete_item->setEnabled(true);
    switch(ui->comboBox->currentIndex())
    {
    case 0: // Пользователи
    {
        ui->frame_5->hide();
        ui->label_first_parameter->setText("Логин");
        ui->label_second_parameter->show();
        ui->lineEdit_second_parameter->show();
        ui->pushButton_second_parameter->show();
        ui->label_second_parameter->setText("Позиция");

        QJsonArray ServicesArr = admin_data["Users"].toArray();
        for (const QJsonValue& value : ServicesArr)
        {
            QJsonObject object = value.toObject();
            if (item->text() == object["login"].toString())
            {

                ui->lineEdit_first_parameter->setText(object["login"].toString());
                ui->lineEdit_second_parameter->setText(object["position"].toString());
                break;
            }
        }
    };break;
    case 1: // Позиции
    {
        ui->pushButton_delete_access->setEnabled(false);
        ui->listWidget_access_level->clear();
        ui->frame_5->show();
        QJsonArray PositionArr = admin_data["Positions"].toArray();
        for (const QJsonValue& value : PositionArr)
        {
            QJsonObject object = value.toObject();
            if (item->text() == object["name"].toString())
            {
                QJsonArray PositionArr = object["access_list"].toArray();
                for (const QJsonValue& value_access : PositionArr)
                {
                    QJsonObject object_access = value_access.toObject();
                    QListWidgetItem* NewAccess = new QListWidgetItem(object_access["name"].toString());
                    ui->listWidget_access_level->addItem(NewAccess);
                }
                break;

            }
        }
    }; break;
    case 2: // Уровни доступа
    {
        ui->frame_5->hide();
        ui->label_second_parameter->hide();
        ui->lineEdit_second_parameter->hide();
        ui->pushButton_second_parameter->hide();
        ui->label_first_parameter->setText("Уровень доступа");

        QJsonArray AccessArr = admin_data["Access"].toArray();
        for (const QJsonValue& value : AccessArr)
        {
            QJsonObject object = value.toObject();
            if (item->text() == object["name"].toString())
            {

                ui->lineEdit_first_parameter->setText(object["name"].toString());
                break;
            }
        }
    }; break;
    case 3: // Службы
    {
        ui->frame_5->hide();
        ui->label_first_parameter->setText("Логин");
        ui->label_second_parameter->setText("Пароль");
        ui->label_second_parameter->show();
        ui->lineEdit_second_parameter->show();
        ui->pushButton_second_parameter->show();
        QJsonArray AccessArr = admin_data["Services"].toArray();
        for (const QJsonValue& value : AccessArr)
        {
            QJsonObject object = value.toObject();
            if (item->text() == object["name"].toString())
            {
            ui->lineEdit_first_parameter->setText(object["login"].toString());
            ui->lineEdit_second_parameter->setText(object["password"].toString());
            break;
            }
        }
    }; break;
    }

}


void admin_form::on_listWidget_access_level_itemClicked(QListWidgetItem *item)
{
    ui->pushButton_delete_access->setEnabled(true);
}


void admin_form::on_pushButton_add_item_clicked()
{
    switch(ui->comboBox->currentIndex())
    {
    case 0: // Пользователи
    {

    };break;
    case 1: // Позиции
    {

    };break;
    case 2: // Уровни доступа
    {
        emit open_add_access();
    };break;
    case 3: // Службы
    {

    };break;
    }
}


void admin_form::on_pushButton_first_parameter_clicked()
{
    switch(ui->comboBox->currentIndex())
    {
    case 0: // Пользователи
    {

    };break;
    case 1: // Позиции
    {

    };break;
    case 2: // Уровни доступа
    {
        emit open_change_access_name();
    };break;
    case 3: // Службы
    {

    };break;
    }
}


void admin_form::on_pushButton_delete_item_clicked()
{
    switch(ui->comboBox->currentIndex())
    {
    case 0: // Пользователи
    {

    };break;
    case 1: // Позиции
    {

    };break;
    case 2: // Уровни доступа
    {

    };break;
    case 3: // Службы
    {

    };break;
    }
}

void admin_form::get_new_access(QString new_access)
{
    QJsonArray AccessArr = admin_data["Access"].toArray();
    qDebug() << AccessArr;
    QJsonObject new_;
    new_["name"] = new_access;
    admin_data["Access"] = AccessArr;
    SingletonClient::getInstance()->send_msg_to_server("add_new_access " + new_access + "\n");
}

void admin_form::add_new_access_success()
{
    QMessageBox::information(nullptr, "Успешно", "Новый уровень доступа был успешно добавлен!");
}

void admin_form::add_new_access_failed()
{
    QMessageBox::critical(nullptr, "Ошибка", "Уровень доступа не был добавлен!");
}

