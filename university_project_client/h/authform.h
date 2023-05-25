#ifndef AUTHFORM_H
#define AUTHFORM_H

#include <QDialog>
#include <QDebug>
#include "h/singletonClient.h"
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
    /// \brief on_pushButton_change_clicked отвечает за нажатие на кнопку изменения типа входа (авторизация-регистрация)
    /// \param void
    /// \return void
    ///
    void on_pushButton_change_clicked();

    /// \brief on_pushButton_reg_clicked отвечает за нажатие на кнопку регитсрации
    /// \param void
    /// \return void
    ///
    void on_pushButton_reg_clicked();

    /// \brief on_pushButton_auth_clicked отвечает за нажатие на кнопку авторизации
    /// \param void
    /// \return void
    ///
    void on_pushButton_auth_clicked();

private:
    Ui::AuthForm *ui;

    /// \brief change_mode отвечает за переключение между режимами авторизации и регистрации
    /// \param bool mode - текущее состояние формы
    /// \return void
    ///
    void change_mode(bool mode);

    /// \brief keyPressEvent отвечает за нажатие на кнопки клавиатуры
    /// \param QKeyEvent *event - событие
    /// \return void
    ///
    void keyPressEvent(QKeyEvent *event) override;
signals:
    void closed(QString log);
};

#endif // AUTHFORM_H
