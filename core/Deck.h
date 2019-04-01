#ifndef DECK_H
#define DECK_H

#include <string>
#include <vector>
#include <stack>

/**
 * \class Deck
 * \brief This class represents a deck containing the goals that
 * the player need to reach. Each player has a deck of the same size.
 */

class Deck
{
private:
    /**
     * \brief stack that contains distinct values from 1 to 24 included.
     * Those numbers represent the goals that the players need to reach.
     */
    std::stack<unsigned> goals;

public:

    /**
     * \brief Constructs a deck from the given list.
     * All the values in the list is copyied in the deck.
     *
     * @param goals : list containing goals.
     */
    Deck (std::vector<unsigned> goalsVect);

    /**
     * @brief Gives the number of elements in the deck.
     *
     * @return the size of the deck.
     */
    unsigned size();

    /**
     * \brief Gives the goal that is on the top of the deck.
     *
     * @return the goal
     */
    unsigned getGoal ();

    /**
     * \brief Check if the deck is empty.
     *
     * @return true if deck is empty, false otherwise.
     */
    bool isEmpty ();


    /**
     * \brief Remove the goal at the top of the deck.
     * This Method is called if player has reached the goal.
     */
    void remove ();

    /**
     * \brief restore the deck of the player. If players want to
     * to play again, it empties the deck and add new goals.
     *
     * @param goals : the list of the goals that the deck must contain
     */
    void restore(std::vector<unsigned> goalsVect);

};

#endif // DECK_H
