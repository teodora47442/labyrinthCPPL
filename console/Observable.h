#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <list>
#include <algorithm>
#include <iterator>

#include "Observer.h"
/**
 *\class Observable
 *
 * \brief The observable class has a list of all his observers.
 * Also contains functions that allow to add/remove observer
 * and a function to notify the observer(s) of any changes of an observable.
 */
class Observable
{

private:

    /**
     * \brief List of observers.
     */
    std::list<Observer*> Observers;

public:
    /**
     * \brief Allow to add observers of a subject.
     * @param observer that needs to be added to the observer list
     */
    void addObserver(Observer * obs);

    /**
     * \brief Allow to remove observers of a subject.
     * @param obs : pointer of observer that needs to be removed from the observer list
     */
    void removeObserver(Observer * obs);

    /**
     * \brief Notify the observers of a changement from the subject.
     */
    void notify();


};

#endif // OBSERVABLE_H
