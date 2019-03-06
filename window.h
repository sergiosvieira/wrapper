#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include "mid-window.h"
#include "mid-qt5-window.h"
#include "mid-qt5-status-bar.h"
#include "mid-status-bar.h"
#include "mid-image-label.h"
#include "mid-qt5-image-label.h"
#include "mid-image.h"
#include "mid-qt5-image.h"
#include "mid-list-box.h"
#include "mid-qt5-list-box.h"
#include "mid-tool-bar.h"
#include "mid-qt5-tool-bar.h"
#include "mid-grid.h"
#include "mid-qt5-grid.h"
#include "mid-chart-view.h"
#include "mid-qt5-chart-view.h"

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

    Button *buttonEvtA = nullptr;
    Button *buttonEvtB = nullptr;
    Button *buttonEvtC = nullptr;
    Button *buttonEvtD = nullptr;

    Button *btnSample15 = nullptr;
    Button *btnSample58 = nullptr;
    Button *btnSample68 = nullptr;

    Button *btnSample69 = nullptr;
    Button *btnSample117 = nullptr;
    Button *btnSample229 = nullptr;
    Button *btnSample242 = nullptr;

    RadioButton *radioButton1 = nullptr;
    Button *button2 = nullptr;
    RadioButton *radioButton2 = nullptr;
    TextField *textField1 = nullptr;
    ProgressBar *progressBar1 = nullptr;
    TextLabel* textLabel1 = nullptr;
    MidImageLabel<MidQt5ImageLabel> *imageLabel = nullptr;
    MidImage<MidQt5Image> *image = nullptr;
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
    MidListBox<MidQt5ListBox> *listBox = nullptr;
    MidToolBar<MidQt5ToolBar> *toolBar = nullptr;
    MidGrid<MidQt5Grid> *grid = nullptr;
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
