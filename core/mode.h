#ifndef MODE_H
#define MODE_H

#endif // MODE_H

/**
 * \enum Mode
 * \brief The Mode enum represents the 2 possible modes for the game : Kids mode, and normal mode
 */
enum Mode {
    /**
     * \brief If the game begins with the kids mode, the winner is the player
     *  who reached all his goals. There is no need for the player to come back to
     *  his departure position.
     */
    KIDS,

    /**
     * \brief If the game begins with the normal mode, the winner is
     * the player who reached all his goals and came back to
     * his departure position
     */
    NORMAL
};
