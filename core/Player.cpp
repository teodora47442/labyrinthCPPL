#include "Player.h"
#include <stdexcept>

Player::Player (std::string _name, unsigned _age, Tile& departure, std::vector<unsigned> goals):
    name(_name), age(_age), departureTile(departure), currentPosition(departure), deck(Deck(goals))
{}

//ok
std::string Player::getName (){
    return name;
}
 // ok
unsigned Player::getAge (){
    return age;
}

// ok
Tile Player::getCurrentPosition (){
    return currentPosition;
}

//ok
Tile Player::getDepartureTile (){
    return departureTile;
}

// ok mais utilité ?
unsigned Player::getGoal(){
    return deck.getGoal();
}

// ok
bool Player::isFinished (){
    return deck.isEmpty();
}

// ok
void Player::changeGoal (){
    if(currentPosition.getGoal() != deck.getGoal())
        throw std::invalid_argument("You cannot change goal! The goal is not reached !");
    deck.remove();
}

//ok
void Player::replace(Tile tile){
    currentPosition = tile;
}
