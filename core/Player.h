#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

#include "Tile.h"
#include "Position.h"
#include "Deck.h"

/**
 * \class Player
 *
 * \brief The Player class represents a Player.
 * Each player has a name, an age, a deck, a departure
 * tile and a current position on a tile.
 *
 */


class Player
{

private:
    /**
     * \brief The Name of the player.
     */
    std::string name;

    /**
     * \brief Age of the player.
     */
    unsigned age;

    /**
     * \brief Player's departure tile.
     * At the beginning of the game, each player sits on a default tile.
     * This tile is situated on one of the corners of the board.
     */
    Tile& departureTile;

    /**
     * \brief Player's current tile.
     * During the game, the player sits on a tile.
     * At each round, the player can change his position (tile).
     */
    Tile& currentPosition;

    /**
     * \brief Player's deck of goals.
     * The player can only look at the goal sitting on the top of the deck.
     * The player finished only if his deck is empty
     */
    Deck deck;

public:
    /**
     * \brief Constructs a player with a name, age, a departure tile and goals.
     *
     * @param name : player's name
     * @param age : player's age
     * @param departure : player's departure tile (1, 2, 3 or 4)
     * @param goals : the list of goals in orther to initialize the deck
     */

    Player (std::string name, unsigned age, Tile departure, std::vector<unsigned> goals);

    /**
     * \brief Gives the name of the player
     *
     * @return the name of player
     */
    std::string getName ();

    /**
     * \brief Gives the age of the player
     *
     * @return age of player
     */
    unsigned getAge ();

    /**
     * \brief Gives the current position of the player
     *
     * @return the current position of the player
     */
    Tile getCurrentPosition ();

    /**
     * \brief Gives the departure position of the player
     *
     * @return the departure position of the player
     */
    Tile getDepartureTile ();

    /**
     * \brief Gives the goal that the player must reach
     *
     * @return the current goal
     */
    unsigned getGoal();

    /**
     * \brief This method replaces player's currentPosition by the destination tile.
     * However, it does not verify if the path between his current position and
     * destination tile exists.
     *
     * @param destination : new current tile of the player
     */
    void moveForward (Tile& destination);

    /**
     * \brief Check if player reached all his goals from deck.
     *
     * @return true if the player reached all his goals, false otherwise.
     */
    bool isFinished ();

    /**
     * \brief Check goal from current tile, if goal equals to the player's goal, it removes
     * goal from his deck. Otherwise, it does nothing.
     */
    void changeGoal ();

    /**
     * \brief If player sits on the tile that is out of the board,
     * then the player must be placed on the opposite tile in the row.
     */
    void replace(Tile&);

};

#endif // PLAYER_H
