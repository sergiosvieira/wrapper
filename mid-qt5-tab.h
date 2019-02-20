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
    MidQt5Tab(MidWindow<MidQt5Window>* parent = nullptr,
                 long long int midID = 0):
        QTabWidget ((parent != nullptr) ? parent->get() : nullptr)
    {
    }

    void setParent(MidWindow<MidQt5Window>* parent)
    {
        this->parent = parent;
    }

    void addMidTab(MidObject *object)
    {
        QWidget* pointer = object->ref<QWidget>();
        addTab(pointer, "demo");
    }
};

#endif // __MIDQT5TAB__
