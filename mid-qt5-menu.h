#ifndef __MIDQT5MENU__
#define __MIDQT5MENU__

#include <QMenu>
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5Menu: public QMenu
{
public:
    MidQt5Menu
    (
        long long int midID = 0,
        const char *title = "",
        MidObject parent = nullptr
    ):
        QMenu (title, static_cast<QWidget*>(parent.get()))
    {
    }

    void setMidText(const char *caption)
    {
        setTitle(QString(caption));
    }

    void addMidAction(MidObject object)
    {
        QAction* action = static_cast<QAction*>(object.get());
        this->addAction(action);
    }
};

#endif // __MIDQT5MENU__
