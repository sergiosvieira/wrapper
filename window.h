#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include "mid-window.h"
#include "mid-qt5-window.h"

#include "mid-msg-dialog.h"
#include "mid-qt5-msg-dialog.h"

using std::cout;

class Window: public MidWindow<MidQt5Window>
{
public:
    Window(int width,
           int height,
           const char *title):
        MidWindow<MidQt5Window>(width, height, title){}
};

#endif // WINDOW_H
