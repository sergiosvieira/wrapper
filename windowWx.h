#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include "mid-window.h"
#include "mid-wx-window.h"

class WindowWx: public MidWindow<MidWxWindow>
{
public:
    WindowWx(int width,
             int height,
             const std::string &title,
             MidObject object = nullptr);

    //WindowWx(int width, int height, const char *title);

    virtual ~WindowWx();
};

#endif // WINDOW_H
