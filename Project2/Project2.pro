QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Bullets.cpp \
    Enemy.cpp \
    Games.cpp \
    Money.cpp \
    Player.cpp \
    Score.cpp \
    Tower.cpp \
    Tower2.cpp \
    choose_enemy.cpp \
    level.cpp \
    lose.cpp \
    main.cpp \
    mainwindow.cpp \
    map_import.cpp \
    pokemon.cpp \
    tutorial.cpp \
    win.cpp

HEADERS += \
    Bullets.h \
    Enemy.h \
    Games.h \
    Money.h \
    Player.h \
    Score.h \
    Tower.h \
    Tower2.h \
    choose_enemy.h \
    level.h \
    lose.h \
    mainwindow.h \
    map_import.h \
    pokemon.h \
    tutorial.h \
    win.h

FORMS += \
    choose_enemy.ui \
    level.ui \
    lose.ui \
    mainwindow.ui \
    map_import.ui \
    tutorial.ui \
    win.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
