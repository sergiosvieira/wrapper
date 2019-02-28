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
    Button *button1 = nullptr;
    Button *btnSample15 = nullptr;

    RadioButton *radioButton1 = nullptr;
    Button *button2 = nullptr;
    RadioButton *radioButton2 = nullptr;
    TextField *textField1 = nullptr;
    ProgressBar *progressBar1 = nullptr;
    TextLabel* textLabel1 = nullptr;
    ComboBox *cb1 = nullptr;
    SpinBox* sp1 = nullptr;
    DateEdit * dateEdit1 = nullptr;
    Tab * tab1 = nullptr;
    TabPage *base1 = nullptr;
    TabPage *base2 = nullptr;
    GroupBox *gp1 = nullptr;
    CheckBox *chBox1 = nullptr;
    TextEdit *textEdit1 = nullptr;
public:
    WindowSample15(int width,
           int height,
           const std::string &title,
           MidObject object = nullptr);
    virtual ~WindowSample15();
};

#endif // WINDOW_SAMPLE15_H