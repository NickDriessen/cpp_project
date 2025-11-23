TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        #cube_test.cpp \
        entity.cpp \
        gamewidget.cpp \
        main.cpp \
        player.cpp

HEADERS += \
    #cube_test.h \
    entity.h \
    gamewidget.h \
    player.h

QT += widgets
