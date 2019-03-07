#include "Deck.h"

Deck::Deck (std::vector<unsigned> goalsVect){
    for (unsigned goal : goalsVect) {
        goals.push(goal);
    }
}

unsigned Deck::getGoal (){
    return goals.top();
}

bool Deck::isEmpty (){
    return (goals.size() == 0);
}

void Deck::remove (){
    goals.pop();
}

void Deck::restore(std::vector<unsigned> goalsVect){
    goals.empty();
    for (unsigned goal : goalsVect) {
        goals.push(goal);
    }
}

