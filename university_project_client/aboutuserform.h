#ifndef ABOUTUSERFORM_H
#define ABOUTUSERFORM_H

#include <QWidget>
#include <QDialog>
#include "change_pass_form.h"

namespace Ui {
class AboutUserForm;
}

class AboutUserForm : public QDialog
{
    Q_OBJECT

public:
    explicit AboutUserForm(QDialog *parent = nullptr);
    ~AboutUserForm();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_exit_clicked();

    void set_user_data_info(QString name, QString access_level);

    void on_pushButton_change_pass_clicked();

signals:
    void user_exit_press();

    void change_pass_press(QString user_login);

private:
    Ui::AboutUserForm *ui;
    change_pass_form *ui_change_pass;

    friend class MainWindow;
};

#endif // ABOUTUSERFORM_H
