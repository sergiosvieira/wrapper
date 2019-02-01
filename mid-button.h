#ifndef __MID_BUTTON__
#define __MID_BUTTON__

#include "mid-window.h"

template <class T>
class MidButton
{
    T* b;
public:
    template <class U>
    MidButton(MidWindow<U>* parent = nullptr, const char *title = "")
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
