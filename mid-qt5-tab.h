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
        //this->addTab(new QWidget(),"TAB 1");
        //this->addTab(new QWidget(),"TAB 2");
    }

    void setParent(MidWindow<MidQt5Window>* parent)
    {
        this->parent = parent;
    }

    void addMidTab(MidObject *object)
    {
        QPushButton *button = object->ref<QPushButton>();
        QVBoxLayout *layout = new QVBoxLayout();
        layout->addWidget(button);
        QWidget *widget = new QWidget();
        widget->setLayout(layout);
        this->addTab(widget, "Button Tab");
    }
};

#endif // __MIDQT5TAB__
