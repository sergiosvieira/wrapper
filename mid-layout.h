#ifndef MID_LAYOUT_H
#define MID_LAYOUT_H

#include "mid-object.h"

#include <vector>
#include <iostream>

/*!
 * \brief MidLayout Template
 */
template <class T>
class MidLayout: public MidObject
{
public:
    /*!
     * \brief MidLayout
     */
    MidLayout(): MidObject(new T{}){}
    /*!
     * \brief add
     * \param child
     */
    void add(MidObject child)
    {
        T *obj = static_cast<T*>(this->get());
        obj->add(child);
    }
    /*!
     * \brief addMidLayout
     * \param child
     */
    void addMidLayout(MidObject child)
    {
        this->get()->addMidLayout(child);
    }
    /*!
     * \brief setMidMenuBar
     * \param menuBar
     */
    void setMidMenuBar(MidObject menuBar)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->setMidMenuBar(menuBar);
    }
    /*!
     * \brief ~MidLayout
     */
    virtual ~MidLayout(){}
};

#endif // MID_LAYOUT_H
