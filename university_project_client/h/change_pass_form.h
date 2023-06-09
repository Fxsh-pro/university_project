#ifndef CHANGE_PASS_FORM_H
#define CHANGE_PASS_FORM_H

#include <QWidget>
#include <QDialog>
#include <QKeyEvent>
#include <QRegularExpression>
#include <QMessageBox>
#include <QString>
#include <QResource>

namespace Ui {
class change_pass_form;
}

class change_pass_form : public QDialog
{
    Q_OBJECT

public:
    explicit change_pass_form(QWidget *parent = nullptr);
    ~change_pass_form();
public slots:
    /// \brief slot_on_change_pass отвечает за изменение пароля
    /// \param QString user_name - имя пользователя
    /// \return void
    ///
    void slot_on_change_pass(QString user_name);

    /// \brief keyPressEvent отвечает за реакцию на нажатие кнопок
    /// \param QKeyEvent* event - событие
    /// \return void
    ///
    void keyPressEvent(QKeyEvent* event);

private slots:
    /// \brief on_confirm_pushbutton_clicked отвечает за нажатие кнопки подтверждения
    /// \param void
    /// \return void
    ///
    void on_confirm_pushbutton_clicked();

    /// \brief slot_on_change_pass_ok отвечает за успешное изменение пароля
    /// \param void
    /// \return void
    ///
    void slot_on_change_pass_ok();

    /// \brief on_cancel_pushbutton_clicked отвечает за нажатие на кнопку отмены
    /// \param void
    /// \return void
    ///
    void on_cancel_pushbutton_clicked();

    /// \brief on_pushButton_clicked отвечает за нажатие на кнопку
    /// \param void
    /// \return void
    ///
    void on_pushButton_clicked();

    /// \brief on_pushButton_set_visible_pass_2_clicked отвечает за нажатие на кнопку отображения пароля
    /// \param void
    /// \return void
    ///
    void on_pushButton_set_visible_pass_2_clicked();

    /// \brief on_pushButton_set_visible_pass_clicked отвечает за нажатие на кнопку отображения пароля
    /// \param void
    /// \return void
    ///
    void on_pushButton_set_visible_pass_clicked();

private:
    Ui::change_pass_form *ui;
    QString user_login;
    bool echo_1_pass_mode;
    bool echo_2_pass_mode;
};

#endif // CHANGE_PASS_FORM_H
