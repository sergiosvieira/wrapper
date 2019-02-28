#ifndef WINDOW_SAMPLE15_H
#define WINDOW_SAMPLE15_H

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

class WindowSample15: public MidWindow<MidQt5Window>
{

public:
    WindowSample15(int width,
           int height,
           const std::string &title,
           MidObject object = nullptr);
    virtual ~WindowSample15();
};

#endif // WINDOW_SAMPLE15_H
