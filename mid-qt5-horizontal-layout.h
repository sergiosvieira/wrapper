#ifndef __MID_QT5_HORIZONTALLAYOUT__
#define __MID_QT5_HORIZONTALLAYOUT__

#include <QHBoxLayout>
#include <QWidget>
#include <QPushButton>
#include <QMenuBar>
#include "mid-object.h"

class MidQt5HorizontalLayout: public QHBoxLayout
{
public:
    MidQt5HorizontalLayout():
        QHBoxLayout(){}
    void add(MidObject object)
    {
        QWidget* widget = static_cast<QWidget*>(object.get());
        if (widget != nullptr) addWidget(widget);
    }
    void addMidLayout(MidObject object)
    {
        QLayout* layout = static_cast<QLayout*>(object.get());
        if (layout != nullptr) addLayout(layout);
    }
    ~MidQt5HorizontalLayout() {}

    void setMidMenuBar(QMenuBar* menuBar)
    {
        this->setMenuBar(menuBar);
    }
};


#endif // __MID_QT5_HORIZONTALLAYOUT__
