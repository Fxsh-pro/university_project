#include "h/mainwindow.h"
#include "ui_mainwindow.h"
#include "h/aboutuserform.h"
#include "h/singletonClient.h"
#include <QClipboard>
#include <QApplication>
#include <QTimer>
#include <QColor>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui_auth = new AuthForm;
    ui_user_info = new AboutUserForm;

    connect(timer1, SIGNAL(timeout()), this, SLOT(update1()));
    connect(timer2, SIGNAL(timeout()), this, SLOT(update2()));
    connect(ui_user_info, &AboutUserForm::user_exit_press,
            this, &MainWindow::user_exit);
    connect(this, &MainWindow::about_user_info_send,
            ui_user_info, &AboutUserForm::set_user_data_info);

   // connect(ui_auth, &AuthForm::closed, this, &MainWindow::slot_show);
    connect(SingletonClient::getInstance(),
            &SingletonClient::auth_ok,
            this,
            &MainWindow::slot_on_auth_ok);
    connect(SingletonClient::getInstance(),
            &SingletonClient::auth_invalid,
            this,
            &MainWindow::slot_on_auth_invalid);

    connect(this, &MainWindow::open_user_info,
            ui_user_info, &AboutUserForm::show);

    ui_auth->show();

}
void MainWindow::slot_show(QString log)
{
    this->show();
}
void MainWindow::update1(){
    ui->pushButton_copy_login->setText("Скопировать");
    ui->pushButton_copy_login->setStyleSheet("background-color: rgba(255, 255, 255, 200);");
}
void MainWindow::update2(){
    ui->pushButton_copy_password->setText("Скопировать");
    ui->pushButton_copy_password->setStyleSheet("background-color: rgba(255, 255, 255, 200);");
}

void MainWindow::prepare_window_for_user()
{
    ui->pushButton_user_info->setText(user_data["Login"].toString());
    ui->label_acces_level_val->setText(user_data["Position"].toString());

    QJsonArray ServicesArr = user_data["Services"].toArray();
    for (const QJsonValue& value : ServicesArr)
    {
        QJsonObject object = value.toObject();
        QListWidgetItem* NewService = new QListWidgetItem(object["name"].toString());
        ui->listWidget_services->addItem(NewService);
    }
    ui->frame_3->hide();
    emit about_user_info_send(user_data["Login"].toString(), user_data["Position"].toString());
}

void MainWindow::slot_on_auth_ok(QString user_data)
{
    ui_auth->close();
    this->show();
    QJsonDocument doc = QJsonDocument::fromJson(user_data.toUtf8());
    this->user_data = doc.object();
    this->prepare_window_for_user();
}

void MainWindow::slot_on_auth_invalid()
{
    QMessageBox::warning(nullptr, "Ошибка", "Были введены неверные данные.");
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::button_is_pressed(QPushButton * but)
{
    QClipboard* clip = QGuiApplication::clipboard();
    but->setText("Скопировано");
    but->setStyleSheet("background-color:" + QColor(217, 245, 196, 127).name());
    if (but == ui->pushButton_copy_login)
    {
        clip->setText(ui->lineEdit_service_login->text());
        timer1->start(1500);
    }
    else if (but == ui->pushButton_copy_password)
    {
        clip->setText(ui->lineEdit_service_password->text());
        timer2->start(1500);
    }
}

void MainWindow::on_pushButton_Test_clicked()
{
    // NO, DON'T TOUCH ME THERE, THIS IS MY NO-NO-SQUARE
}

void MainWindow::on_listWidget_currentRowChanged(int currentRow)
{
    // NO, DON'T TOUCH ME THERE, THIS IS MY NO-NO-SQUARE
}

void MainWindow::on_pushButton_clicked()
{
    // NO, DON'T TOUCH ME THERE, THIS IS MY NO-NO-SQUARE
}

void MainWindow::on_pushButton_copy_login_clicked()
{
    this->button_is_pressed(ui->pushButton_copy_login);
}

void MainWindow::on_pushButton_copy_password_clicked()
{
    this->button_is_pressed(ui->pushButton_copy_password);
}

void MainWindow::on_pushButton_user_info_clicked()
{
    ui_user_info->setModal(true);
    ui_user_info->show();
}

void MainWindow::user_exit()
{
    this->close();
    ui->listWidget_services->clear();
    ui_auth->show();
}

void MainWindow::on_listWidget_services_itemClicked(QListWidgetItem *item)
{
    if (ui->frame_3->isHidden())
    {
        ui->frame_3->show();
    }

    QJsonArray ServicesArr = user_data["Services"].toArray();
    for (const QJsonValue& value : ServicesArr)
    {
        QJsonObject object = value.toObject();
        if (item->text() == object["name"].toString())
        {
            ui->lineEdit_service_login->setText(object["login"].toString());
            ui->lineEdit_service_password->setText(object["password"].toString());
            break;
        }
    }

}


void MainWindow::on_lineEdit_services_search_textEdited(const QString &arg)
{
    for (int i = 0; i < ui->listWidget_services->count(); i++)
    {
        QListWidgetItem* item = ui->listWidget_services->item(i);
        if (!(item->text().toUpper().contains(arg.toUpper()))) item->setHidden(true);
        else item->setHidden(false);
    }
}

