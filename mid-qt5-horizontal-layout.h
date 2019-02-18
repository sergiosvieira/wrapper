#ifndef __MID_QT5_HORIZONTALLAYOUT__
#define __MID_QT5_HORIZONTALLAYOUT__

#include <QHBoxLayout>
#include <QWidget>
#include <QPushButton>
#include "mid-object.h"

class MidQt5HorizontalLayout: public QHBoxLayout
{
public:
    MidQt5HorizontalLayout():
        QHBoxLayout(){}
    void add(MidObject *object)
    {
        QWidget* widget = object->ref<QWidget>();
        if (widget != nullptr) addWidget(widget);
    }
    void addMidLayout(MidObject *object)
    {
        QLayout* layout = object->ref<QLayout>();
        if (layout != nullptr) addLayout(layout);
    }
    ~MidQt5HorizontalLayout() {}
};


#endif // __MID_QT5_HORIZONTALLAYOUT__
