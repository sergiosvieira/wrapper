#ifndef __MID_BUTTON__
#define __MID_BUTTON__

#include "mid-object.h"
#include "mid-window.h"

template <class T>
class MidButton : public MidObject
{
    MidObject parent = nullptr;
public:
    MidButton(Id id = 0,
              const std::string &title = "",
              MidObject parent = nullptr):
        MidObject(new T{id, title, parent}){}
};

#endif /* __MID_BUTTON__ */
