#ifndef AUTHFORM_H
#define AUTHFORM_H

#include <QDialog>
#include <QDebug>
#include "singletonClient.h"
#include <QKeyEvent>



namespace Ui {
class AuthForm;
}

class AuthForm : public QDialog
{
    Q_OBJECT

public:
    explicit AuthForm(QWidget *parent = nullptr);
    ~AuthForm();

private slots:
    void on_pushButton_change_clicked();

    void on_pushButton_reg_clicked();

    void on_pushButton_auth_clicked();

private:
    Ui::AuthForm *ui;
    void change_mode(bool mode);

    void keyPressEvent(QKeyEvent *event) override;
signals:
    void closed(QString log);
};

#endif // AUTHFORM_H
