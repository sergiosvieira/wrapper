#ifndef __MIDQT5TAB__
#define __MIDQT5TAB__

#include <QTabWidget>
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5Tab: public QTabWidget
{
private:
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    MidQt5Tab(Id id = 0,
              const std::string &title = "",
              MidObject parent = nullptr):
        QTabWidget (static_cast<QWidget*>(parent.get())){}
    void addMidTab(MidObject object, const char *tabTitle)
    {
        QWidget* widget = static_cast<QWidget*>(object.get());
        addTab(widget, "tabTitle");
    }
};

#endif // __MIDQT5TAB__
