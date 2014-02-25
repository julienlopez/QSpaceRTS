QT -= gui widgets

TARGET = QSpaceRTS
TEMPLATE = lib

include (../QSpaceRTS.pri)

SOURCES += \
    planetarysystem.cpp \
    planet.cpp \
    orbit.cpp \
    planetloader.cpp

HEADERS  += \
    utils/namespace_utils.hpp \
    utils/pimpl.hpp \
    utils/noncopiable.hpp \
    utils/noninstantiable.hpp \
    utils/make_unique.hpp \
    planetarysystem.hpp \
    utils/point.hpp \
    planet.hpp \
    orbit.hpp \
    planetloader.hpp
