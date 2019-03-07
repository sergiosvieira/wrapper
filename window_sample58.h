#ifndef WINDOW_SAMPLE58_H
#define WINDOW_SAMPLE58_H

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

class WindowSample58: public MidWindow<MidQt5Window>
{
    Tab * tab1 = nullptr;
    TabPage *base1 = nullptr;
    TabPage *base2 = nullptr;

    Tab * tab2 = nullptr;
    TabPage *base3 = nullptr;
    TabPage *base4 = nullptr;
    TabPage *base5 = nullptr;
    TabPage *base6 = nullptr;
    TabPage *base7 = nullptr;
    TabPage *base8 = nullptr;
    TabPage *base9 = nullptr;
    TabPage *base10 = nullptr;

public:
    WindowSample58(int width,
           int height,
           const std::string &title,
                   MidObject object = {});
    virtual ~WindowSample58();
};

#endif // WINDOW_SAMPLE58_H
