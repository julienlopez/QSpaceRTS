QT -= gui widgets

TARGET = QSpaceRTS
TEMPLATE = lib

include (../QSpaceRTS.pri)

OBJECTS_DIR = $$QSPACERTS_OBJ_LIB
MOC_DIR= $$QSPACERTS_MOC_LIB

SOURCES += \
    galaxy/planetarysystem.cpp \
    galaxy/planet.cpp \
    galaxy/orbit.cpp \
    galaxy/jsonloader.cpp

HEADERS  += \
    utils/namespace_utils.hpp \
    utils/pimpl.hpp \
    utils/noncopiable.hpp \
    utils/noninstantiable.hpp \
    utils/make_unique.hpp \
    galaxy/planetarysystem.hpp \
    utils/point.hpp \
    galaxy/planet.hpp \
    galaxy/orbit.hpp \
    galaxy/namespace_galaxy.hpp \
    galaxy/jsonloader.hpp
