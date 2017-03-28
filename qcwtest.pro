#-------------------------------------------------
#
# Project created by QtCreator 2016-10-17T12:02:34
#
#-------------------------------------------------

QT       += core gui
QT       += printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qcwtest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
        qcw_meter.cpp \
    qcustomplot.cpp \
    test.cpp

HEADERS  += mainwindow.h \
          qcw_meter.h \
    qcustomplot.h \
    test.h

FORMS    += mainwindow.ui

#DISTFILES += \
#    qcwtest.pro.user
