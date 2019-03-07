#include "Player.h"

Player::Player (std::string name, unsigned age, Tile departure, std::vector<unsigned> goals){
    this->name = name;
    this->age = age;
    this->departureTile = departure;
    this->currentPosition = departure;
    this->deck = goals;
}

std::string Player::getName (){
    return name;
}

unsigned Player::getAge (){
    return age;
}


Tile Player::getCurrentPosition (){
    return currentPosition;

}

Tile Player::getDepartureTile (){
    return departureTile;
}

unsigned Player::getGoal(){
    return deck.getGoal();
}

void Player::moveForward (Tile& destination){

}


bool Player::isFinished (){
    return (deck.isEmpty() && (&currentPosition == &departureTile));
}

void Player::changeGoal (){
    deck.remove();
}


void Player::replace(Tile&){

}
