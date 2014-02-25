QT -= gui widgets

TARGET = tests
TEMPLATE = app

include (../QSpaceRTS.pri)
include (../gtest.pri)

LIBS += -L$$QSPACERTS_BIN
LIBS += -lQSpaceRTS

INCLUDEPATH += $$QSPACERTS_LIB

SOURCES += main.cpp \
    test_planetarysystem.cpp \
    test_planet.cpp
