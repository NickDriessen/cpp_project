TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        cube_test.cpp \
        entity.cpp \
        main.cpp

HEADERS += \
    cube_test.h \
    entity.h

QT += widgets
