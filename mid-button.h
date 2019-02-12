#ifndef __MID_BUTTON__
#define __MID_BUTTON__

#include "mid-object.h"
#include "mid-window.h"


template <class T>
class MidButton : public MidObject
{
	MidObject *parent = nullptr;
public:
    template <class U>
    MidButton(MidWindow<U>* parent = nullptr, 
    		  const char *title = "")
    {
        //this->o = new T(parent);
        //this->o->setText(title);
    }
};

#endif /* __MID_BUTTON__ */