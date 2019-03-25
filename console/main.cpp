#include <iostream>
#include "Tile.h"
#include "../core/Board.h"
using namespace std;

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

int main()
{
    cout << "Interface console" << endl;
    Tile t;
    vector<Tile> tiles = {Tile(Shape::I, 4), Tile(Shape::L, 0)};
    t = tiles.at(0);

    printTile(t);
    printTile(tiles.at(0));
    t.rotate(1);
    printTile(t);
    printTile(tiles.at(0));
    return 0;
}
