#include "Player.h"

Player::Player (std::string _name, unsigned _age, Tile& departure, std::vector<unsigned> goals):
    name(_name), age(_age), departureTile(departure), currentPosition(departure), deck(Deck(goals))
{}

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
    currentPosition = destination;
}


bool Player::isFinished (){
    return (deck.isEmpty() && (&currentPosition == &departureTile));
}

void Player::changeGoal (){
    deck.remove();
}


void Player::replace(Tile& tile){

}
