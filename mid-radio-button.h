#ifndef __MID_RADIO_BUTTON__
#define __MID_RADIO_BUTTON__

#include "mid-object.h"
#include "mid-window.h"

template <class T>
class MidRadioButton : public MidObject
{
public:
    MidRadioButton(Id id = 0,
                   const std::string &title = "",
                   MidObject parent = nullptr):
        MidObject(new T{id, title, parent}){}
};

#endif // __MID_RADIO_BUTTON__
