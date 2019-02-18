#ifndef BUTTON_H
#define BUTTON_H

#include <iostream>
#include "mid-button.h"
#include "mid-wx-button.h"

#include "windowWx.h"

using std::cout;

class ButtonWx: public MidButton<MidWxButton>
{
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    ButtonWx(MidWindow<MidWxWindow>* parent = nullptr,
              const char *title = ""):
        MidButton<MidWxButton>(parent, title), parent(parent) {}
};

#endif // BUTTON_H
