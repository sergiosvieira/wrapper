#ifndef __MID_LINE__
#define __MID_LINE__

#include "mid-object.h"
#include "mid-window.h"

#include "definitions.h"

template <class T>
class MidLine : public MidObject
{
	MidObject *parent = nullptr;
	T *ptr = nullptr;
public:
    template <class U>
    MidLine(MidWindow<U>* parent = nullptr,
        long long int midID = 0,
              MidLineType lineType = MidLineType::VERTICAL):
    	parent(parent),
        MidObject((ptr = new T{parent, midID, lineType}))
    {
    }
};

#endif /* __MID_LINE__ */
