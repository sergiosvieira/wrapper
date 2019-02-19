#ifndef MIDQT5LABEL_H
#define MIDQT5LABEL_H

#include "mid-object.h"
#include "mid-window.h"

template <class T>
class MidTextLabel : public MidObject
{
    MidObject *parent = nullptr;
    T *ptr = nullptr;
public:
    template <class U>
    MidTextLabel(MidWindow<U>* parent = nullptr,
        long long int midID = 0,
              const char *text = ""):
        parent(parent),
        MidObject((ptr = new T{parent, midID, text}))
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

#endif // MIDQT5LABEL_H
