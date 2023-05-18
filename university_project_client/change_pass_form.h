#ifndef CHANGE_PASS_FORM_H
#define CHANGE_PASS_FORM_H

#include <QWidget>
#include <QDialog>
#include <QKeyEvent>
#include <QRegularExpression>
#include <QMessageBox>
#include <QString>
#include "singletonClient.h"

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
    void slot_on_change_pass(QString user_name);

    void keyPressEvent(QKeyEvent* event);

private slots:
    void on_confirm_pushbutton_clicked();

    void slot_on_change_pass_ok();

    void on_cancel_pushbutton_clicked();

    void on_pushButton_clicked();

    void on_pushButton_set_visible_pass_2_clicked();

    void on_pushButton_set_visible_pass_clicked();

private:
    Ui::change_pass_form *ui;
    QString user_login;
    bool echo_1_pass_mode;
    bool echo_2_pass_mode;
};

#endif // CHANGE_PASS_FORM_H
