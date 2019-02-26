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
        long long int midID = 0,
        const char *title = "",
        MidObject parent = nullptr
    ):
        MidObject(new T{midID, title, parent})
    {
    }
};

#endif // __MIDACTION__
