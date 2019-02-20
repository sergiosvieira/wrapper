/*
#ifndef LINE_H
#define LINE_H

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
              const char *title = ""):
        Midline<MidQt5Line>(parent, midID), parent(parent) {}
};

#endif // LINE_H
*/
