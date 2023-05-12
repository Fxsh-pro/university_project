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

    void set_user_data_info(QString name, QString access_level);

signals:
    void user_exit_press();

private:
    Ui::AboutUserForm *ui;

    friend class MainWindow;
};

#endif // ABOUTUSERFORM_H
