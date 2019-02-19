#ifndef MIDSPINBOX_H
#define MIDSPINBOX_H

#include "mid-object.h"
#include "mid-window.h"

template <class T>
class MidSpinBox : public MidObject
{
    MidObject *parent = nullptr;
    T *ptr = nullptr;
public:
    template <class U>
    MidSpinBox(MidWindow<U>* parent = nullptr,
        long long int midID = 0,
              int minValue = 0,
               int maxValue = 100):
        parent(parent),
        MidObject((ptr = new T{parent, midID, minValue, maxValue}))
    {
    }

    int getMidValue()
    {
        return ptr->getMidValue();
    }
};

#endif // MIDSPINBOX_H
