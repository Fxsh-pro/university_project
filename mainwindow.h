#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "authform.h"
#include <aboutuserform.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QTimer * timer = new QTimer(this);
public slots:
    void slot_show(QString log);

private slots:
    void update();
    void on_pushButton_Test_clicked();

    void on_listWidget_currentRowChanged(int currentRow);

    void on_pushButton_clicked();

    void slot_on_auth_ok(QString);
    void on_pushButton_copy_login_clicked();

    void on_pushButton_copy_password_clicked();

signals:
    void open_user_info();

private:
    Ui::MainWindow *ui;
    AuthForm *ui_auth;
    AboutUserForm *ui_user_info;
};

#endif // MAINWINDOW_H
