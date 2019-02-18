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
private:
    T* ptr = nullptr;

    vector<shared_ptr<MidObject>> child;
public:
    MidLayout():
        MidObject(ptr = new T{ })
    {
    }
    void add(MidObject *child)
    {
        if (child != nullptr)
        {
            this->child.push_back(make_shared<MidObject>(child));
            this->get()->add(child);
        }
    }
    void addMidLayout(MidObject *child)
    {
        if (child != nullptr)
        {
            this->child.push_back(make_shared<MidObject>(child));
            this->get()->addMidLayout(child);
        }
    }
    virtual ~MidLayout()
    {
    }
    T* get()
    {
        return this->ref<T>();
    }

};

#endif // MIDLAYOUT_H
