
#ifndef BOARD_H
#define BOARD_H

#include <string>
#include <deque>
#include "Position.h"
#include "Tile.h"

/**
 * \class Board
 * \brief The Board class is a representation of the game support. The board
 *        contains Tiles. Some tiles are fixed and the other tiles can be
 *        slide during the game.
 */

class Board
{

private:

    /*!
     * \brief board represents the support of the game Labyrinth. It contains tiles.
     */
    std::deque<std::deque<Tile>> board;

    /*!
     * \brief lastTile is the tile out of the board.
     *        During the game, the last tile can be set in the board and the tile exiting
     *        from the board becomes the new last tile
     */
    Tile lastTile;

    /*!
     * \brief lastPosition is the position of the last tile before exiting from the board.
     *        The last tile can't be inserted to the position where it comes from.
     */
    Position lastPosition;

    void init(std::vector<unsigned>&);

    void fill(std::vector<unsigned>&);

    void fillLine(std::deque<Tile>&, std::vector<Tile>&);

    unsigned randomGoal(std::vector<unsigned>&);

    bool isBorderPosition(Position pos);

    bool isValid(Position pos);

    void insertInLine(Position pos);

    void insertInColumn(Position pos);

public:
    /**
      * \brief The constructor of the board. This board is a square and contains size * size
      *        cases . Initially, the board game "Labyrinth" contains 7*7 cases.
      *        We specify the last tile of the game
      *
      * @param  lastTile : the last Tile of the game
      * @param  size : the width and the height of the board.
      */
    Board (unsigned size = 7);

    /**
      * \brief Gives the access to the bord in read only mode.
      *
      * @return the board of the game.
      */
    std::deque<std::deque<Tile>> getBoard();

    /**
      * \brief Gives the access to the last tile in read only mode.
      *
      * @return The last tile sitting out of the board.
      */
    Tile& getLastTile ();

    /**
      * \brief Gives the last position of the the last tile before exiting from the board.
      *
      * @return the last position of the last tile.
      */
    Position getLastPosition();

    /**
      * \brief Inserts the last tile in the board to the given position.
      *        The last tile can only be inserted to the edge of the board.
      *
      *        Then this position must be a position representing one of
      *        the edge of the board.
      *
      *        The index of the line or the column must be 0 or the last index of the
      *        board (6 in the Labyrinth game).
      *        The other index must be odd.
      *        ex : position [0,1], [6, 1], ... we can insert the last tile
      *        position [2,3], [0,1], ... are invalid position
      *
      * @param pos : the position where the last tile must be insert.
      */
    void insertTile (Position pos);


    /**
      * \brief Before inserting the last tile in the board, this one can be rotated.
      *        The last tile can be rotated to the right or to the left.
      *
      * @param direction : an integer representing the direction of the rotation.
      *        If direction <= 0, then the last tile will be rotated to the left.
      *        If direction > 0, then the last tile will be rotated to the right.
      */
    void rotateLastTile(int direction);
};

#endif // BOARD_H
