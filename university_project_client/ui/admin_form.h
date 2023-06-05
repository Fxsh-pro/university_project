#ifndef ADMIN_FORM_H
#define ADMIN_FORM_H

#include <QMainWindow>
#include "h/aboutuserform.h"

namespace Ui {
class admin_form;
}

class admin_form : public QMainWindow
{
    Q_OBJECT

public:
    explicit admin_form(QWidget *parent = nullptr);
    ~admin_form();
signals:
    void press_user_info();

private slots:
    void on_pushButton_user_info_clicked();

    void get_admin_json(QString ser_json);

    void prepare_window();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::admin_form *ui;
    QJsonObject admin_data;
};

#endif // ADMIN_FORM_H
