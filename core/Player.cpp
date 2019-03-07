#include "Player.h"

Player::Player (std::string name, unsigned age, Tile departure, std::vector<unsigned> goals):
    name(name), age(age), departureTile(departure), currentPosition(departure), deck(Deck(goals))
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

}


bool Player::isFinished (){
    return (deck.isEmpty() && (&currentPosition == &departureTile));
}

void Player::changeGoal (){
    deck.remove();
}


void Player::replace(Tile&){

}
