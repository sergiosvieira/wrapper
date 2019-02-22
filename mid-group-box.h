#ifndef __MID_GROUP_BOX__
#define __MID_GROUP_BOX__

#include "mid-object.h"
#include "mid-window.h"


template <class T>
class MidGroupBox: public MidObject
{
public:
    MidGroupBox(Id id = 0,
                const std::string &title = "",
                MidObject parent = nullptr):
        MidObject(new T{id, title, parent}){}
    template <class L>
    void setMidLayout(MidLayout<L> &layout)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->setMidLayout(layout.get());
    }
};

#endif // __MID_GROUP_BOX__
