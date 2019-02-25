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
        this->get()->add(child);
    }
    void addMidLayout(MidObject child)
    {
        this->get()->addMidLayout(child);
    }
    virtual ~MidLayout()
    {
    }
};

#endif // MIDLAYOUT_H
