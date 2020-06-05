QT       += core gui
QT       += multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

TARGET = TowerDefence

TEMPLATE = app


SOURCES += \
    main.cpp \
    mainwindow.cpp \
    plist.cpp \
    tower.cpp \
    towerposition.cpp
HEADERS += \
    mainwindow.h \
    plist.h \
    tower.h \
    towerposition.h
FORMS += \
    mainwindow.ui

RESOURCES += \
    resource.qrc

