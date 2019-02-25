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
              const std::string &title,
              MidObject parent):
        MidObject(new T{ width, height, title, parent }){}
    void addChild(MidObject child)
    {
        T *obj = static_cast<T*>(this->get());
        obj->show();
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

#endif /* __MID_WINDOW__ */
