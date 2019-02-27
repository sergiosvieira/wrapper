#ifndef __MIDMENU__
#define __MIDMENU__

#include "mid-object.h"
#include "mid-window.h"

template <class T>
class MidMenu : public MidObject
{

public:
    MidMenu
    (
        long long int midID = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        MidObject(new T{midID, title, parent})
    {
    }

    void addMidAction(MidObject action)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->addMidAction(action);
    }
};

#endif // __MIDMENU__
