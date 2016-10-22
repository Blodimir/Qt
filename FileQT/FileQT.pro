#-------------------------------------------------
#
# Project created by QtCreator 2016-05-31T14:29:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FileQT
TEMPLATE = app


SOURCES += main.cpp\
        filetable.cpp \
    add.cpp \
    nclass.cpp \
    tbm.cpp

HEADERS  += filetable.h \
    add.h \
    nclass.h \
    tbm.h

FORMS    += filetable.ui \
    add.ui
