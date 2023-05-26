/********************************************************************************
** Form generated from reading UI file 'authform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHFORM_H
#define UI_AUTHFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AuthForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *Programm_name;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_login;
    QLineEdit *lineEdit_login;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_pass;
    QLineEdit *lineEdit_pass;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_mail;
    QLineEdit *lineEdit_mail;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_reg;
    QPushButton *pushButton_auth;
    QPushButton *pushButton_change;

    void setupUi(QDialog *AuthForm)
    {
        if (AuthForm->objectName().isEmpty())
            AuthForm->setObjectName("AuthForm");
        AuthForm->resize(551, 321);
        AuthForm->setStyleSheet(QString::fromUtf8("background-color: rgba(253, 255, 253, 255);\n"
"font-family: Century Gothic;"));
        verticalLayout_2 = new QVBoxLayout(AuthForm);
        verticalLayout_2->setObjectName("verticalLayout_2");
        Programm_name = new QLabel(AuthForm);
        Programm_name->setObjectName("Programm_name");
        Programm_name->setMinimumSize(QSize(0, 40));
        Programm_name->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        Programm_name->setFont(font);
        Programm_name->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 244, 236, 180);\n"
"border-radius: 10px;"));
        Programm_name->setTextFormat(Qt::RichText);
        Programm_name->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Programm_name);

        frame_5 = new QFrame(AuthForm);
        frame_5->setObjectName("frame_5");
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 244, 236, 180);\n"
"border-radius: 10px;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_5);
        verticalLayout->setObjectName("verticalLayout");
        frame_2 = new QFrame(frame_5);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_login = new QLabel(frame_2);
        label_login->setObjectName("label_login");
        label_login->setMinimumSize(QSize(70, 0));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        font1.setPointSize(12);
        label_login->setFont(font1);
        label_login->setStyleSheet(QString::fromUtf8("background-color:none;"));

        horizontalLayout_3->addWidget(label_login);

        lineEdit_login = new QLineEdit(frame_2);
        lineEdit_login->setObjectName("lineEdit_login");
        lineEdit_login->setMinimumSize(QSize(0, 30));
        lineEdit_login->setFont(font1);
        lineEdit_login->setStyleSheet(QString::fromUtf8("background-color:none;"));

        horizontalLayout_3->addWidget(lineEdit_login);


        verticalLayout->addWidget(frame_2);

        frame_3 = new QFrame(frame_5);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_pass = new QLabel(frame_3);
        label_pass->setObjectName("label_pass");
        label_pass->setMinimumSize(QSize(70, 0));
        label_pass->setFont(font1);
        label_pass->setStyleSheet(QString::fromUtf8("background-color:none;"));

        horizontalLayout_2->addWidget(label_pass);

        lineEdit_pass = new QLineEdit(frame_3);
        lineEdit_pass->setObjectName("lineEdit_pass");
        lineEdit_pass->setMinimumSize(QSize(0, 30));
        lineEdit_pass->setFont(font1);
        lineEdit_pass->setStyleSheet(QString::fromUtf8("background-color:none;"));
        lineEdit_pass->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_pass);


        verticalLayout->addWidget(frame_3);

        frame = new QFrame(frame_5);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_mail = new QLabel(frame);
        label_mail->setObjectName("label_mail");
        label_mail->setMinimumSize(QSize(70, 0));
        label_mail->setFont(font1);
        label_mail->setStyleSheet(QString::fromUtf8("background-color:none;"));

        horizontalLayout_4->addWidget(label_mail);

        lineEdit_mail = new QLineEdit(frame);
        lineEdit_mail->setObjectName("lineEdit_mail");
        lineEdit_mail->setMinimumSize(QSize(0, 30));
        lineEdit_mail->setFont(font1);
        lineEdit_mail->setStyleSheet(QString::fromUtf8("background-color:none;"));

        horizontalLayout_4->addWidget(lineEdit_mail);


        verticalLayout->addWidget(frame);


        verticalLayout_2->addWidget(frame_5);

        frame_4 = new QFrame(AuthForm);
        frame_4->setObjectName("frame_4");
        frame_4->setMaximumSize(QSize(16777215, 50));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 244, 236, 180);\n"
"border-radius: 10px;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_4);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_reg = new QPushButton(frame_4);
        pushButton_reg->setObjectName("pushButton_reg");
        pushButton_reg->setMinimumSize(QSize(200, 30));
        pushButton_reg->setFont(font1);
        pushButton_reg->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(pushButton_reg);

        pushButton_auth = new QPushButton(frame_4);
        pushButton_auth->setObjectName("pushButton_auth");
        pushButton_auth->setMinimumSize(QSize(0, 30));
        pushButton_auth->setFont(font1);
        pushButton_auth->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(pushButton_auth);

        pushButton_change = new QPushButton(frame_4);
        pushButton_change->setObjectName("pushButton_change");
        pushButton_change->setMinimumSize(QSize(0, 30));
        pushButton_change->setFont(font1);
        pushButton_change->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(pushButton_change);


        verticalLayout_2->addWidget(frame_4);


        retranslateUi(AuthForm);

        QMetaObject::connectSlotsByName(AuthForm);
    } // setupUi

    void retranslateUi(QDialog *AuthForm)
    {
        AuthForm->setWindowTitle(QCoreApplication::translate("AuthForm", "Authorization", nullptr));
        Programm_name->setText(QCoreApplication::translate("AuthForm", "encryptiz", nullptr));
        label_login->setText(QCoreApplication::translate("AuthForm", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_pass->setText(QCoreApplication::translate("AuthForm", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        lineEdit_pass->setText(QString());
        label_mail->setText(QCoreApplication::translate("AuthForm", "E-mail", nullptr));
        pushButton_reg->setText(QCoreApplication::translate("AuthForm", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        pushButton_auth->setText(QCoreApplication::translate("AuthForm", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        pushButton_change->setText(QCoreApplication::translate("AuthForm", "change", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthForm: public Ui_AuthForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHFORM_H
