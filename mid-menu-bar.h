#ifndef __MIDMENUBAR__
#define __MIDMENUBAR__

#include "mid-object.h"
#include "mid-window.h"

#include "mid-menu.h"

template <class T>
class MidMenuBar : public MidObject
{
public:
    MidMenuBar
    (
        Id midID = 0,
        MidObject parent = nullptr
    ):
        MidObject(new T{midID, parent})
    {
    }
    void addMidMenu(MidObject menu)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->addMidMenu(menu);
    }
};

#endif // __MIDMENUBAR__
