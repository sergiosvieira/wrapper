#ifndef __MIDTEXTLABEL__
#define __MIDTEXTLABEL__

#include "mid-object.h"
#include "mid-window.h"

template <class T>
class MidTextLabel : public MidObject
{
public:
    MidTextLabel(Id id = 0,
                 const std::string &text = "",
                 MidObject parent = nullptr):
        MidObject(new T{id, text, parent}){}
    std::string getMidText()
    {
        T *obj = static_cast<T*>(this->get());
        return obj->getText();
    }
    void setMidText(const std::string &text)
    {
        T *obj = static_cast<T*>(this->get());
        obj->setMidText(text);
    }
};

#endif // __MIDTEXTLABEL__
