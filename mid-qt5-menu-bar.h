#ifndef __MIDQT5MENUBAR__
#define __MIDQT5MENUBAR__

#include <QMenuBar>
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5MenuBar: public QMenuBar
{
private:
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    MidQt5MenuBar(MidWindow<MidQt5Window>* parent = nullptr,
                 long long int midID = 0):
        QMenuBar ((parent != nullptr) ? parent->get() : nullptr)
    {
    }

    void setParent(MidWindow<MidQt5Window>* parent)
    {
        this->parent = parent;
    }

    void addMidMenu(QMenu* menu)
    {
        this->addMenu(menu);
    }
};

#endif // __MIDQT5MENUBAR__
