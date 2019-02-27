#ifndef __MIDPANEL__
#define __MIDPANEL__

#include <vector>
#include <iostream>
#include <type_traits>
#include "mid-object.h"

#include "mid-layout.h"
#include "mid-window.h"

using std::vector;
using std::shared_ptr;
using std::make_shared;
using std::cout;
using std::is_reference;

template <class T>
class MidPanel: public MidObject
{
    vector<shared_ptr<MidObject>> child;
public:

    MidPanel
    (
        int width = 600,
        int height = 800,
        MidObject parent = nullptr
    ):
        MidObject(new T{width, height, parent})
    {
    }

    void processButtonClick()
    {
        T *obj = static_cast<T*>(this->get());
        obj->processButtonClick();
    }

    MidPanel(const T& t): MidObject(t){}
    int getWidth() const
    {
        T *obj = static_cast<T*>(this->get());
        return obj->getWidth();
    }
    int getHeight() const
    {
        T *obj = static_cast<T*>(this->get());
        return obj->getHeight();
    }
    /*void addChild(MidObject *child)
    {
        if (child != nullptr)
        {
            this->child.push_back(make_shared<MidObject>(child));
            // To Do: Layout
            this->get()->addChild(child);
        }
    }*/
    virtual ~MidPanel()
    {
        //delete ptr;
    }
    void show()
    {
        T *obj = static_cast<T*>(this->get());
        obj->show();
    }

    void setMidLayout(MidObject layout)
    {
        T *obj = static_cast<T*>(this->get());
        obj->setMidLayout(layout);
    }
};

#endif // __MIDPANEL__
