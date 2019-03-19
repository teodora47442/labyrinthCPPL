#include "Tile.h"
#include <algorithm>
#include <stdexcept>
#include "random.hpp"

//bool Tile::isCompatible(Shape shape, std::vector<bool> orientation){
//    unsigned nbTrue = 0;
//    std::vector<unsigned> index;
//    for(unsigned i = 0; i<4; i++){
//        if(orientation.at(i)){
//            nbTrue += 1;
//            index.push_back(i);
//        }
//    }

//}

//void Tile::checkParameters(Shape shape, unsigned goal, std::vector<bool> orientation){
//    if(goal > 24 || orientation.size() != 4 || !isCompatible(shape, orientation))
//        throw std::invalid_argument("Invalid parameters for Tile");
//}

// besoin de check les parametres ?
Tile::Tile(Shape shape, unsigned goal, std::vector<bool> orientation) {
//    checkParameters(shape, goal, orientation);
    this->shape = shape;
    this->goal = goal;
    this->orientation = orientation;    // le constructeur de recopie de vector recopie chaque valeur dans le vector receveur
}

Tile::Tile(Shape shape_, unsigned goal_) : shape(shape_), goal(goal_){
    for (unsigned i = 0; i<4;i++) {
        orientation.push_back(true);
    }

    unsigned random = unsigned(dg::math::random(0,100))%4;

    switch(shape){
        case Shape::T_SHAPE : orientation[random] = false;
        break;
        case Shape::L_SHAPE :
            orientation[random] = false;
            orientation[(random+1)%4] = false;
        break;
        case Shape::I_SHAPE :
            orientation[random] = false;
            orientation[(random+2)%4] = false;
        break;
    }

}

Tile::Tile() : Tile(Shape::I_SHAPE, 0){}

Shape Tile::getShape(){
    return shape;
}

// verifier si ce return permet à l'utilisateur de modifier l'attribut
std::vector<bool> Tile::getOrientation(){
    return orientation;
}

unsigned Tile::getGoal(){
    return goal;
}

void Tile::rotate(int direction){
    // si direction vaut 0, alors cela signifie que le joueur ne veut pas tourner la plaque
    if(direction != 0){
        // rotation vers la gauche
        if(direction<0)
            std::rotate(orientation.begin(), orientation.begin()+1, orientation.end());
        // rotation vers la droite
        else
            std::rotate(orientation.rbegin(), orientation.rbegin()+1, orientation.rend());
    }
}
