#-------------------------------------------------
#
# Project created by QtCreator 2017-10-24T18:36:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qf_pc_assistant
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog_config.cpp

HEADERS  += mainwindow.h \
    dialog_config.h

FORMS    += mainwindow.ui \
    dialog_config.ui
LIBS += -lUser32
