#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include "mid-window.h"
#include "mid-wx-window.h"

class WindowWx: public MidWindow<MidWxWindow>
{
public:
    WindowWx(int width, int height, const char *title);
};

#endif // WINDOW_H
