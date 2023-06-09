#ifndef CHANGE_ACCESS_NAME_FORM_H
#define CHANGE_ACCESS_NAME_FORM_H

#include <QDialog>

namespace Ui {
class change_access_name_form;
}

class change_access_name_form : public QDialog
{
    Q_OBJECT

public:
    explicit change_access_name_form(QWidget *parent = nullptr);
    ~change_access_name_form();

public slots:
    void open_form();

private slots:
    void on_pushButton_cancel_clicked();

private:
    Ui::change_access_name_form *ui;
};

#endif // CHANGE_ACCESS_NAME_FORM_H
