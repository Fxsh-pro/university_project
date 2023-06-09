/********************************************************************************
** Form generated from reading UI file 'aboutuserform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTUSERFORM_H
#define UI_ABOUTUSERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutUserForm
{
public:
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_user;
    QLabel *label_user_val;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_level;
    QLabel *label_level_val;
    QListWidget *listWidget_services;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_change_pass;
    QPushButton *pushButton_exit;

    void setupUi(QWidget *AboutUserForm)
    {
        if (AboutUserForm->objectName().isEmpty())
            AboutUserForm->setObjectName("AboutUserForm");
        AboutUserForm->resize(400, 308);
        AboutUserForm->setStyleSheet(QString::fromUtf8("background-color: rgba(253, 255, 253, 255);\n"
"font-family: Century Gothic;"));
        frame = new QFrame(AboutUserForm);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 401, 311));
        frame->setStyleSheet(QString::fromUtf8("background-color:none;"));
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 244, 236, 180);\n"
"border-radius: 10px;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame_2 = new QFrame(frame_4);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 238, 229, 80);\n"
"border: 2px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName("horizontalLayout");
        label_user = new QLabel(frame_2);
        label_user->setObjectName("label_user");
        label_user->setMinimumSize(QSize(150, 0));
        label_user->setMaximumSize(QSize(150, 16777215));
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        font.setPointSize(12);
        label_user->setFont(font);
        label_user->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 238, 229, 80);\n"
"border: none"));
        label_user->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_user);

        label_user_val = new QLabel(frame_2);
        label_user_val->setObjectName("label_user_val");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        font1.setPointSize(12);
        font1.setBold(true);
        label_user_val->setFont(font1);
        label_user_val->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 238, 229, 80);\n"
"border: none"));
        label_user_val->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_user_val);


        verticalLayout_2->addWidget(frame_2);

        frame_3 = new QFrame(frame_4);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(100, 0));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 238, 229, 80);\n"
"border: 2px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_level = new QLabel(frame_3);
        label_level->setObjectName("label_level");
        label_level->setMinimumSize(QSize(150, 0));
        label_level->setMaximumSize(QSize(150, 16777215));
        label_level->setFont(font);
        label_level->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 238, 229, 80);\n"
"border: none"));
        label_level->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_level);

        label_level_val = new QLabel(frame_3);
        label_level_val->setObjectName("label_level_val");
        label_level_val->setFont(font1);
        label_level_val->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 238, 229, 80);\n"
"border: none"));

        horizontalLayout_2->addWidget(label_level_val);


        verticalLayout_2->addWidget(frame_3);

        listWidget_services = new QListWidget(frame_4);
        listWidget_services->setObjectName("listWidget_services");
        listWidget_services->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 3px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));

        verticalLayout_2->addWidget(listWidget_services);


        verticalLayout->addWidget(frame_4);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName("frame_5");
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 244, 236, 180);\n"
"border-radius: 10px;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_change_pass = new QPushButton(frame_5);
        pushButton_change_pass->setObjectName("pushButton_change_pass");
        pushButton_change_pass->setMinimumSize(QSize(0, 30));
        pushButton_change_pass->setFont(font);
        pushButton_change_pass->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_3->addWidget(pushButton_change_pass);

        pushButton_exit = new QPushButton(frame_5);
        pushButton_exit->setObjectName("pushButton_exit");
        pushButton_exit->setMinimumSize(QSize(0, 30));
        pushButton_exit->setFont(font);
        pushButton_exit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_3->addWidget(pushButton_exit);


        verticalLayout->addWidget(frame_5);


        retranslateUi(AboutUserForm);

        QMetaObject::connectSlotsByName(AboutUserForm);
    } // setupUi

    void retranslateUi(QWidget *AboutUserForm)
    {
        AboutUserForm->setWindowTitle(QCoreApplication::translate("AboutUserForm", "Form", nullptr));
        label_user->setText(QCoreApplication::translate("AboutUserForm", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214:", nullptr));
        label_user_val->setText(QCoreApplication::translate("AboutUserForm", "username", nullptr));
        label_level->setText(QCoreApplication::translate("AboutUserForm", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 \320\264\320\276\321\201\321\202\321\203\320\277\320\260:", nullptr));
        label_level_val->setText(QCoreApplication::translate("AboutUserForm", "accessLevel", nullptr));
        pushButton_change_pass->setText(QCoreApplication::translate("AboutUserForm", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("AboutUserForm", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutUserForm: public Ui_AboutUserForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTUSERFORM_H
