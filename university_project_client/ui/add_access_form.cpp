#include "add_access_form.h"
#include "ui_add_access_form.h"

add_access_form::add_access_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_access_form)
{
    ui->setupUi(this);
}

add_access_form::~add_access_form()
{
    delete ui;
}

void add_access_form::open_form()
{
    ui->lineEdit_add_new_access->clear();
    this->setModal(true);
    this->show();
}

void add_access_form::on_pushButton_cancel_clicked()
{
    this->close();
}


void add_access_form::on_pushButton_confirm_clicked()
{
    if (!ui->lineEdit_add_new_access->text().isEmpty())
    {
        emit send_new_access(ui->lineEdit_add_new_access->text());
    }
}

