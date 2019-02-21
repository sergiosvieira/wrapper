#ifndef __MIDTEXTEDIT__
#define __MIDTEXTEDIT__

#include "mid-object.h"
#include "mid-window.h"

template <class T>
class MidTextEdit : public MidObject
{
    MidObject *parent = nullptr;
    T *ptr = nullptr;
public:
    template <class U>
    MidTextEdit(MidWindow<U>* parent = nullptr,
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

#endif // __MIDTEXTEDIT__
