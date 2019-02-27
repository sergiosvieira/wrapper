#ifndef MIDTEXTFIELD_H
#define MIDTEXTFIELD_H

#include "mid-object.h"
#include "mid-window.h"

template <class T>
class MidTextField : public MidObject
{
public:
    MidTextField(Id id = 0,
                 const std::string &title = "",
                 MidObject parent = nullptr):
        MidObject(new T{id, title, parent}){}
    std::string getText()
    {        
        T *obj = static_cast<T*>(this->get());
        return obj->getMidTitle();
    }

    void setMidText(const std::string& title)
    {
        T *obj = static_cast<T*>(this->get());
        obj->setMidText(title);
    }
};

#endif // MIDTEXTFIELD_H
