#ifndef BUTTON_H
#define BUTTON_H

#include <iostream>
#include "mid-button.h"
#include "mid-qt5-button.h"

#include "window.h"

using std::cout;

class Button: public MidButton<MidQt5Button>
{
    MidObject* parent = nullptr;
public:
    Button(MidObject *parent = nullptr,
           long long int midID = 0,
           const char *title = ""):
        MidButton<MidQt5Button>(parent, midID, title),
        parent(parent) {}
};

#endif // BUTTON_H
