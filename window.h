#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include "mid-window.h"
#include "mid-qt5-window.h"

using std::cout;

class Window: public MidWindow<MidQt5Window>
{
public:
    Window(int width,
           int height,
           const char *title):
        MidWindow<MidQt5Window>(width, height, title){}
    void slotClick()
    {
        cout << "slotClick() of Window\n";
        cout.flush();

        //Chama a função processButtonClick() of MidQt5Button
        this->get()->processButtonClick();
    }
};

#endif // WINDOW_H
