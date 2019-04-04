include(../defaults.pri)

TEMPLATE = app
CONFIG += console

LIBS += -L../lib -llibcore

SOURCES += main.cpp \
    brol.cpp \
    TileTest.cpp \
    DeckTest.cpp \
    PlayerTest.cpp

HEADERS += \
    catch.hpp \
