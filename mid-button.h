#ifndef __MID_BUTTON__
#define __MID_BUTTON__

#include "mid-object.h"
#include "mid-window.h"


template <class T>
class MidButton : public MidObject
{
	MidObject *parent = nullptr;
	T *ptr = nullptr;
public:
    template <class U>
    MidButton(MidWindow<U>* parent = nullptr, 
    		  const char *title = ""):
    	parent(parent),
    	MidObject((ptr = new T{parent, title}))
    {
    }

    void clicked()
    {

    }
};

#endif /* __MID_BUTTON__ */
