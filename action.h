#ifndef __ACTION__
#define __ACTION__

#include <iostream>
#include "mid-action.h"
#include "mid-qt5-action.h"

#include "window.h"

using std::cout;

class Action: public MidAction<MidQt5Action>
{
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    Action(MidWindow<MidQt5Window>* parent = nullptr,
           long long int midID = 0,
              const char *title = ""):
        MidAction<MidQt5Action>(parent, midID, title), parent(parent) {}
};

#endif // __ACTION__
