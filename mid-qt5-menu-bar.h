#ifndef __MIDQT5MENUBAR__
#define __MIDQT5MENUBAR__

#include <QMenuBar>
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5MenuBar: public QMenuBar
{
private:
public:
    MidQt5MenuBar
    (
        Id midID = 0,
        MidObject parent = nullptr
    ):
        QMenuBar (static_cast<QWidget*>(parent.get()))
    {
    }

    void addMidMenu(MidObject object)
    {
        QMenu *menu = static_cast<QMenu*>(object.get());
        this->addMenu(menu);
    }
};

#endif // __MIDQT5MENUBAR__
