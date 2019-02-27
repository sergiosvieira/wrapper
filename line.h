#ifndef __LINE_H__
#define __LINE_H__

#include <iostream>
#include "mid-line.h"
#include "mid-qt5-line.h"

#include "window.h"

class Line: public MidLine<MidQt5Line>
{
public:
    Line
    (
        Id midID = 0,
        MidLineType lineType = MidLineType::VERTICAL,
        MidObject parent = nullptr
    ):
        MidLine<MidQt5Line>(midID, lineType, parent) {}
};

#endif // __LINE_H__
