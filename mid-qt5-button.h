#ifndef __MID_QT5_BUTTON__
#define __MID_QT5_BUTTON__

#include <QPushButton>
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5Button: public QPushButton
{
private:
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    MidQt5Button(MidWindow<MidQt5Window>* parent = nullptr,
                 const char *title = ""):
        QPushButton (title, parent->get())
    {
    }
    MidQt5Button();
    void setCaption(const char *caption)
    {
        this->setText(caption);
    }

    void setButtonText(const char *caption)
    {
        setText(QString(caption));
    }
    void setParent(MidWindow<MidQt5Window>* parent)
    {
        this->parent = parent;
    }
};

#endif /* __MID_QT5_BUTTON__ */
