#ifndef __MID_QT5_CHECK_BOX__
#define __MID_QT5_CHECK_BOX__

#include <QCheckBox>
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5CheckBox: public QCheckBox
{
private:
    MidObject* parent = nullptr;
public:
    template <typename T>
    MidQt5CheckBox(MidObject* parent = nullptr,
                 long long int midID = 0,
                 const char *title = ""):
        QCheckBox(title, (parent != nullptr) ? static_cast<T*>(parent->get()) : nullptr)
    {
    }
    MidQt5CheckBox();
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

#endif /* __MID_QT5_CHECKBOX__ */
