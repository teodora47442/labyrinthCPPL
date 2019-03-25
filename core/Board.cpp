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
    std::deque<Tile> line = board.at(0);
    // ok
    line[0] = Tile(Shape::L, randomGoal(goals), {0, 1, 1, 0});
    line[2] = Tile(Shape::T, randomGoal(goals), {0, 1, 1, 1});
    line[4] = Tile(Shape::T, randomGoal(goals), {0, 1, 1, 1});
    line[6] = Tile(Shape::L, randomGoal(goals), {0, 0, 1, 1});
    line = board.at(2);
    // ok
    line[0] = Tile(Shape::T, randomGoal(goals), {1, 1, 1, 0});
    line[2] = Tile(Shape::T, randomGoal(goals), {1, 1, 1, 0});
    line[4] = Tile(Shape::T, randomGoal(goals), {0, 1, 1, 1});
    line[6] = Tile(Shape::T, randomGoal(goals), {1, 0, 1, 1});
    line = board.at(4);
    // ok
    line[0] = Tile(Shape::T, randomGoal(goals), {1, 1, 1, 0});
    line[2] = Tile(Shape::T, randomGoal(goals), {1, 1, 0, 1});
    line[4] = Tile(Shape::T, randomGoal(goals), {1, 0, 1, 1});
    line[6] = Tile(Shape::T, randomGoal(goals), {1, 0, 1, 1});
    line = board.at(6);
    //
    line[0] = Tile(Shape::L, randomGoal(goals), {1, 1, 0, 0});
    line[2] = Tile(Shape::T, randomGoal(goals), {1, 1, 0, 1});
    line[4] = Tile(Shape::T, randomGoal(goals), {1, 1, 0, 1});
    line[6] = Tile(Shape::L, randomGoal(goals), {1, 0, 0, 1});
}

void Board::fill(std::vector<unsigned int> & goals){
    std::vector<Tile> tiles;
    std::deque<Tile> line;

    for(unsigned i = 1; i<=6; i++)
        tiles.push_back(Tile(Shape::T, randomGoal(goals)));
    for(unsigned i = 1; i<=16; i++)
        tiles.push_back(Tile(Shape::L, randomGoal(goals)));
    for(unsigned i = 1; i<=12; i++)
        tiles.push_back(Tile(Shape::I, 0));

    std::random_shuffle(tiles.begin(), tiles.end());

    for(unsigned i = 0; i < board.size(); i++){
        line = board.at(i);
        for(unsigned j = 0; j<line.size(); j++){
            if(line[j].getShape() == Shape::NO_SHAPE){
                line[j] = tiles.at(tiles.size()-1);
                tiles.pop_back();
            }
        }
    }
    lastTile = tiles.at(0);
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


