#-------------------------------------------------
#
# Project created by QtCreator 2014-02-20T09:20:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QSpaceRTS
TEMPLATE = app

include (../QSpaceRTS.pri)

LIBS += -L$$QSPACERTS_BIN
LIBS += -lQSpaceRTS

INCLUDEPATH += $$QSPACERTS_LIB

OBJECTS_DIR = $$QSPACERTS_OBJ_GUI
MOC_DIR= $$QSPACERTS_MOC_GUI

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.hpp
