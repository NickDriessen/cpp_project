TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        #cube_test.cpp \
        #entity.cpp \
        enemy.cpp \
        gamewidget.cpp \
        main.cpp \
        player.cpp

HEADERS += \
    #cube_test.h \
    enemy.h \
    entity.h \
    gamewidget.h \
    player.h

QT += widgets
