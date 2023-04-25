#include "aboutuserform.h"
#include "ui_aboutuserform.h"
#include <authform.h>
#include <mainwindow.h>

AboutUserForm::AboutUserForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AboutUserForm)
{
    ui->setupUi(this);
}

AboutUserForm::~AboutUserForm()
{
    delete ui;
}

void AboutUserForm::on_pushButton_2_clicked()
{
    AuthForm* auth_form = new AuthForm();
    this->close();
    auth_form->show();
}

