#ifndef __PANEL__
#define __PANEL__

#include <iostream>
#include "mid-panel.h"
#include "mid-qt5-panel.h"

class Panel: public MidPanel<MidQt5Panel>
{
public:
    Panel(int width, int height):
            MidPanel<MidQt5Panel>(width, height)
        {}
};

#endif // __PANEL__
