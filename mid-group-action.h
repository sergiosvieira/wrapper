#ifndef __MID_GROUP_ACTION__
#define __MID_GROUP_ACTION__

#include "mid-object.h"
#include "mid-window.h"

/*!
 * \brief MidGroupAction Template
 */
template <class T>
class MidGroupAction : public MidObject
{
public:
    MidGroupAction
    (
        Id id = 0,
        const std::vector<MidObject>& actions = {},
        MidObject parent = nullptr
    ):
        MidObject(new T{id, actions, parent}){}

    /*!
     * \brief addMidAction
     * \param action
     */
    void addMidAction(MidObject action)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->addMidAction(action);
    }
};

#endif // __MID_GROUP_ACTION__
