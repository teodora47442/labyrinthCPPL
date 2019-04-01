#include "Tile.h"
#include <algorithm>
#include <stdexcept>
#include "random.hpp"

bool Tile::isCompatible(Shape shape, std::vector<bool> orientation){
    bool isCompatible;
    unsigned nbTrue = 0;
    std::vector<unsigned> index;
    for(unsigned i = 0; i<4; i++){
        if(orientation.at(i)){
            nbTrue += 1;
            index.push_back(i);
        }
    }

    switch(shape){
        case NO_SHAPE : isCompatible =  nbTrue == 0;
            break;
        case T : isCompatible = nbTrue == 3;
            break;
        case I : isCompatible = (nbTrue == 2) && (index.at(1) - index.at(0) == 2);
            break;
        case L : isCompatible = (nbTrue == 2) && (index.at(1) - index.at(0) == 1 || index.at(1) - index.at(0) == 3);
            break;
    }
    return isCompatible;
}

void Tile::checkParameters(Shape shape, unsigned goal, std::vector<bool> orientation){
    if(goal > 24 || orientation.size() != 4 || !isCompatible(shape, orientation))
        throw std::invalid_argument("Invalid parameters for Tile");
}

Tile::Tile(Shape shape, unsigned goal, std::vector<bool> orientation) {
    checkParameters(shape, goal, orientation);
    this->shape = shape;
    this->goal = goal;
    this->orientation = orientation;
}

Tile::Tile(Shape shape_, unsigned goal_) : shape(shape_), goal(goal_){
    for (unsigned i = 0; i<4;i++) {
        orientation.push_back(true);
    }

    unsigned random = unsigned(dg::math::random(0,100))%4;

    switch(shape){
        case Shape::T : orientation[random] = false;
        break;
        case Shape::L :
            orientation[random] = false;
            orientation[(random+1)%4] = false;
        break;
        case Shape::I :
            orientation[random] = false;
            orientation[(random+2)%4] = false;
        break;
        default :
            for(unsigned i = 0; i<4; i++)
                orientation[i] = false;
        break;
    }

}

Tile::Tile() : Tile(Shape::NO_SHAPE, 0){}

Shape Tile::getShape(){
    return shape;
}

std::vector<bool> Tile::getOrientation(){
    return orientation;
}

unsigned Tile::getGoal(){
    return goal;
}

void Tile::rotate(int direction){
    if(direction != 0){
        if(direction<0)
            std::rotate(orientation.begin(), orientation.begin()+1, orientation.end());
        else
            std::rotate(orientation.rbegin(), orientation.rbegin()+1, orientation.rend());
    }
}
