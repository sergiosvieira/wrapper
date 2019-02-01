#ifndef __MID_MESSAGE_DIALOG__
#define __MID_MESSAGE_DIALOG__

#include "mid-window.h"

template <class T>
class MidMessageDialog
{
    T *m = nullptr;
public:
    template <class U>
    MidMessageDialog(MidWindow<U> *parent,
                    const char* title, 
                    const char* text)
    {
        m = new T(parent, title, text);
        m->setTitle(title);
        m->setText(text);
    }

    void show()
    {
        m->show();
    }
};

#endif /* __MID_MESSAGE_DIALOG__ */
