#ifndef __MIDMENU__
#define __MIDMENU__

#include "mid-object.h"
#include "mid-window.h"

/*!
 * \brief MidMenu Template
 */
template <class T>
class MidMenu : public MidObject
{
public:
    /*!
     * \brief MidMenu
     * \param id
     * \param title
     * \param parent
     */
    MidMenu
    (
        Id id = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        MidObject(new T{id, title, parent}){}
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

#endif // __MIDMENU__
