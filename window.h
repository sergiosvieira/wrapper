#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include "mid-window.h"
#include "mid-qt5-window.h"
#include "mid-qt5-status-bar.h"
#include "mid-status-bar.h"

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

/*!
 * \brief The Window class
 */
class Window: public MidWindow<MidQt5Window>
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
    MidStatusBar<MidQt5StatusBar> *statusBar = nullptr;
public:
    /*!
     * \brief Window
     * \param width
     * \param height
     * \param title
     * \param object
     */
    Window(int width,
           int height,
           const std::string &title,
           MidObject object = nullptr);
    virtual ~Window();
};

#endif // WINDOW_H
