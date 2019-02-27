#ifndef BUTTON_H
#define BUTTON_H

#include <iostream>
#include "mid-button.h"
#include "mid-qt5-button.h"

#include "window.h"

using std::cout;

class Button: public MidButton<MidQt5Button>
{
public:
    Button(Id id = 0,
           const std::string &title = "",
           MidObject parent = nullptr):
        MidButton<MidQt5Button>(id, title, parent){}
};

#endif // BUTTON_H
