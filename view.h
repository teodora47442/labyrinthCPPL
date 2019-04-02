#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <windows.h>
#include <../core/Board.h>

class View
{
    const HANDLE  m_hConsole;
public:
    View();

    void startLine(Board board) const;
    void border() const;
    void displayTileTop() const;
    void displayTileDown() const;
    void displayTileLeft() const;
    void displayObjectif(const int objectif) const;
    void displayTileRight() const;
    void nextLayer() const;
    void nextLine(const unsigned width) const;
};

#endif // VIEW_H
