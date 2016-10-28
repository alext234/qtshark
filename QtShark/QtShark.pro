#-------------------------------------------------
#
# Project created by QtCreator 2016-10-24T15:23:34
#
#-------------------------------------------------

QT       += core gui

QMAKE_CXXFLAGS += -std=c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


TARGET = QtShark
TEMPLATE = app

INCLUDEPATH += $$PWD/../json11

DEPENDPATH +=$$PWD/json11/../build

SOURCES += main.cpp\
        mainwindow.cpp \
    server_ops.cpp

HEADERS  += mainwindow.h \
    ipaddressstring.h \
    server_conn.h \
    server_ops.h

FORMS    += mainwindow.ui
