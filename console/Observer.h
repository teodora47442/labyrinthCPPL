#ifndef OBSERVER_H
#define OBSERVER_H


/**
 *\class Observer
 *
 * \brief The observer class recieves notifications from Observable
 * and notify all the observers of the subject of this change.
 * He allows to maintain a cohérence between multiple "views" of an object.
 */

class Observer
{

public:
    /**
     * \brief Abstract method that needs to be implemented into the class that
     * needs to be updated (whose object is part of the Observer list).
     */
    virtual void update();

    /**
     * @brief Vitrual destructor of the Observer class
     */
    virtual ~Observer();
};

#endif // OBSERVER_H
