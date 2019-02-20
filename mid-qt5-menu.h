#ifndef __MIDQT5MENU__
#define __MIDQT5MENU__

#include <QMenu>
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5Menu: public QMenu
{
private:
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    MidQt5Menu(MidWindow<MidQt5Window>* parent = nullptr,
                 long long int midID = 0,
                 const char *title = ""):
        QMenu (title, (parent != nullptr) ? parent->get() : nullptr)
    {
    }

    void setMidText(const char *caption)
    {
        setTitle(QString(caption));
    }
    void setParent(MidWindow<MidQt5Window>* parent)
    {
        this->parent = parent;
    }
};

#endif // __MIDQT5MENU__
