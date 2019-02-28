#ifndef __LINEWX__
#define __LINEWX__

#include <iostream>
#include "mid-line.h"
#include "mid-wx-line.h"

#include "window.h"

using std::cout;

class LineWx: public MidLine<MidWxLine>
{
public:
    LineWx
    (
        Id midID = 0,
        MidLineType lineType = MidLineType::VERTICAL,
        MidObject parent = nullptr
    ):
        MidLine<MidWxLine>(midID, lineType, parent) {}
};

#endif // __LINEWX__
