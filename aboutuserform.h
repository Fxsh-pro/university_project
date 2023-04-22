#ifndef ABOUTUSERFORM_H
#define ABOUTUSERFORM_H

#include <QWidget>

namespace Ui {
class AboutUserForm;
}

class AboutUserForm : public QWidget
{
    Q_OBJECT

public:
    explicit AboutUserForm(QWidget *parent = nullptr);
    ~AboutUserForm();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::AboutUserForm *ui;
};

#endif // ABOUTUSERFORM_H
