QT -= gui widgets

TARGET = QSpaceRTS
TEMPLATE = lib

include (../QSpaceRTS.pri)

OBJECTS_DIR = $$QSPACERTS_OBJ_LIB
MOC_DIR= $$QSPACERTS_MOC_LIB

SOURCES += \
    universe/planetarysystem.cpp \
    universe/planet.cpp \
    universe/orbit.cpp \
    universe/jsonloader.cpp \
    universe/galaxy.cpp

HEADERS  += \
    utils/namespace_utils.hpp \
    utils/pimpl.hpp \
    utils/noncopiable.hpp \
    utils/noninstantiable.hpp \
    utils/make_unique.hpp \
    universe/planetarysystem.hpp \
    utils/point.hpp \
    universe/planet.hpp \
    universe/orbit.hpp \
    universe/jsonloader.hpp \
    universe/galaxy.hpp \
    universe/namespace_universe.hpp
