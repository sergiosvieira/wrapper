#ifndef BUTTON_H
#define BUTTON_H

#include <iostream>
#include "mid-button.h"
#include "mid-qt5-button.h"

#include "window.h"

using std::cout;

class Button: public MidButton<MidQt5Button>
{
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    Button(MidWindow<MidQt5Window>* parent = nullptr,
              const char *title = ""):
        MidButton<MidQt5Button>(parent, title), parent(parent) {}
};

#endif // BUTTON_H
