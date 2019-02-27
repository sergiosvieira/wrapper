#ifndef __MIDPANEL2__
#define __MIDPANEL2__

#include <vector>
#include <iostream>
#include <type_traits>
#include "mid-object.h"

#include "mid-layout.h"
#include "mid-tab.h"

using std::vector;
using std::shared_ptr;
using std::make_shared;
using std::cout;
using std::is_reference;

template <class T>
class MidTabPage: public MidObject
{
    vector<shared_ptr<MidObject>> child;
public:

    MidTabPage
    (
        Id id = 0,
        int width = 600,
        int height = 800,
        const std::string &title = "",
        MidObject parent = nullptr
    ) :
        MidObject(new T{id, width, height, title, parent})
    {
    }

    void processButtonClick()
    {
        T *obj = static_cast<T*>(this->get());
        obj->processButtonClick();
    }

    MidTabPage(const T& t) : MidObject(t) {}
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

    virtual ~MidTabPage()
    { }

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

#endif // __MIDPANEL2__
