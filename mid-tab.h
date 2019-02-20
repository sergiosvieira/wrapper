#ifndef MIDTAB_H
#define MIDTAB_H

#include "mid-object.h"
#include "mid-window.h"


template <class T>
class MidTab : public MidObject
{
    MidObject *parent = nullptr;
    T *ptr = nullptr;
public:
    template <class U>
    MidTab(MidWindow<U>* parent = nullptr,
        long long int midID = 0,
              const char *title = ""):
        parent(parent),
        MidObject((ptr = new T{parent, midID}))
    {
    }

    void addMidTab(MidObject *object)
    {
        T *obj = this->ref<T>();
        if (obj) obj->addMidTab(object);

        //ptr->addMidTab(object);
    }
};

#endif // MIDTAB_H
