#-------------------------------------------------
#
# Project created by QtCreator 2016-05-25T19:50:20
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DBProj
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    database.cpp \
    showtata.cpp

HEADERS  += login.h \
    database.h \
    showtata.h

FORMS    += login.ui \
    database.ui \
    showtata.ui

CONFIG += mobility
MOBILITY = 

