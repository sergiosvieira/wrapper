#ifndef __MID_WINDOW__
#define __MID_WINDOW__

#include <vector>
#include <iostream>
#include <type_traits>
#include "mid-object.h"

using std::vector;
using std::shared_ptr;
using std::make_shared;
using std::cout;
using std::is_reference;

template <class T>
class MidWindow: public MidObject
{
    T* ptr = nullptr;

    vector<shared_ptr<MidObject>> child;
public:
    MidWindow(int width,
              int height,
              const char* title):
        //MidObject(*(ptr = new T{width, height, title}))
        MidObject((ptr = new T{ width, height, title }))
    {
        cout << "MidObject: ";
        this->get()->info();
    }
    MidWindow(const T& t): MidObject(t)
    {
        cout << "MidWindow::MidObject(t): ";
    }
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
            this->child.push_back(make_shared<MidObject>(child));
        }
    }
    virtual ~MidWindow()
    {
        //delete ptr;
    }
    T* get()
    {
        return this->ref<T>();
    }
    void show()
    {
        this->get()->show();
    }
};

#endif /* __MID_WINDOW__ */
