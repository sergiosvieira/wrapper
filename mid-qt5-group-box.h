#ifndef __MID_QT5_GROUP_BOX__
#define __MID_QT5_GROUP_BOX__

#include <QGroupBox>
#include "mid-window.h"
#include "mid-qt5-window.h"


class MidQt5GroupBox: public QGroupBox
{
private:
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    MidQt5GroupBox(MidWindow<MidQt5Window>* parent = nullptr,
                      long long int midID = 0,
                      const char *title = ""):
        QGroupBox (title, (parent != nullptr) ? parent->get() : nullptr){}
    void setMidLayout(QLayout* layout)
    {
        this->setLayout(layout);
    }
};


#endif // __MID_QT5_GROUP_BOX__
