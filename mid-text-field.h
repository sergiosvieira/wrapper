#ifndef MIDTEXTFIELD_H
#define MIDTEXTFIELD_H

#include "mid-object.h"
#include "mid-window.h"

template <class T>
class MidTextField : public MidObject
{
    MidObject *parent = nullptr;
    T *ptr = nullptr;
public:
    template <class U>
    MidTextField(MidWindow<U>* parent = nullptr,
        long long int midID = 0,
              const char *title = ""):
        parent(parent),
        MidObject((ptr = new T{parent, midID, title}))
    {
    }

    const char * getText()
    {
        return ptr->getText();
    }

    void setMidText(const char *caption)
    {
        ptr->setMidText(caption);
    }
};

#endif // MIDTEXTFIELD_H
