QT += core
QT +=gui widgets
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

FONT_DIR = $$PWD/fonts

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cpp/aboutuserform.cpp \
    cpp/authform.cpp \
    cpp/bigprimegenerator.cpp \
    cpp/change_pass_form.cpp \
    cpp/main.cpp \
    cpp/mainwindow.cpp \
    cpp/rsa.cpp \
    cpp/singletonClient.cpp

HEADERS += \
    h/aboutuserform.h \
    h/authform.h \
    h/bigprimegenerator.h \
    h/change_pass_form.h \
    h/mainwindow.h \
    h/rsa.h \
    h/singletonClient.h

FORMS += \
    ui/aboutuserform.ui \
    ui/authform.ui \
    ui/change_pass_form.ui \
    ui/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Dockerfile \
    fonts/GOTHIC.TTF
