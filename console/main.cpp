#include <iostream>
#include "Tile.h"
#include "../core/Board.h"
#include <windows.h>
using namespace std;

void Color(short couleurDuTexte,short couleurDeFond){
    short nb = 16;
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*nb+couleurDuTexte);
}

void printTile(Tile t){
    cout << "Forme : ";
    if(t.getShape() == Shape::T)
            cout << "T" << endl;
    else if(t.getShape() == Shape::L)
            cout << "L" << endl;
    else if(t.getShape() == Shape::I)
            cout << "I" << endl;

    cout << "Orientation : ";
    for(unsigned i = 0; i<4; i++)
        cout << t.getOrientation().at(i) << " ";
    cout << endl;
    cout << "Goal : " << t.getGoal() << endl;
    cout << endl;
}

void printI_TOP(Tile t){
    switch (t.getOrientation().at(0)) {
        case true :
        cout << "   ";
        Color(0, 15);
        cout << "   ";
        Color(15, 0);
        cout << "   ";
        break;
        default :
        cout << "         ";
        break;
    }
    cout << " " ;
}

void printTop(vector<Tile> tiles){
    for(Tile t : tiles){
        switch(t.getShape()){
            case Shape::I :
                printI_TOP(t);
            break;
        }
    }
}

int main()
{
//    cout << "Interface console" << endl;
//    Tile t;
//    vector<Tile> tiles = {Tile(Shape::I, 4), Tile(Shape::L, 0)};
//    t = tiles.at(0);

//    printTile(t);
//    printTile(tiles.at(0));
//    t.rotate(1);
//    printTile(t);
//    printTile(tiles.at(0));

    cout << endl << endl;
    cout << "   ";
    Color(0, 15);
    cout << "    15    " << endl;
    Color(15, 0);
    cout << "   ";
    cout << "    ";
    Color(0, 15);
    cout << "  ";
    Color(15, 0);
    cout << "    " << endl;
    cout << "   ";
    cout << "    ";
    Color(0, 15);
    cout << "  ";
    Color(15, 0);
    cout << "    " << endl;

    vector<Tile> line = {Tile(Shape::I, 4, {1,0,1,0}), Tile(Shape::I, 2, {0,1,0,1})};
    return 0;
}
