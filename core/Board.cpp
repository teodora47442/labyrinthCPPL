#include "Board.h"
#include <stdexcept>
#include <algorithm>
#include "random.hpp"

Board::Board(unsigned size)
{
    board = std::deque<std::deque<Tile>>(size);
    for (unsigned i = 0; i<size; i++) {
        board[i] = std::deque<Tile>(size);
    }
    std::vector<unsigned> goals;
    for (unsigned i = 1; i<=24;i++) {
        goals.push_back(i);
    }
    std::random_shuffle(goals.begin(), goals.end());
    init(goals);
    fill(goals);
    lastPosition = {size, size};
}

void Board::init(std::vector<unsigned int> & goals){
    std::deque<Tile>& line0 = board.at(0);
    // ok
    line0[0] = Tile(1, Shape::L, randomGoal(goals), {0, 1, 1, 0});
    line0[2] = Tile(2, Shape::T, randomGoal(goals), {0, 1, 1, 1});
    line0[4] = Tile(3, Shape::T, randomGoal(goals), {0, 1, 1, 1});
    line0[6] = Tile(4, Shape::L, randomGoal(goals), {0, 0, 1, 1});
    std::deque<Tile>& line2 = board.at(2);
    // ok
    line2[0] = Tile(5, Shape::T, randomGoal(goals), {1, 1, 1, 0});
    line2[2] = Tile(6, Shape::T, randomGoal(goals), {1, 1, 1, 0});
    line2[4] = Tile(7, Shape::T, randomGoal(goals), {0, 1, 1, 1});
    line2[6] = Tile(8, Shape::T, randomGoal(goals), {1, 0, 1, 1});
    std::deque<Tile>& line4 = board.at(4);
    // ok
    line4[0] = Tile(9, Shape::T, randomGoal(goals), {1, 1, 1, 0});
    line4[2] = Tile(10, Shape::T, randomGoal(goals), {1, 1, 0, 1});
    line4[4] = Tile(11, Shape::T, randomGoal(goals), {1, 0, 1, 1});
    line4[6] = Tile(12, Shape::T, randomGoal(goals), {1, 0, 1, 1});
    std::deque<Tile>& line6 = board.at(6);
    //
    line6[0] = Tile(13, Shape::L, randomGoal(goals), {1, 1, 0, 0});
    line6[2] = Tile(14, Shape::T, randomGoal(goals), {1, 1, 0, 1});
    line6[4] = Tile(15, Shape::T, randomGoal(goals), {1, 1, 0, 1});
    line6[6] = Tile(16, Shape::L, randomGoal(goals), {1, 0, 0, 1});
}

void Board::fill(std::vector<unsigned int> & goals){
    std::vector<Tile> tiles;
    std::deque<Tile> line;
    unsigned id = 17;
    for(unsigned i = 1; i<=6; i++, id++)
        tiles.push_back(Tile(id, Shape::T, randomGoal(goals)));
    for(unsigned i = 1; i<=16; i++, id++)
        tiles.push_back(Tile(id, Shape::L, randomGoal(goals)));
    for(unsigned i = 1; i<=12; i++, id++)
        tiles.push_back(Tile(id, Shape::I, 0));

    std::random_shuffle(tiles.begin(), tiles.end());

    for(unsigned i = 0; i < board.size(); i++){
        fillLine(board.at(i), tiles);
    }
    lastTile = tiles.at(0);
}

void Board::fillLine(std::deque<Tile>& line, std::vector<Tile>& tiles){
    for(unsigned i = 0; i<line.size(); i++){
        if(line.at(i).getShape() == Shape::NO_SHAPE){
            line[i] = tiles.at(tiles.size()-1);
            tiles.pop_back();
        }
    }
}

unsigned Board::randomGoal(std::vector<unsigned>& goals){
    if(!goals.empty()){
        unsigned goal = goals.at(goals.size()-1);
        goals.pop_back();
        return goal;
    }
    return 0;
}

std::deque<std::deque<Tile>> Board::getBoard(){
    return board;
}

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
    // essaie d'inserer lastTile dans une ligne
    if(pos.column == 0 || pos.column ==  board.size()-1){
        insertInLine(pos);
    // sinon, cela veut dire qu'on essaie d'insérer dans une colonne
    } else {
        insertInColumn(pos);
    }
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

void Board::insertInLine(Position pos){
    std::deque<Tile>& line = board.at(pos.line);
    Tile newTile = lastTile;
    // si on insere la tuile par la gauche
    if(pos.column == 0){
        line.push_front(newTile);
        lastTile = line.at(line.size()-1);
        line.pop_back();
    } else {
        line.push_back(newTile);
        lastTile = line.at(0);
        line.pop_front();
    }
}

void Board::insertInColumn(Position pos){
    Tile newTile = lastTile;
    Tile newLast;
    // si on essaie d'insérer depuis le haut du plateau
    if(pos.line == 0){
        newLast = board.at(board.size()-1).at(pos.column);
        for(unsigned i = board.at(0).size()-1; i > 0; i--){
            // sur une même colonne, une tuile recoit les valeurs de la tuile au dessus d'elle
            board.at(i).at(pos.column) = board.at(i-1).at(pos.column);
        }
        board.at(0).at(pos.column) = newTile;
        lastTile = newLast;
    // sinon, cela veut dire qu'on insere depuis le bas du plateau
    } else {
        newLast = board.at(0).at(pos.column);
        for(unsigned i = 0; i < board.size()-1; i++){
            // sur une même colonne, une tuile recoit les valeurs de la tuile en dessous d'elle
            board.at(i).at(pos.column) = board.at(i+1).at(pos.column);
        }
        board.at(board.size()-1).at(pos.column) = newTile;
        lastTile = newLast;
    }
}
