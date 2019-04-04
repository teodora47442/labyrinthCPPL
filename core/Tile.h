#ifndef TILE_H
#define TILE_H

#include <string>
#include <vector>

#include "Shape.h"
/**
  * \class Tile
  * \brief This class represents a tile from the board game "Labyrinth".
  * A tile is identified by his shape, his orientation and the goal it contains.
  */

class Tile
{

private:

 /**
   * \brief The identification number of the tile. It must be unique.
   */
  unsigned id;

   /*!
   * \brief The shape of the tile. The tile can have a "T", "L" or "I" shape.
   */
  Shape shape;

  /*!
   * \brief Represents the orientation of the tile. Each tile can be orientated in
   *        four ways (the I-shaped tiles have only 2 differents orientation).
   *
   *        The orientation is represented with a vector of 4 boolean.
   *        Each boolean value is matched with each side of the tile
   *        (top, right, bottom, left).
   *        If a case of the table is true, it means that this side of
   *        the tile takes part to the orientation of the tile
   *
   *        The boolean values of the orientation depend on the shape of the tile.
   *
   *        ex : if the shape is a I, then the orientation can be :
   *        - top = true, right = false, bottom = true, west = false
   *        - top = false, right = true, bottom = false, west = true
   */
  std::vector<bool> orientation;

  /*!
   * \brief goal represents the goal that a tile can contain.
   *        In the Labyrinth game, there are 24 differents goals.
   *        If the value of goal is 0, then the tile contains no goal.
   *        If the value of goal is between 1 and 24, then the tile gets a goal.
   */
  unsigned goal;

  void checkParameters(Shape shape, unsigned goal, std::vector<bool>);

  bool isCompatible(Shape shape, std::vector<bool>);

public:
  /**
   * @brief Default constructor of a tile. The default tile is a I.
   */
  Tile ();
  /**
   * \brief Constructor of a tile depending on the shape, the orientation and the goal
   *
   * @param  shape : the shape of the tile
   * @param  goal : the goal of the tile
   * @param  orientation : the orientation of the tile
   */
   Tile (unsigned id, Shape shape, unsigned goal, std::vector<bool> orientation);

   /**
    * \brief Constructor of a tile depending on the shape and the goal.
    * The orientation is random.
    *
    * @param shape : the shape of the tile
    * @param goal : the goal of the tile.
    */
   Tile (unsigned id, Shape shape, unsigned goal);

   /**
    * \brief Gives the id of the tile in read only mode.
    *
    * @return the id of the tile.
    */
   unsigned getId() const;

  /**
   * \brief gives the shape of the tile in read only mode.
   *
   * @return the shape of the tile.
   */
  Shape getShape () const;


  /**
   * \brief Gives the orientation of the tile
   *
   * @return the orientation of the tile
   */
  std::vector<bool> getOrientation () const;


  /**
   * \brief Gives the goal of the tile.
   *
   * @return the goal of the tile or 0 if the tile doesn't get any goal.
   */
  unsigned getGoal () const;


  /**
   * \brief Rotates the tile depending on the direction in parameter.
   *        The tile will be rotated in the left if the integer is negatif or 0,
   *        and in the right otherwise.
   *
   * @param  direction : the direction the tile will be rotated to
   */
  void rotate (int direction);

};

/**
 * \brief Overloading of the operator ==. It checks if two tiles are equals, that's
 *        to say the id's, the shapes, the orientations and the goals are equals.
 *
 * @param lhs : the left hand side tile
 * @param rhs : the right hand side tile
 * @return true if the both tiles are equals, false otherwise.
 */
bool operator==(const Tile & lhs, const Tile & rhs);

#endif // TILE_H
