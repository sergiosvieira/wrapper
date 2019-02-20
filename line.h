#ifndef __LINE_H__
#define __LINE_H__

#include <iostream>
#include "mid-line.h"
#include "mid-qt5-line.h"

#include "window.h"

using std::cout;

class Line: public MidLine<MidQt5Line>
{
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    Line(MidWindow<MidQt5Window>* parent = nullptr,
           long long int midID = 0,
              MidLineType lineType = MidLineType::VERTICAL):
        MidLine<MidQt5Line>(parent, midID, lineType), parent(parent) {}
};

#endif // __LINE_H__
