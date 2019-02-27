#ifndef __LINEWX__
#define __LINEWX__

#include <iostream>
#include "mid-line.h"
#include "mid-wx-line.h"

#include "window.h"

using std::cout;

class LineWx: public MidLine<MidWxLine>
{
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    LineWx(MidWindow<MidWxWindow>* parent = nullptr,
           long long int midID = 0,
              MidLineType lineType = MidLineType::VERTICAL):
        MidLine<MidWxLine>(parent, midID, lineType), parent(parent) {}
};

#endif // __LINEWX__
