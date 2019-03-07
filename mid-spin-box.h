#ifndef MID_SPIN_BOX_H
#define MID_SPIN_BOX_H

#include "mid-object.h"
#include "mid-window.h"

template <class T>
/*!
 * \brief The MidSpinBox class
 */
class MidSpinBox : public MidObject
{
public:
    /*!
     * \brief MidSpinBox
     * \param id
     * \param minValue
     * \param maxValue
     * \param parent
     */
    MidSpinBox(Id id = 0,
               int minValue = 0,
               int maxValue = 100,
               MidObject parent = {}):
        MidObject(new T{id, minValue, maxValue, parent}){}

    /*!
     * \brief getMidValue
     * \return
     */
    int getMidValue()
    {
        T *obj = static_cast<T*>(this->get());
        return obj->getMidValue();
    }
};

#endif // MID_SPIN_BOX_H
