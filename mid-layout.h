#ifndef MIDLAYOUT_H
#define MIDLAYOUT_H

#include "mid-object.h"

#include <vector>
#include <iostream>

using std::vector;
using std::shared_ptr;
using std::make_shared;
using std::cout;

template <class T>
class MidLayout: public MidObject
{
public:
    MidLayout():
        MidObject(new T{ }){}
    void add(MidObject child)
    {
        T *obj = static_cast<T*>(this->get());
        obj->add(child);
    }
    void addMidLayout(MidObject child)
    {
        this->get()->addMidLayout(child);
    }

    template <class U>
    void setMidMenuBar(U *menuBar)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->setMidMenuBar(menuBar->get());
    }

    virtual ~MidLayout()
    {
    }
};

#endif // MIDLAYOUT_H
