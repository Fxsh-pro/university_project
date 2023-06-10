QT += testlib network sql
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_test_server_functions.cpp \
    ../university_project_server/cpp/SingletonDataBase.cpp \
    ../university_project_server/cpp/functions.cpp \
    ../university_project_server/cpp/md5.cpp \
    ../university_project_server/cpp/mytcpserver.cpp

HEADERS += \
    ../university_project_server/h/SingletonDataBase.h \
    ../university_project_server/h/functions.h \
    ../university_project_server/h/md5.h \
    ../university_project_server/h/mytcpserver.h
