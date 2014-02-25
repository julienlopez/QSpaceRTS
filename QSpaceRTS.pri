QSPACERTS_ROOT = $$PWD

QSPACERTS_BIN = $$QSPACERTS_ROOT/bin

QSPACERTS_LIB = $$QSPACERTS_ROOT/lib

QSPACERTS_OBJ_LIB = $$QSPACERTS_ROOT/obj_lib

QSPACERTS_MOC_LIB = $$QSPACERTS_ROOT/moc_lib

QSPACERTS_OBJ_GUI = $$QSPACERTS_ROOT/obj_gui

QSPACERTS_MOC_GUI = $$QSPACERTS_ROOT/moc_gui

QSPACERTS_OBJ_TESTS = $$QSPACERTS_ROOT/obj_tests

QSPACERTS_MOC_TESTS = $$QSPACERTS_ROOT/moc_tests

DESTDIR = $$QSPACERTS_BIN

CONFIG += c++11

QMAKE_CXXFLAGS += -std=c++11 -Wall -Wextra -pedantic -Wshadow -Wpointer-arith -Wcast-align -Wwrite-strings -Wmissing-declarations \
                    -Wredundant-decls -Wno-long-long -Wuninitialized
