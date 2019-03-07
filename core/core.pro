include(../defaults.pri)

TEMPLATE = lib
TARGET = libcore
DESTDIR = ../lib

HEADERS += \
    array.hpp \
    Board.h \
    Deck.h \
    Labyrinth.h \
    Player.h \
    Position.h \
    Shape.h \
    Tile.h \
    Mode.h

SOURCES += \
    Deck.cpp \
    Player.cpp
