TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        #entity.cpp \
        Bullet.cpp \
        enemy.cpp \
        gamewidget.cpp \
        main.cpp \
        player.cpp

HEADERS += \
    Bullet.h \
    enemy.h \
    entity.h \
    gamewidget.h \
    player.h

QT += widgets
