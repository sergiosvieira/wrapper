#ifndef MID_MENU_BAR_H
#define MID_MENU_BAR_H

#include "mid-object.h"
#include "mid-window.h"
#include "mid-menu.h"

/*!
 * \brief MidMenuBar Template
 */
template <class T>
class MidMenuBar : public MidObject
{
public:
    /*!
     * \brief MidMenuBar
     * \param midID
     * \param parent
     */
    MidMenuBar
    (
        Id midID = 0,
        MidObject parent = nullptr
    ):
        MidObject(new T{midID, parent}){}
    /*!
     * \brief addMidMenu
     * \param menu
     */
    void addMidMenu(MidObject menu)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->addMidMenu(menu);
    }
};

#endif // MID_MENU_BAR_H
