#include "Board.h"
#include <stdexcept>

Board::Board(unsigned size) {
    board = std::deque<std::deque<Tile>>(size);
    for (unsigned i = 0; i<size; i++) {
        board[i] = std::deque<Tile>(size);
    }

}

void Board::initialize(){

}

//std::deque<std::deque<Tile*>> Board::getBoard(){
//    return board;
//}

Tile& Board::getLastTile (){
    return lastTile;
}

Position Board::getLastPosition(){
    return lastPosition;
}

void Board::rotateLastTile(int direction){
    lastTile.rotate(direction);
}

void Board::insertTile(Position pos){
    if(!isBorderPosition(pos) || !isValid(pos))
        throw std::invalid_argument("Invalid position to insert tile");
}

bool Board::isBorderPosition(Position pos){
    return ((pos.line == 0 || pos.line == board.size()-1) && pos.column<board.at(0).size())
            || ((pos.column == 0 || pos.column == board.at(0).size()) && pos.line < board.size());
}

bool Board::isValid(Position pos){
    // si la ligne correspond au bord supérieur ou inférieur du tableau on teste la colonne
    if(pos.line == 0 || pos.line == board.size()-1){
        return pos.column % 2 == 1;
    // si la colonne correspond au bord gauche ou droit du tableau on teste la ligne
    } else if (pos.column == 0 || pos.column == board.at(0).size()-1) {
        return pos.line % 2 ==1;
    // sinon la position n'est pas valid
    } else
        return false;
}


