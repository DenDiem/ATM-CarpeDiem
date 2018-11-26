#-------------------------------------------------
#
# Project created by QtCreator 2018-11-25T10:58:41
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CarpeDiem
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    operationwindow.cpp \
    useratm.cpp \
    carpediematm.cpp \
    amount.cpp \
    pinwindow.cpp \
    datebase.cpp \
    getcash.cpp \
    history.cpp \
    sendcash.cpp \
    result.cpp

HEADERS += \
        mainwindow.h \
    operationwindow.h \
    useratm.h \
    carpediematm.h \
    amount.h \
    pinwindow.h \
    datebase.h \
    getcash.h \
    history.h \
    sendcash.h \
    result.h

FORMS += \
        mainwindow.ui \
    operationwindow.ui \
    pinwindow.ui \
    getcash.ui \
    history.ui \
    sendcash.ui \
    result.ui

win32: LIBS += -L$$PWD/'../../../../../Program Files/MySQL/MySQL Connector C 6.1/lib/' -llibmysql

INCLUDEPATH += $$PWD/'../../../../../Program Files/MySQL/MySQL Connector C 6.1/include'
DEPENDPATH += $$PWD/'../../../../../Program Files/MySQL/MySQL Connector C 6.1/include'

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/'../../../../../Program Files/MySQL/MySQL Connector C 6.1/lib/vs14/' -lmysqlclient
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/'../../../../../Program Files/MySQL/MySQL Connector C 6.1/lib/vs14/' -lmysqlclientd
else:unix: LIBS += -L$$PWD/'../../../../../Program Files/MySQL/MySQL Connector C 6.1/lib/vs14/' -lmysqlclient

INCLUDEPATH += $$PWD/'../../../../../Program Files/MySQL/MySQL Connector C 6.1/lib/vs14'
DEPENDPATH += $$PWD/'../../../../../Program Files/MySQL/MySQL Connector C 6.1/lib/vs14'

RESOURCES += \
    src.qrc
