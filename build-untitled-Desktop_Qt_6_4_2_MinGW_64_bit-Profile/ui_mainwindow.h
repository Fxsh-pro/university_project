/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QFrame *admin_panel;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_user_info;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_access_level;
    QLabel *label_acces_level_val;
    QLabel *label_program_name;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEdit_services_search;
    QListWidget *listWidget_services;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_service_login;
    QLineEdit *lineEdit_service_login;
    QPushButton *pushButton_copy_login;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_service_password;
    QLineEdit *lineEdit_service_password;
    QPushButton *pushButton_copy_password;
    QLabel *label_service_description;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(993, 586);
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift")});
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgba(253, 255, 253, 255);\n"
"font-family: Bahnschrift;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 90));
        widget->setMaximumSize(QSize(16777215, 90));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 244, 236, 180);\n"
"border-radius: 10px;"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        admin_panel = new QFrame(widget);
        admin_panel->setObjectName("admin_panel");
        admin_panel->setMinimumSize(QSize(270, 70));
        admin_panel->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 238, 229, 80);\n"
"border: 2px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        verticalLayout = new QVBoxLayout(admin_panel);
        verticalLayout->setObjectName("verticalLayout");
        pushButton_user_info = new QPushButton(admin_panel);
        pushButton_user_info->setObjectName("pushButton_user_info");
        pushButton_user_info->setMinimumSize(QSize(200, 30));
        pushButton_user_info->setMaximumSize(QSize(16777215, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift")});
        font1.setPointSize(14);
        pushButton_user_info->setFont(font1);
        pushButton_user_info->setMouseTracking(true);
        pushButton_user_info->setLayoutDirection(Qt::LeftToRight);
        pushButton_user_info->setAutoFillBackground(false);
        pushButton_user_info->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgba(255, 255, 255, 200);\n"
"border: 3px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgba(236, 218, 204, 90);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgba(236, 218, 204, 150);\n"
"}"));
        pushButton_user_info->setIconSize(QSize(20, 20));
        pushButton_user_info->setCheckable(false);

        verticalLayout->addWidget(pushButton_user_info);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_access_level = new QLabel(admin_panel);
        label_access_level->setObjectName("label_access_level");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bahnschrift")});
        font2.setPointSize(12);
        label_access_level->setFont(font2);
        label_access_level->setStyleSheet(QString::fromUtf8("border: none"));

        horizontalLayout_5->addWidget(label_access_level);

        label_acces_level_val = new QLabel(admin_panel);
        label_acces_level_val->setObjectName("label_acces_level_val");
        label_acces_level_val->setFont(font2);
        label_acces_level_val->setStyleSheet(QString::fromUtf8("border: none"));

        horizontalLayout_5->addWidget(label_acces_level_val);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_2->addWidget(admin_panel, 0, Qt::AlignLeft);

        label_program_name = new QLabel(widget);
        label_program_name->setObjectName("label_program_name");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Bahnschrift")});
        font3.setPointSize(20);
        label_program_name->setFont(font3);
        label_program_name->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 238, 229, 80);\n"
"border: 2px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));

        horizontalLayout_2->addWidget(label_program_name, 0, Qt::AlignRight);


        verticalLayout_3->addWidget(widget);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 244, 236, 180);\n"
"border-radius: 10px;"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName("horizontalLayout");
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName("frame_4");
        frame_4->setMaximumSize(QSize(270, 16777215));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 238, 229, 80);\n"
"border: 2px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_4);
        verticalLayout_5->setObjectName("verticalLayout_5");
        lineEdit_services_search = new QLineEdit(frame_4);
        lineEdit_services_search->setObjectName("lineEdit_services_search");
        lineEdit_services_search->setMinimumSize(QSize(250, 30));
        lineEdit_services_search->setMaximumSize(QSize(250, 16777215));
        lineEdit_services_search->setFont(font1);
        lineEdit_services_search->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 3px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        lineEdit_services_search->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(lineEdit_services_search);

        listWidget_services = new QListWidget(frame_4);
        listWidget_services->setObjectName("listWidget_services");
        listWidget_services->setMinimumSize(QSize(250, 0));
        listWidget_services->setMaximumSize(QSize(250, 16777215));
        listWidget_services->setFont(font1);
        listWidget_services->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 3px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        listWidget_services->setMidLineWidth(0);

        verticalLayout_5->addWidget(listWidget_services);


        horizontalLayout->addWidget(frame_4, 0, Qt::AlignLeft);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 238, 229, 80);\n"
"border: 2px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame = new QFrame(frame_3);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 238, 229, 80);\n"
"border: 2px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_service_login = new QLabel(frame);
        label_service_login->setObjectName("label_service_login");
        label_service_login->setEnabled(true);
        label_service_login->setMinimumSize(QSize(170, 30));
        label_service_login->setMaximumSize(QSize(170, 30));
        label_service_login->setFont(font1);
        label_service_login->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 160);\n"
"border: 2px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        label_service_login->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_service_login);

        lineEdit_service_login = new QLineEdit(frame);
        lineEdit_service_login->setObjectName("lineEdit_service_login");
        lineEdit_service_login->setEnabled(true);
        lineEdit_service_login->setMinimumSize(QSize(0, 30));
        lineEdit_service_login->setFont(font1);
        lineEdit_service_login->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 3px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        lineEdit_service_login->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lineEdit_service_login->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_service_login);

        pushButton_copy_login = new QPushButton(frame);
        pushButton_copy_login->setObjectName("pushButton_copy_login");
        pushButton_copy_login->setEnabled(true);
        pushButton_copy_login->setMinimumSize(QSize(120, 30));
        pushButton_copy_login->setFont(font2);
        pushButton_copy_login->setMouseTracking(true);
        pushButton_copy_login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgba(255, 255, 255, 200);\n"
"border: 3px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgba(236, 218, 204, 90);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgba(236, 218, 204, 150);\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_copy_login);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_service_password = new QLabel(frame);
        label_service_password->setObjectName("label_service_password");
        label_service_password->setEnabled(true);
        label_service_password->setMinimumSize(QSize(170, 30));
        label_service_password->setMaximumSize(QSize(170, 30));
        label_service_password->setFont(font1);
        label_service_password->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 160);\n"
"border: 2px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        label_service_password->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_service_password);

        lineEdit_service_password = new QLineEdit(frame);
        lineEdit_service_password->setObjectName("lineEdit_service_password");
        lineEdit_service_password->setEnabled(true);
        lineEdit_service_password->setMinimumSize(QSize(0, 30));
        lineEdit_service_password->setFont(font1);
        lineEdit_service_password->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 3px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        lineEdit_service_password->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lineEdit_service_password->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_service_password);

        pushButton_copy_password = new QPushButton(frame);
        pushButton_copy_password->setObjectName("pushButton_copy_password");
        pushButton_copy_password->setEnabled(true);
        pushButton_copy_password->setMinimumSize(QSize(120, 30));
        pushButton_copy_password->setFont(font2);
        pushButton_copy_password->setMouseTracking(true);
        pushButton_copy_password->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgba(255, 255, 255, 200);\n"
"border: 3px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgba(236, 218, 204, 90);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgba(236, 218, 204, 150);\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_copy_password);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(frame);

        label_service_description = new QLabel(frame_3);
        label_service_description->setObjectName("label_service_description");
        label_service_description->setEnabled(true);
        label_service_description->setFont(font1);
        label_service_description->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 238, 229, 80);\n"
"border: 3px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));

        verticalLayout_2->addWidget(label_service_description);


        horizontalLayout->addWidget(frame_3);


        verticalLayout_3->addWidget(frame_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "encryptiz", nullptr));
        pushButton_user_info->setText(QCoreApplication::translate("MainWindow", "admin", nullptr));
        label_access_level->setText(QCoreApplication::translate("MainWindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 \320\264\320\276\321\201\321\202\321\203\320\277\320\260:", nullptr));
        label_acces_level_val->setText(QCoreApplication::translate("MainWindow", "AccessLevel", nullptr));
        label_program_name->setText(QCoreApplication::translate("MainWindow", "encryptiz", nullptr));
        lineEdit_services_search->setText(QString());
        lineEdit_services_search->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272...", nullptr));
        label_service_login->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275 \321\201\320\273\321\203\320\266\320\261\321\213:   ", nullptr));
        lineEdit_service_login->setText(QCoreApplication::translate("MainWindow", "SomeServiceName", nullptr));
        pushButton_copy_login->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214 ", nullptr));
        label_service_password->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214:   ", nullptr));
        lineEdit_service_password->setText(QCoreApplication::translate("MainWindow", "O324#2svSw2M2?!", nullptr));
        pushButton_copy_password->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214 ", nullptr));
        label_service_description->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\227\320\264\320\265\321\201\321\214 \320\261\321\203\320\264\320\265\321\202 \320\276\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\320\275\320\276\320\271 \320\276\320\261\320\273\320\260\321\201\321\202\320\270, \320\264\320\273\321\217 \320\272\320\276\321\202\320\276\321\200\320\276\320\271 <br/>\320\261\320\265\321\200\320\265\321\202\321\201\321\217 \320\277\320\260\321\200\320\276\320\273\321\214.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
