#ifndef __MID_WINDOW__
#define __MID_WINDOW__

#include <vector>
#include <iostream>
#include <type_traits>
#include "mid-object.h"

#include "mid-layout.h"

using std::vector;
using std::shared_ptr;
using std::make_shared;
using std::cout;
using std::is_reference;

template <class T>
class MidWindow: public MidObject
{
    T* ptr = nullptr;

    vector<MidObject> child;
public:
    MidWindow(int width,
              int height,
              const char* title):
        MidObject(ptr = new T{ width, height, title })
    {
    }

    void processButtonClick()
    {
        this->get()->processButtonClick();
    }

    MidWindow(const T& t): MidObject(t){}
    int getWidth() const
    {
        return this->get().getWidth();
    }
    int getHeight() const
    {
        return this->get().getHeight();
    }
    void addChild(MidObject *child)
    {
        if (child != nullptr)
        {
            this->child.push_back(child);
            // To Do: Layout
            this->get()->addChild(child);
        }
    }
    virtual ~MidWindow()
    {
        //delete ptr;
    }
    void show()
    {
        T *obj = static_cast<T*>(this->get());
        obj->show();
    }

    template <class L>
    void setMidLayout(MidLayout<L> layout)
    {
        T *obj = static_cast<T*>(this->get());
        obj->setMidLayout(layout.get());
        //this->get()->setMidLayout(layout.get());
    }
};

#endif /* __MID_WINDOW__ */
