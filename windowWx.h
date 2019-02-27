#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include "mid-window.h"
#include "mid-wx-window.h"

class ButtonWx;
class RadioButtonWx;
class TextFieldWx;
class ProgressBarWx;
class TextLabelWx;
class ComboBoxWx;
class SpinBoxWx;
class DateEditWx;
class TabWx;
class GroupBoxWx;
class CheckBoxWx;
class TextEditWx;
class TabPageWx;

class WindowWx: public MidWindow<MidWxWindow>
{
    ButtonWx *button1 = nullptr;
    RadioButtonWx *radioButton1 = nullptr;
    ButtonWx *button2 = nullptr;
    RadioButtonWx *radioButton2 = nullptr;
    TextFieldWx *textField1 = nullptr;
    ProgressBarWx *progressBar1 = nullptr;
    TextLabelWx* textLabel1 = nullptr;
    ComboBoxWx *cb1 = nullptr;
    SpinBoxWx* sp1 = nullptr;
    DateEditWx * dateEdit1 = nullptr;
    TabWx * tab1 = nullptr;
    TabPageWx *base1 = nullptr;
    TabPageWx *base2 = nullptr;
    GroupBoxWx *gp1 = nullptr;
    CheckBoxWx *chBox1 = nullptr;
    TextEditWx *textEdit1 = nullptr;

public:
    WindowWx(int width,
             int height,
             const std::string &title,
             MidObject object = nullptr);

    //WindowWx(int width, int height, const char *title);

    virtual ~WindowWx();
};

#endif // WINDOW_H
