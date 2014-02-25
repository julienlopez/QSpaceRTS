QT -= gui widgets

TARGET = QSpaceRTS
TEMPLATE = lib

include (../QSpaceRTS.pri)

SOURCES += \
    galaxy/planetarysystem.cpp \
    galaxy/planet.cpp \
    galaxy/orbit.cpp \
    galaxy/galaxyloader.cpp

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
    galaxy/galaxyloader.hpp \
    galaxy/namespace_galaxy.hpp
