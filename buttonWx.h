#ifndef BUTTON_H
#define BUTTON_H

#include <iostream>
#include "mid-button.h"
#include "mid-wx-button.h"

#include "windowWx.h"

using std::cout;

class ButtonWx: public MidButton<MidWxButton>
{
public:
    ButtonWx(Id id = 0,
            const std::string &title = "",
            MidObject parent = nullptr):
        MidButton<MidWxButton>(id, title, parent) {}
};

#endif // BUTTON_H
