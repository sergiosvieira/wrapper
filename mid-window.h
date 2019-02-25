#ifndef __MID_WINDOW__
#define __MID_WINDOW__

#include <vector>
#include <iostream>
#include <type_traits>
#include "mid-object.h"
#include "mid-layout.h"

using std::shared_ptr;

template <class T>
class MidWindow: public MidObject
{
public:
    MidWindow(int width,
              int height,
              const char* title):
        MidObject(new T{ width, height, title }){}
    int getWidth() const
    {
        return this->get().getWidth();
    }
    int getHeight() const
    {
        return this->get().getHeight();
    }
    void addChild(MidObject child)
    {
        this->get()->addChild(child);
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
    }
};

#endif /* __MID_WINDOW__ */
