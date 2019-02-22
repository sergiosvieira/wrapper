#ifndef MIDSPINBOX_H
#define MIDSPINBOX_H

#include "mid-object.h"
#include "mid-window.h"

template <class T>
class MidSpinBox : public MidObject
{
public:
    MidSpinBox(Id id = 0,
               int minValue = 0,
               int maxValue = 100,
               MidObject parent = nullptr):
        MidObject(new T{id, minValue, maxValue, parent}){}
    int getMidValue()
    {
        T *obj = static_cast<T*>(this->get());
        return obj->getMidValue();
    }
};

#endif // MIDSPINBOX_H
