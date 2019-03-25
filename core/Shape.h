#ifndef SHAPE_H
#define SHAPE_H

/*!
 * \enum Shape
 * \brief This Enumeration represents the shape of a Tile from the board
 *        game "Labyrinth". This enumeration doesn't take into account
 *        the orientation of the tile.
 */
enum Shape{
 
    /*!
     * \brief This enum represents a "T"-shaped tile. A T-shaped tile
     *        has possibly three ways to reach another Tile.
     */
    T_SHAPE,
    
    /*!
     * \brief This enum represents a "L"-shaped tile. A L-shaped tile
     *        has possibly two ways to reach another Tile. These two
     *        ways must be neighbours inside the tile.
     */
    L_SHAPE,
    
    /*!
     * \brief This enum represents a "I"-shaped tile. A I-shaped tile
     *        has possibly two ways to reach another Tile. These two
     *        ways must be opposite inside the tile.
     */
    I_SHAPE,

    /*!
     * \brief This enum represents no shape. That means the tile having
     *        this shape isn't a tile.
     */
    NO_SHAPE
};

#endif // SHAPE_H
