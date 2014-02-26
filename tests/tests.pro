QT -= gui widgets

TARGET = tests
TEMPLATE = app

include (../QSpaceRTS.pri)
include (../gtest.pri)

LIBS += -L$$QSPACERTS_BIN
LIBS += -lQSpaceRTS

INCLUDEPATH += $$QSPACERTS_LIB

OBJECTS_DIR = $$QSPACERTS_OBJ_TESTS
MOC_DIR= $$QSPACERTS_MOC_TESTS

SOURCES += main.cpp \
    galaxy/test_planetarysystem.cpp \
    galaxy/test_planet.cpp \
    galaxy/test_jsonloader.cpp \
    galaxy/test_galaxy.cpp
