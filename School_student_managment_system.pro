#-------------------------------------------------
#
# Project created by QtCreator 2018-03-08T17:42:02
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = School_student_managment_system
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
    listwindow.cpp \
    createaccount.cpp \
    forgotpassword.cpp \
    studentedit.cpp \
    addstudent.cpp \
    removestudent.cpp

HEADERS += \
        mainwindow.h \
    listwindow.h \
    createaccount.h \
    forgotpassword.h \
    studentedit.h \
    addstudent.h \
    removestudent.h

FORMS += \
        mainwindow.ui \
    listwindow.ui \
    listwindow.ui \
    createaccount.ui \
    forgotpassword.ui \
    studentedit.ui \
    addstudent.ui \
    removestudent.ui

RESOURCES += \
    icons.qrc
