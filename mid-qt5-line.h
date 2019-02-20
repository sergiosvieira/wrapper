
#ifndef __MID_QT5_LINE__
#define __MID_QT5_LINE__

#include <QLine>
#include "mid-qt5-window.h"

#include "mid-window.h"
/*
class MidQt5Line: public QLine
{
private:
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    MidQt5Line(MidWindow<MidQt5Window>* parent = nullptr,
                 long long int midID = 0):
        QLine((parent != nullptr) ? parent->get() : nullptr)
    {
    }

    //Empty constructor
    MidQt5Line();
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
*/
#endif /* __MID_QT5_LINE__ */

