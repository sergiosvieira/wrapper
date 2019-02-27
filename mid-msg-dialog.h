#ifndef __MID_MESSAGE_DIALOG__
#define __MID_MESSAGE_DIALOG__

#include "mid-window.h"

template <class T>
class MidMessageDialog : public MidObject
{
public:
    MidMessageDialog
    (
        Id id = 0,
        const std::string &title = "",
        const std::string &text = "",
        MidObject parent = nullptr
    ):MidObject (new T(id, title, text, parent)){}

    void show()
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->show();
    }
};

#endif /* __MID_MESSAGE_DIALOG__ */
