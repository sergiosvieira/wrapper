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
        long long int midID = 0,
              const char *title = ""):
        MidButton<MidWxButton>(parent, midID, title), parent(parent) {}
};

#endif // BUTTON_H
