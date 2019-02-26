#ifndef __MIDMENUBAR__
#define __MIDMENUBAR__

#include "mid-object.h"
#include "mid-window.h"
#include "mid-menu.h"

/*!
 * MidMenuBar Template
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

#endif // __MIDMENUBAR__
