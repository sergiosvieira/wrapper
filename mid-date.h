#ifndef MIDDATE_H
#define MIDDATE_H

#include "mid-object.h"
#include "mid-window.h"

//Minimum value of date: 1400-Jan-01

template <class T>
class MidDate : public MidObject
{
    MidObject *parent = nullptr;
    T *ptr = nullptr;
public:
    template <class U>
    MidDate(MidWindow<U>* parent = nullptr,
        long long int midID = 0,
              int day = 1,
            int month = 1,
            int year = 1400):
        parent(parent),
        MidObject((ptr = new T{parent, midID, day, month, year}))
    {
    }
};

#endif // MIDDATE_H
