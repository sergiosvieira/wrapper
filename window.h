#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include "mid-window.h"
#include "mid-qt5-window.h"

class Window: public MidWindow<MidQt5Window>
{
public:
    Window(int width, int height, const char *title);
};

#endif // WINDOW_H
