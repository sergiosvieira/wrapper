#ifndef __MIDMENUBAR__
#define __MIDMENUBAR__

#include "mid-object.h"
#include "mid-window.h"

#include "mid-menu.h"

template <class T>
class MidMenuBar : public MidObject
{
    MidObject *parent = nullptr;
    T *ptr = nullptr;
public:
    template <class U>
    MidMenuBar(MidWindow<U>* parent = nullptr,
        long long int midID = 0):
        parent(parent),
        MidObject((ptr = new T{parent, midID}))
    {
    }

    template <class V>
    void addMidMenu(MidMenu<V>* menu)
    {
        T *obj = this->ref<T>();
        if (obj) obj->addMidMenu(menu->get());
    }

    T* get()
    {
        return this->ref<T>();
    }
};

#endif // __MIDMENUBAR__
