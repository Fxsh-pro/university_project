/********************************************************************************
** Form generated from reading UI file 'change_pass_form.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_PASS_FORM_H
#define UI_CHANGE_PASS_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_change_pass_form
{
public:
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *change_pass_label;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *change_pass_lineEdit;
    QPushButton *pushButton_set_visible_pass;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *change_pass_2_label;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *change_pass_2_lineEdit;
    QPushButton *pushButton_set_visible_pass_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *confirm_pushbutton;
    QPushButton *cancel_pushbutton;

    void setupUi(QWidget *change_pass_form)
    {
        if (change_pass_form->objectName().isEmpty())
            change_pass_form->setObjectName("change_pass_form");
        change_pass_form->resize(507, 279);
        change_pass_form->setStyleSheet(QString::fromUtf8("background-color: rgba(253, 255, 253, 255);\n"
"font-family: Bahnschrift;"));
        horizontalLayout_2 = new QHBoxLayout(change_pass_form);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        frame_4 = new QFrame(change_pass_form);
        frame_4->setObjectName("frame_4");
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 244, 236, 180);\n"
"border-radius: 10px;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame_3 = new QFrame(frame_4);
        frame_3->setObjectName("frame_3");
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 238, 229, 80);\n"
"border: 2px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        change_pass_label = new QLabel(frame_3);
        change_pass_label->setObjectName("change_pass_label");
        change_pass_label->setMinimumSize(QSize(30, 0));
        change_pass_label->setMaximumSize(QSize(190, 16777215));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift")});
        font.setPointSize(12);
        change_pass_label->setFont(font);
        change_pass_label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 160);\n"
"border: 2px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        change_pass_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_3->addWidget(change_pass_label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        change_pass_lineEdit = new QLineEdit(frame_3);
        change_pass_lineEdit->setObjectName("change_pass_lineEdit");
        change_pass_lineEdit->setMinimumSize(QSize(0, 30));
        change_pass_lineEdit->setFont(font);
        change_pass_lineEdit->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 3px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));

        horizontalLayout_4->addWidget(change_pass_lineEdit);

        pushButton_set_visible_pass = new QPushButton(frame_3);
        pushButton_set_visible_pass->setObjectName("pushButton_set_visible_pass");
        pushButton_set_visible_pass->setMinimumSize(QSize(0, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift")});
        font1.setPointSize(14);
        pushButton_set_visible_pass->setFont(font1);
        pushButton_set_visible_pass->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_4->addWidget(pushButton_set_visible_pass);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(frame_3);

        frame = new QFrame(frame_4);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 238, 229, 80);\n"
"border: 2px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        change_pass_2_label = new QLabel(frame);
        change_pass_2_label->setObjectName("change_pass_2_label");
        change_pass_2_label->setMinimumSize(QSize(0, 30));
        change_pass_2_label->setMaximumSize(QSize(255, 16777215));
        change_pass_2_label->setFont(font);
        change_pass_2_label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 160);\n"
"border: 2px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        change_pass_2_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(change_pass_2_label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        change_pass_2_lineEdit = new QLineEdit(frame);
        change_pass_2_lineEdit->setObjectName("change_pass_2_lineEdit");
        change_pass_2_lineEdit->setMinimumSize(QSize(0, 30));
        change_pass_2_lineEdit->setFont(font);
        change_pass_2_lineEdit->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 3px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));

        horizontalLayout_3->addWidget(change_pass_2_lineEdit);

        pushButton_set_visible_pass_2 = new QPushButton(frame);
        pushButton_set_visible_pass_2->setObjectName("pushButton_set_visible_pass_2");
        pushButton_set_visible_pass_2->setMinimumSize(QSize(0, 30));
        pushButton_set_visible_pass_2->setFont(font1);
        pushButton_set_visible_pass_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_3->addWidget(pushButton_set_visible_pass_2);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(frame);

        frame_2 = new QFrame(frame_4);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgba(254, 238, 229, 80);\n"
"border: 2px solid rgba(236, 218, 204, 90);\n"
"border-radius: 10px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName("horizontalLayout");
        confirm_pushbutton = new QPushButton(frame_2);
        confirm_pushbutton->setObjectName("confirm_pushbutton");
        confirm_pushbutton->setMinimumSize(QSize(0, 30));
        confirm_pushbutton->setFont(font);
        confirm_pushbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(confirm_pushbutton);

        cancel_pushbutton = new QPushButton(frame_2);
        cancel_pushbutton->setObjectName("cancel_pushbutton");
        cancel_pushbutton->setMinimumSize(QSize(0, 30));
        cancel_pushbutton->setFont(font);
        cancel_pushbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(cancel_pushbutton);


        verticalLayout_2->addWidget(frame_2);


        horizontalLayout_2->addWidget(frame_4);


        retranslateUi(change_pass_form);

        QMetaObject::connectSlotsByName(change_pass_form);
    } // setupUi

    void retranslateUi(QWidget *change_pass_form)
    {
        change_pass_form->setWindowTitle(QCoreApplication::translate("change_pass_form", "Form", nullptr));
        change_pass_label->setText(QCoreApplication::translate("change_pass_form", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\262\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
        pushButton_set_visible_pass->setText(QCoreApplication::translate("change_pass_form", "\360\237\221\201\357\270\217", nullptr));
        change_pass_2_label->setText(QCoreApplication::translate("change_pass_form", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\262\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214 \320\265\321\211\320\265 \321\200\320\260\320\267:", nullptr));
        pushButton_set_visible_pass_2->setText(QCoreApplication::translate("change_pass_form", "\360\237\221\201\357\270\217", nullptr));
        confirm_pushbutton->setText(QCoreApplication::translate("change_pass_form", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        cancel_pushbutton->setText(QCoreApplication::translate("change_pass_form", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_pass_form: public Ui_change_pass_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_PASS_FORM_H
