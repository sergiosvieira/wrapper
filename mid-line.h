#ifndef __MID_LINE__
#define __MID_LINE__

#include "mid-object.h"
#include "mid-window.h"

#include "definitions.h"

template <class T>
class MidLine : public MidObject
{
public:
    MidLine
    (
        long long int midID = 0,
        MidLineType lineType = MidLineType::VERTICAL,
        MidObject parent = nullptr
    ):
        MidObject(new T{midID, lineType, parent})
    {
    }
};

#endif /* __MID_LINE__ */
