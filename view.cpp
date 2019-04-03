#include "view.h"
#include <string.h>
#include <limits>
#include <algorithm>

View::View() : m_hConsole(GetStdHandle(STD_OUTPUT_HANDLE)){}

void View::startLine(Board board) const
{
    for (unsigned i=0;i < board.getBoard().size();i++) {
        if(i % 2 == 1) {
            std::cout<<" > |";
        } else {
            std::cout<<"   |";
        }
    }
}

void View::border() const {  std::cout<<"|";}

void View::displayTileTop() const { std::cout<<" ** ";}

void View::displayTileDown() const{ std::cout<<" ** ";}

void View::displayTileLeft() const{ std::cout<<"*";}

void View::displayObjectif(const int objectif) const
{
    if(objectif==-1) {
        std::cout<<" ";
    } else {
        std::cout<< objectif;
    }
}

void View::displayTileRight() const { std::cout<<"0"; }

void View::nextLayer() const { std::cout<<std::endl; }

void View::nextLine(const unsigned width) const
{
    std::cout<<std::endl<<"                        ";
    for(unsigned i =0; i<width; i++) {
        std::cout<<"-----";
    }
    std::cout<<"-"<<std::endl;
}
