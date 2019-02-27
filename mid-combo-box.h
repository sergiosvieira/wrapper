#ifndef __MID_COMBO_BOX__
#define __MID_COMBO_BOX__

#include "mid-object.h"
#include "mid-window.h"

template <class T>
class MidComboBox: public MidObject
{
public:
    MidComboBox(Id id = 0,
                MidObject parent = nullptr):
        MidObject(new T{id, parent}){}
    void addMidItem(const std::string &item)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->addMidItem(item);
    }
};

#endif // __MID_COMBO_BOX__
