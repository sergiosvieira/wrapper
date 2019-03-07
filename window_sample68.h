#ifndef WINDOW_SAMPLE68_H
#define WINDOW_SAMPLE68_H

#include <iostream>
#include "mid-window.h"
#include "mid-qt5-window.h"

class Button;
class RadioButton;
class TextField;
class ProgressBar;
class TextLabel;
class ComboBox;
class SpinBox;
class DateEdit;
class Tab;
class GroupBox;
class CheckBox;
class TextEdit;
class TabPage;

class WindowSample68: public MidWindow<MidQt5Window>
{

    TextLabel* textLabel = nullptr;
    TextLabel* textLabelName = nullptr;
    TextField* tfName = nullptr;

    TextLabel* textLabelAge = nullptr;
    TextLabel* textLabelSex = nullptr;
    CheckBox* chBox1 = nullptr;
    ComboBox* cb1 = nullptr;
    SpinBox* sp1 = nullptr;

    Button *button1 = nullptr;
    Button *button2 = nullptr;
    Button *button3 = nullptr;
    Button *button4 = nullptr;



public:
    WindowSample68(int width,
           int height,
           const std::string &title,
                   MidObject object = {});
    virtual ~WindowSample68();
};

#endif // WINDOW_SAMPLE68_H
