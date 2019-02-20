#ifndef MIDQTVERTICALLAYOUT_H
#define MIDQTVERTICALLAYOUT_H

#include <QVBoxLayout>
#include <QWidget>
#include <QPushButton>
#include <QMenuBar>
#include "mid-object.h"

class MidQt5VerticalLayout: public QVBoxLayout
{
public:
    MidQt5VerticalLayout():
        QVBoxLayout(){}
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
    ~MidQt5VerticalLayout() {}

    void setMidMenuBar(QMenuBar * menubar)
    {
        this->setMenuBar(menubar);
    }
};

#endif // MIDQTVERTICALLAYOUT_H
