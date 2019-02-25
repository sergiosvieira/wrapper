#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include "mid-window.h"
#include "mid-qt5-window.h"

class Button;
class RadioButton;

class Window: public MidWindow<MidQt5Window>
{
    Button *button1 = nullptr;
    RadioButton *radioButton1 = nullptr;
public:
    Window(int width,
           int height,
           const std::string &title,
           MidObject object = nullptr);
    virtual ~Window();
};

#endif // WINDOW_H
