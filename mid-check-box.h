#ifndef __MID_CHECK_BOX__
#define __MID_CHECK_BOX__

#include "mid-object.h"
#include "mid-window.h"


template <class T>
class MidCheckBox : public MidObject
{
	MidObject *parent = nullptr;
	T *ptr = nullptr;
public:
    template <class U>
    MidCheckBox(MidWindow<U>* parent = nullptr,
        long long int midID = 0,
    		  const char *title = ""):
    	parent(parent),
        MidObject((ptr = new T{parent, midID, title})){}
};

#endif /* __MID_CHECK_BOX__ */
