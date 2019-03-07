
#ifndef LABYRINTH_H
#define LABYRINTH_H

#include <string>
#include <vector>

#include "Player.h"
#include "Board.h"
#include "Shape.h"
#include "mode.h"
#include "../console/Observable.h"


/**
  * \class Labyrinth
  *
  * \brief Main class of the game.
  * Labyrinth is constitued by a board filled of tiles that can have goals or not.
  * The players need to reach the goals matching to their goal from the deck.
  * There are 2 possible modes for the game : Kids mode and Normal mode.
  *
  */

class Labyrinth : public Observable
{

private:

    /**
     * \brief Game mode : Kids or normal. According to the mode, the
     * victory condition is different.
     */
    Mode mode;

    /**
     * \brief The support of the Labyrinth game.
     */
    Board& board;

    /**
     * \brief List of the players playing Labyrinth.
     */
    std::vector<Player> players;

    /**
     * \brief the minimal number of player allowed in the game.
     */
    unsigned const nbMinPlayer = 2;

    /**
     * \brief the maximal number of player allowed in the game.
     */
    unsigned const nbMaxPlayer = 4;

    /**
     * \brief Represents the current player from player's list.
     */
    unsigned currentPlayer;


public:

    /**
     * \brief Constructor of the labyrinth game.
     * Default game mode is Normal.
     *
     * @param side : the width and heigth of the board
     * @param mode : the mode of the game
     */
    Labyrinth (int side, Mode mode = NORMAL);

    /**
     * Gives the board in read only mode
     *
     * @return the value of board
     */
    Board getBoard ();

    /**
     * Gives the list of the players in read only mode
     *
     * @return all the players
     */
    std::vector<Player> getPlayers ();

    /**
     * \brief adds a player in the list of the players.
     *
     * @param the player to add
     */
    void addPlayer(Player);

    /**
     * \brief updates the currentPlayer at the end of a round or at
     * the first round of the game.
     */
    void nextPlayer();

    /**
     * \brief At each turn, the player needs to insert a tile on a mobile row or column.
     *
     * @param pos : position where the player wants to insert the tile
     */
    void insertTile(Position pos);

    /**
     * \brief Searches a path to the tile, between current player tile and destination tile.
     *
     * @param  player : player who wants to make a move.
     * @param  tile : destination tile
     */
    void move(Player player, Tile tile);

    /**
     * \brief Check if it's there is a winner of the game.
     *
     * @return true if it's the end of the game, false otherwise.
     */
    bool isEndOfGame();

    /**
     * \brief Depending on the game mode, the winner is either the player who has first
     * finished all the goals from his deck, or the player who, besides emptying his deck,
     * has returned to his departure tile.
     *
     * @return Player who has cleared his deck and/or returned to his departure tile.
     */
    Player getWinner ();


    /**
     * \brief Restart a round.
     * Move the players back to their departure case.
     * Reinitialise each player's deck.
     * Shuffle tiles of the board.
     */
    void newGame ();

};

#endif // LABYRINTH_H
