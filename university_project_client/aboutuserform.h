#ifndef ABOUTUSERFORM_H
#define ABOUTUSERFORM_H

#include <QWidget>
#include <QDialog>

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

signals:
    void user_exit_press();

private:
    Ui::AboutUserForm *ui;
};

#endif // ABOUTUSERFORM_H
