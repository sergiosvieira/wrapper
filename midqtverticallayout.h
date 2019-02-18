#ifndef MIDQTVERTICALLAYOUT_H
#define MIDQTVERTICALLAYOUT_H

#include <QVBoxLayout>
#include <QWidget>
#include <QPushButton>
#include "mid-object.h"

class MidQtVerticalLayout: public QVBoxLayout
{
public:
    MidQtVerticalLayout():
        QVBoxLayout()
    {}

    void add(MidObject *widget)
    {
        //QWidget* wid = dynamic_cast<QWidget*>(widget);
        //QWidget* wid = (QWidget*)widget;
        QWidget* wid = widget->ref<QPushButton>();
        if (wid != nullptr)
            addWidget(wid);
    }

    /*void add(QWidget* widget)
    {
        addWidget(widget);
    }*/

    ~MidQtVerticalLayout() {}
};

#endif // MIDQTVERTICALLAYOUT_H
