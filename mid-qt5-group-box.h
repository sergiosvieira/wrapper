#ifndef __MID_QT5_GROUP_BOX__
#define __MID_QT5_GROUP_BOX__

#include <QGroupBox>
#include "mid-window.h"
#include "mid-qt5-window.h"


class MidQt5GroupBox: public QGroupBox
{
public:
    MidQt5GroupBox(Id id = 0,
                   const std::string &title = "",
                   MidObject parent = nullptr):
        QGroupBox (QString(title.c_str()),
                   static_cast<QWidget*>(parent.get())){}
    void setMidLayout(MidObject layout)
    {
        this->setLayout(static_cast<QLayout*>(layout.get()));
    }
};


#endif // __MID_QT5_GROUP_BOX__
