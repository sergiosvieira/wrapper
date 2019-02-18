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
        long long int midID = 0,
    		  const char *title = ""):
    	parent(parent),
        MidObject((ptr = new T{midID, parent, title}))
    {
    }
};

#endif /* __MID_BUTTON__ */
