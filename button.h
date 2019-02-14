#ifndef BUTTON_H
#define BUTTON_H

#include <iostream>
#include "mid-button.h"
#include "mid-qt5-button.h"

using std::cout;

class Button: public MidButton<MidQt5Button>
{
public:
    Button(MidWindow<MidQt5Window>* parent = nullptr,
              const char *title = ""):
        MidButton<MidQt5Button>(parent, title){}
    void signalClick(){}
};

#endif // BUTTON_H
