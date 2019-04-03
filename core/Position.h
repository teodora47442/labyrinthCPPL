#ifndef POSITION_H
#define POSITION_H

/*!
 * \struct Position
 *
 * \brief This struct represents a position in a board.
 *        The position is defined by the index of the line and
 *        the index of the column in the board.
 */
struct Position{
    /*!
     * \brief line is an integer representing the line in a board or a table.
     *        The first line in a board or table is always at the index 0.
     */
    unsigned line;

    /*!
     * \brief column is an integer representing a column of the board or table.
     *        the first line in a board is always at the index 0.
     */
    unsigned column;
};

#endif // POSITION_H
