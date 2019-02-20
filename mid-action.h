#ifndef __MIDACTION__
#define __MIDACTION__

#include "mid-object.h"
#include "mid-window.h"

template <class T>
class MidAction : public MidObject
{
        MidObject *parent = nullptr;
        T *ptr = nullptr;
public:
    template <class U>
    MidAction(MidWindow<U>* parent = nullptr,
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
};

#endif // __MIDACTION__
