#ifndef ADD_ACCESS_FORM_H
#define ADD_ACCESS_FORM_H

#include <QDialog>

namespace Ui {
class add_access_form;
}

class add_access_form : public QDialog
{
    Q_OBJECT

public:
    explicit add_access_form(QWidget *parent = nullptr);
    ~add_access_form();

signals:
    void send_new_access(QString new_access);

public slots:
    void open_form();

private slots:
    void on_pushButton_cancel_clicked();

    void on_pushButton_confirm_clicked();

private:
    Ui::add_access_form *ui;
};

#endif // ADD_ACCESS_FORM_H
