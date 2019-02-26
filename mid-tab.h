#ifndef MIDTAB_H
#define MIDTAB_H

#include "mid-object.h"
#include "mid-window.h"


template <class T>
class MidTab : public MidObject
{
    MidObject *parent = nullptr;
    T *ptr = nullptr;
public:
    MidTab(Id id = 0,
           const std::string &title = "",
           MidObject parent = nullptr):
        MidObject(new T{id, title, parent}){}
    void addMidTab(MidObject object, const char *tabTitle)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->addMidTab(object, tabTitle);
    }
};

#endif // MIDTAB_H
