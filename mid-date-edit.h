#ifndef MIDDATEEDIT_H
#define MIDDATEEDIT_H

#include "mid-object.h"
#include "mid-window.h"

#include "mid-date.h"

template <class T>
class MidDateEdit : public MidObject
{
    MidObject *parent = nullptr;
    T *ptr = nullptr;
public:
    template <class U, class V>
    MidDateEdit(MidWindow<U>* parent = nullptr,
        long long int midID = 0,
                MidDate<V> date = {}):
        parent(parent),
        MidObject((ptr = new T{date, parent}))
    {
    }
};

#endif // MIDDATEEDIT_H
