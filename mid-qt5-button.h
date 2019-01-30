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
    MidQt5Button(MidWindow<MidQt5Window>* parent = nullptr)
            //wxButton((wxFrame*)(parent->getReference()), wxID_ANY, _(""))
    {
    }
    MidQt5Button();
    void setCaption(const char *caption)
    {
        //this->setText(QString(caption));
        this->setText(caption);
    }

    void setButtonText(const char *caption)
    {
        //this->setText(QString(caption));
        //this->setText(caption);
        setText(QString(caption));
    }
    void setParent(MidWindow<MidQt5Window>* parent)
    {
        this->parent = parent;
    }
};

#endif /* __MID_QT5_BUTTON__ */
