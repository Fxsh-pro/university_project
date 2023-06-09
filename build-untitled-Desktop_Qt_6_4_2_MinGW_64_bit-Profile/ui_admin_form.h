/********************************************************************************
** Form generated from reading UI file 'admin_form.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_FORM_H
#define UI_ADMIN_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_form
{
public:
    QWidget *centralwidget;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEdit_services_search;
    QListWidget *listWidget;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_first_parameter;
    QLineEdit *lineEdit_first_parameter;
    QPushButton *pushButton_first_parameter;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_second_parameter;
    QLineEdit *lineEdit_second_parameter;
    QPushButton *pushButton_second_parameter;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QFrame *admin_panel;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_user_info;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLabel *label_program_name;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admin_form)
    {
        if (admin_form->objectName().isEmpty())
            admin_form->setObjectName("admin_form");
        admin_form->resize(980, 622);
        centralwidget = new QWidget(admin_form);
        centralwidget->setObjectName("centralwidget");
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 100, 971, 467));
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
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift")});
        font.setPointSize(14);
        lineEdit_services_search->setFont(font);
        lineEdit_services_search->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 3px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        lineEdit_services_search->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(lineEdit_services_search);

        listWidget = new QListWidget(frame_4);
        listWidget->setObjectName("listWidget");
        listWidget->setMinimumSize(QSize(250, 0));
        listWidget->setMaximumSize(QSize(250, 16777215));
        listWidget->setFont(font);
        listWidget->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 3px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        listWidget->setMidLineWidth(0);

        verticalLayout_5->addWidget(listWidget);


        horizontalLayout->addWidget(frame_4, 0, Qt::AlignLeft);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setEnabled(true);
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
        label_first_parameter = new QLabel(frame);
        label_first_parameter->setObjectName("label_first_parameter");
        label_first_parameter->setEnabled(true);
        label_first_parameter->setMinimumSize(QSize(170, 30));
        label_first_parameter->setMaximumSize(QSize(170, 30));
        label_first_parameter->setFont(font);
        label_first_parameter->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 160);\n"
"border: 2px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        label_first_parameter->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_first_parameter);

        lineEdit_first_parameter = new QLineEdit(frame);
        lineEdit_first_parameter->setObjectName("lineEdit_first_parameter");
        lineEdit_first_parameter->setEnabled(true);
        lineEdit_first_parameter->setMinimumSize(QSize(0, 30));
        lineEdit_first_parameter->setFont(font);
        lineEdit_first_parameter->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 3px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        lineEdit_first_parameter->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lineEdit_first_parameter->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_first_parameter);

        pushButton_first_parameter = new QPushButton(frame);
        pushButton_first_parameter->setObjectName("pushButton_first_parameter");
        pushButton_first_parameter->setEnabled(true);
        pushButton_first_parameter->setMinimumSize(QSize(120, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift")});
        font1.setPointSize(12);
        pushButton_first_parameter->setFont(font1);
        pushButton_first_parameter->setMouseTracking(true);
        pushButton_first_parameter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_3->addWidget(pushButton_first_parameter);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_second_parameter = new QLabel(frame);
        label_second_parameter->setObjectName("label_second_parameter");
        label_second_parameter->setEnabled(true);
        label_second_parameter->setMinimumSize(QSize(170, 30));
        label_second_parameter->setMaximumSize(QSize(170, 30));
        label_second_parameter->setFont(font);
        label_second_parameter->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 160);\n"
"border: 2px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        label_second_parameter->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_second_parameter);

        lineEdit_second_parameter = new QLineEdit(frame);
        lineEdit_second_parameter->setObjectName("lineEdit_second_parameter");
        lineEdit_second_parameter->setEnabled(true);
        lineEdit_second_parameter->setMinimumSize(QSize(0, 30));
        lineEdit_second_parameter->setFont(font);
        lineEdit_second_parameter->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 3px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        lineEdit_second_parameter->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lineEdit_second_parameter->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_second_parameter);

        pushButton_second_parameter = new QPushButton(frame);
        pushButton_second_parameter->setObjectName("pushButton_second_parameter");
        pushButton_second_parameter->setEnabled(true);
        pushButton_second_parameter->setMinimumSize(QSize(120, 30));
        pushButton_second_parameter->setFont(font1);
        pushButton_second_parameter->setMouseTracking(true);
        pushButton_second_parameter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_4->addWidget(pushButton_second_parameter);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");

        verticalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout_2->addWidget(frame);


        horizontalLayout->addWidget(frame_3);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 3, 971, 90));
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
        pushButton_user_info->setFont(font);
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
        comboBox = new QComboBox(admin_panel);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout_5->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_2->addWidget(admin_panel, 0, Qt::AlignLeft);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        label_program_name = new QLabel(widget);
        label_program_name->setObjectName("label_program_name");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bahnschrift")});
        font2.setPointSize(20);
        label_program_name->setFont(font2);
        label_program_name->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 238, 229, 80);\n"
"border: 2px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));

        horizontalLayout_2->addWidget(label_program_name, 0, Qt::AlignRight);

        admin_form->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admin_form);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 980, 26));
        admin_form->setMenuBar(menubar);
        statusbar = new QStatusBar(admin_form);
        statusbar->setObjectName("statusbar");
        admin_form->setStatusBar(statusbar);

        retranslateUi(admin_form);

        QMetaObject::connectSlotsByName(admin_form);
    } // setupUi

    void retranslateUi(QMainWindow *admin_form)
    {
        admin_form->setWindowTitle(QCoreApplication::translate("admin_form", "MainWindow", nullptr));
        lineEdit_services_search->setText(QString());
        lineEdit_services_search->setPlaceholderText(QCoreApplication::translate("admin_form", "\320\237\320\276\320\270\321\201\320\272...", nullptr));
        label_first_parameter->setText(QCoreApplication::translate("admin_form", "\320\233\320\276\320\263\320\270\320\275 \321\201\320\273\321\203\320\266\320\261\321\213:   ", nullptr));
        lineEdit_first_parameter->setText(QCoreApplication::translate("admin_form", "SomeServiceName", nullptr));
        pushButton_first_parameter->setText(QCoreApplication::translate("admin_form", "\320\241\320\272\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214 ", nullptr));
        label_second_parameter->setText(QCoreApplication::translate("admin_form", "\320\237\320\260\321\200\320\276\320\273\321\214:   ", nullptr));
        lineEdit_second_parameter->setText(QCoreApplication::translate("admin_form", "O324#2svSw2M2?!", nullptr));
        pushButton_second_parameter->setText(QCoreApplication::translate("admin_form", "\320\241\320\272\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214 ", nullptr));
        pushButton_user_info->setText(QCoreApplication::translate("admin_form", "admin", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("admin_form", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("admin_form", "\320\237\320\276\320\267\320\270\321\206\320\270\320\270", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("admin_form", "\320\243\321\200\320\276\320\262\320\275\320\270 \320\264\320\276\321\201\321\202\321\203\320\277\320\260", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("admin_form", "\320\241\320\273\321\203\320\266\320\261\321\213", nullptr));

        pushButton->setText(QCoreApplication::translate("admin_form", "PushButton", nullptr));
        label_program_name->setText(QCoreApplication::translate("admin_form", "encryptiz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_form: public Ui_admin_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_FORM_H
