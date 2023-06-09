#include "change_access_name.h"
#include "ui_change_access_name.h"

change_access_name::change_access_name(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::change_access_name)
{
    ui->setupUi(this);
}

change_access_name::~change_access_name()
{
    delete ui;
}
