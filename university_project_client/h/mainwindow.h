#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "h/authform.h"
#include "qjsonobject.h"
#include <h/aboutuserform.h>
#include <QListWidget>
#include <QMessageBox>
#include <QResource>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QTimer * timer1 = new QTimer(this);
    QTimer * timer2 = new QTimer(this);

public slots:
    /// \brief slot_show отвечает за отображение слота
    /// \param QString log - логин
    /// \return void
    ///
    void slot_show(QString log);

private slots:
    /// \brief update1 отвечает за выполнение смены цвета кнопки "Скопировать"
    /// \param void
    /// \return void
    ///
    void update1();

    /// \brief update2 отвечает за выполнение смены цвета кнопки "Скопировать"
    /// \param void
    /// \return void
    ///
    void update2();

    /// \brief button_is_pressed отвечает за нажатие на кнопку "Скопирвоать"
    /// \param QPushButton* but - указатель на кнпоку
    /// \return void
    ///
    void button_is_pressed(QPushButton* but);

    /// \brief on_pushButton_Test_clicked отвечает за тестовое нажатие кнопки
    /// \param void
    /// \return void
    ///
    void on_pushButton_Test_clicked();

    /// \brief on_listWidget_currentRowChanged отвечает за изменение листа виджетов
    /// \param int currentRow - номер строки
    /// \return void
    ///
    void on_listWidget_currentRowChanged(int currentRow);

    /// \brief on_pushButton_clicked отвечает за нажатие на кнопку
    /// \param void
    /// \return void
    ///
    void on_pushButton_clicked();

    /// \brief slot_on_auth_ok отвечает за успешную авторизацию
    /// \param QString user_data - данные пользователя
    /// \return void
    ///
    void slot_on_auth_ok(QString user_data);

    /// \brief slot_on_auth_invalid отвечает за неуспешную авторизацию
    /// \param void
    /// \return void
    ///
    void slot_on_auth_invalid();

    /// \brief on_pushButton_copy_login_clicked отвечает за нажатие на кнпоку "Логин"
    /// \param void
    /// \return void
    ///
    void on_pushButton_copy_login_clicked();

    /// \brief on_pushButton_copy_password_clicked отвечает за нажатие на кнпоку "Пароль"
    /// \param void
    /// \return void
    ///
    void on_pushButton_copy_password_clicked();

    /// \brief on_pushButton_user_info_clicked отвечает за нажатие на кнпоку "Пользователь"
    /// \param void
    /// \return void
    ///
    void on_pushButton_user_info_clicked();

    /// \brief user_exit отвечает за нажатие на кнпоку выхода
    /// \param void
    /// \return void
    ///
    void user_exit();

    /// \brief prepare_window_for_user отвечает за подготовку окна к визуализации
    /// \param void
    /// \return void
    ///
    void prepare_window_for_user();

    /// \brief on_listWidget_services_itemClicked отвечает за нажатие на объект листа виджетов
    /// \param QListWidgetItem *item - объект
    /// \return void
    ///
    void on_listWidget_services_itemClicked(QListWidgetItem *item);

    /// \brief on_lineEdit_services_search_textEdited отвечает за строку поиска среди обхектов виджета
    /// \param const QString &arg1 - текст поиска
    /// \return void
    ///
    void on_lineEdit_services_search_textEdited(const QString &arg1);

signals:
    void open_user_info();

    void about_user_info_send(QString, QString);

private:
    Ui::MainWindow *ui;
    AuthForm *ui_auth;
    AboutUserForm *ui_user_info;

    QJsonObject user_data;
};

#endif // MAINWINDOW_H
