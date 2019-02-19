#ifndef __MID_RADIO_BUTTON__
#define __MID_RADIO_BUTTON__

#include "mid-object.h"
#include "mid-window.h"

template <class T>
class MidRadioButton : public MidObject
{
    MidObject *parent = nullptr;
    T *ptr = nullptr;
public:
    template <class U>
    MidRadioButton(MidWindow<U>* parent = nullptr,
                   long long int midID = 0,
                   const char *title = ""):
        parent(parent),
        MidObject((ptr = new T{parent, midID, title})){}
};

#endif // __MID_RADIO_BUTTON__
