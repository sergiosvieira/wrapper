#ifndef __ACTION__
#define __ACTION__

#include <iostream>
#include "mid-action.h"
#include "mid-qt5-action.h"

#include "window.h"

using std::cout;

class Action: public MidAction<MidQt5Action>
{
public:
    Action
    (
        long long int midID = 0,
        const char *title = "",
        MidObject parent = nullptr
    ):
        MidAction<MidQt5Action>(midID, title, parent) {}
};

#endif // __ACTION__
