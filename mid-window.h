#ifndef __MID_WINDOW__
#define __MID_WINDOW__

#include "Midbutton.h"

template <class Frame>
class MidWindow
{
    int width = 0;
    int height = 0;
    Frame w;
public:
    MidWindow(int width, int height):
            width(width), height(height)
    {
    }

    template <class MidButton>
    void addButton(int x, int y, MidButton button)
    {
        //T w;
        w.addButton(x, y, button.getReference());
    }

    virtual ~MidWindow(){}
    void show()
    {
        //T w;
        w.show();
    }
};

#endif /* __MID_WINDOW__ */
