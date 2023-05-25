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

    /// \brief on_pushButton_exit_clicked отвечает нажатие на кнопку закрытия окна
    /// \param void
    /// \return void
    ///
    void on_pushButton_exit_clicked();

    /// \brief set_user_data_info отвечает за заполнение лейблов соответствующими данными
    /// \param QString name - логин пользователя, QString access_level - уровень доступа
    /// \return void
    ///
    void set_user_data_info(QString name, QString access_level);

    /// \brief on_pushButton_change_pass_clicked отвечает за нажатие на кнопку смены пароля
    /// \param void
    /// \return void
    ///
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
