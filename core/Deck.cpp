#include "Deck.h"

Deck::Deck (std::vector<unsigned> goalsVect){
    for (unsigned goal : goalsVect) {
        goals.push(goal);
    }
}

unsigned Deck::size(){
    return goals.size();
}

unsigned Deck::getGoal (){
    return goals.top();
}

bool Deck::isEmpty (){
    return (goals.empty());
}

void Deck::remove (){
    goals.pop();
}

void Deck::restore(std::vector<unsigned> goalsVect){
    while(!goals.empty())
        goals.pop();

    for (unsigned goal : goalsVect)
        goals.push(goal);
}

