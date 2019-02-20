#ifndef __MID_QT5_BUTTON__
#define __MID_QT5_BUTTON__

#include <QPushButton>
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5Button: public QPushButton
{
private:
    MidObject* parent = nullptr;
public:
    MidQt5Button(MidObject* parent = nullptr,
                 long long int midID = 0,
                 const char *title = ""):
        QPushButton (title, (parent != nullptr) ? ((MidWindow<MidQt5Window>*)parent)->get() : nullptr)
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
