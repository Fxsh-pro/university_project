#include "change_access_name_form.h"
#include "ui_change_access_name_form.h"

change_access_name_form::change_access_name_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::change_access_name_form)
{
    ui->setupUi(this);
}

change_access_name_form::~change_access_name_form()
{
    delete ui;
}

void change_access_name_form::open_form()
{
    ui->lineEdit_change_access_name->clear();
    this->setModal(true);
    this->show();
}

void change_access_name_form::on_pushButton_cancel_clicked()
{
    this->close();
}
