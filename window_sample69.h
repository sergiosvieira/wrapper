#ifndef WINDOW_SAMPLE69_H
#define WINDOW_SAMPLE69_H

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

class WindowSample69: public MidWindow<MidQt5Window>
{

public:
    WindowSample69(int width,
           int height,
           const std::string &title,
                   MidObject object = {});
    virtual ~WindowSample69();
};

#endif // WINDOW_SAMPLE69_H
