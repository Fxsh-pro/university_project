QT += core
QT +=gui widgets
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aboutuserform.cpp \
    authform.cpp \
    change_pass_form.cpp \
    main.cpp \
    mainwindow.cpp \
    singletonClient.cpp

HEADERS += \
    aboutuserform.h \
    authform.h \
    change_pass_form.h \
    mainwindow.h \
    singletonClient.h

FORMS += \
    aboutuserform.ui \
    authform.ui \
    change_pass_form.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
