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
    Mode.h \
    random.hpp

SOURCES += \
    Deck.cpp \
    Player.cpp \
    Tile.cpp \
    Board.cpp
