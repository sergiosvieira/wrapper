#ifndef __MID_GROUP_BOX__
#define __MID_GROUP_BOX__

#include "mid-object.h"
#include "mid-window.h"


template <class T>
class MidGroupBox: public MidObject
{
    MidObject *parent = nullptr;
    T *ptr = nullptr;
public:
    template <class U>
    MidGroupBox(MidWindow<U>* parent = nullptr,
                   long long int midID = 0,
                   const char *title = ""):
        parent(parent),
        MidObject((ptr = new T{parent, midID, title})){}
    template <class L>
    void setMidLayout(MidLayout<L> layout)
    {
        T *obj = this->ref<T>();
        if (obj) obj->setMidLayout(layout.get());
    }
};

#endif // __MID_GROUP_BOX__
