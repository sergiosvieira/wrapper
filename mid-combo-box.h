#ifndef __MID_COMBO_BOX__
#define __MID_COMBO_BOX__

#include "mid-object.h"
#include "mid-window.h"

template <class T>
class MidComboBox: public MidObject
{
    MidObject *parent = nullptr;
    T *ptr = nullptr;
public:
    template <class U>
    MidComboBox(MidWindow<U>* parent = nullptr,
                long long int midID = 0):
        parent(parent),
        MidObject((ptr = new T{parent, midID})){}
    void addMidItem(const char* item)
    {
        T *obj = this->ref<T>();
        if (obj) obj->addMidItem(item);
    }
};

#endif // __MID_COMBO_BOX__
