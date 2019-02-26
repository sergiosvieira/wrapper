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
    MidObject *parent = nullptr;
    T* ptr = nullptr;

    vector<shared_ptr<MidObject>> child;
public:

    template <class U>
    MidPanel(
        MidWindow<U>* parent = nullptr,
        int width = 600,
        int height = 800
    ):
        MidObject(ptr = new T{parent, width, height}),
        parent(parent)
    {
    }

    void processButtonClick()
    {
        this->get()->processButtonClick();
    }

    MidPanel(const T& t): MidObject(t){}
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
            // To Do: Layout
            this->get()->addChild(child);
        }
    }
    virtual ~MidPanel()
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

    template <class L>
    void setMidLayout(MidLayout<L> layout)
    {
        this->get()->setMidLayout(layout.get());
    }
};

#endif // __MIDPANEL__
