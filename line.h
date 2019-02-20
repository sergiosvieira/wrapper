#ifndef BUTTON_H
#define BUTTON_H

#include <iostream>
#include "mid-line.h"
#include "mid-qt5-button.h"

#include "window.h"

using std::cout;

class Line: public MidButton<MidQt5Button>
{
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    Button(MidWindow<MidQt5Window>* parent = nullptr,
           long long int midID = 0,
              const char *title = ""):
        MidButton<MidQt5Button>(parent, midID, title), parent(parent) {}
};

#endif // BUTTON_H
