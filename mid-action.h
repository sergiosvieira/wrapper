#ifndef __MIDACTION__
#define __MIDACTION__

#include "mid-object.h"
#include "mid-window.h"

template <class T>
class MidAction : public MidObject
{
public:
    MidAction
    (
        Id id = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        MidObject(new T{id, title, parent})
    {
    }
};

#endif // __MIDACTION__
