#ifndef __MID_QT5_LINE__
#define __MID_QT5_LINE__

#include <QFrame>
#include "definitions.h"
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5Line: public QFrame
{
private:
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    MidQt5Line(MidWindow<MidQt5Window>* parent = nullptr,
                 long long int midID = 0,
                 MidLineType type = MidLineType::VERTICAL):
        QFrame ((parent != nullptr) ? parent->get() : nullptr)
    {
        if (type == MidLineType::VERTICAL)
        {
            this->setFrameShape(QFrame::VLine);
        }
        else if (type == MidLineType::HORIZONAL)
        {
            this->setFrameShape(QFrame::HLine);
        }
    }

    void setParent(MidWindow<MidQt5Window>* parent)
    {
        this->parent = parent;
    }
};

#endif /* __MID_QT5_LINE__ */
