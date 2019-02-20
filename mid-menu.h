#ifndef __MIDMENU__
#define __MIDMENU__

#include "mid-object.h"
#include "mid-window.h"

template <class T>
class MidMenu : public MidObject
{
    MidObject *parent = nullptr;
    T *ptr = nullptr;
public:
    template <class U>
    MidMenu(MidWindow<U>* parent = nullptr,
        long long int midID = 0,
            const char *title = ""):
        parent(parent),
        MidObject((ptr = new T{parent, midID, title}))
    {
    }

    T* get()
    {
        return this->ref<T>();
    }

    void addMidAction(const char *action)
    {
        T *obj = this->ref<T>();
        if (obj) obj->addMidAction(action);
    }
};

#endif // __MIDMENU__
