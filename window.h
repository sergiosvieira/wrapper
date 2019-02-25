#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include "mid-window.h"
#include "mid-qt5-window.h"

class Button;
class RadioButton;
class TextField;
class Progressbar;
class TextLabel;
class ComboBox;

class Window: public MidWindow<MidQt5Window>
{
    Button *button1 = nullptr;
    RadioButton *radioButton1 = nullptr;
    TextField *textField1 = nullptr;
    Progressbar *progressBar1 = nullptr;
    TextLabel* textLabel1 = nullptr;
    ComboBox *cb1 = nullptr;
public:
    Window(int width,
           int height,
           const std::string &title,
           MidObject object = nullptr);
    virtual ~Window();
};

#endif // WINDOW_H
