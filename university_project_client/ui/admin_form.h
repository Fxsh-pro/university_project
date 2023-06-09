#ifndef ADMIN_FORM_H
#define ADMIN_FORM_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "h/aboutuserform.h"
#include "add_access_form.h"
#include "change_access_name_form.h"

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

    void open_add_access();

    void open_change_access_name();

private slots:
    void on_pushButton_user_info_clicked();

    void get_admin_json(QString ser_json);

    void prepare_window();

    void on_comboBox_currentIndexChanged(int index);

    void on_lineEdit_services_search_textEdited(const QString &arg1);

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_listWidget_access_level_itemClicked(QListWidgetItem *item);

    void on_pushButton_add_item_clicked();

    void on_pushButton_first_parameter_clicked();

    void on_pushButton_delete_item_clicked();

    void get_new_access(QString new_access);

    void add_new_access_success();

    void add_new_access_failed();
private:
    Ui::admin_form *ui;
    QJsonObject admin_data;
    add_access_form* ui_add_access;
    change_access_name_form* ui_change_access_name;
};

#endif // ADMIN_FORM_H
