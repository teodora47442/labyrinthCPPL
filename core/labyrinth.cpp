#include "Labyrinth.h"

Board Labyrinth::getBoard(){
    return board;
}

std::vector<Player> Labyrinth::getPlayers(){
    return players;
}

void Labyrinth::addPlayer(Player p){
    players.push_back(p);
}

void Labyrinth::nextPlayer(){
    currentPlayer = (currentPlayer+1)%players.size();
}

void Labyrinth::insertTile(Position pos){
    board.insertTile(pos);
}

//void Labyrinth::move(Player player, Tile tile){

//}

bool Labyrinth::isEndOfGame(){
    bool isOver = false;
    unsigned i = 0;
    while(!isOver && i < players.size()){
        isOver = players.at(i).isFinished();
    }
    return isOver;
}
