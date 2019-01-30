#ifndef __MID_BUTTON__
#define __MID_BUTTON__

#include "mid-window.h"

template <class T, class U>
class MidButton
{
    T* b;
    MidWindow<U>* parent = nullptr;
public:
    MidButton(MidWindow<U>* parent = nullptr, const char *title = ""): parent(parent)
    {
        this->b = new T(parent);
        this->b->setText(title);
    }

    T *getReference()
    {
        return b;
    }
};

#endif /* __MID_BUTTON__ */
