#ifndef __MIDQT5PANEL__
#define __MIDQT5PANEL__

#include <QtWidgets>
#include <QString>
#include <iostream>
#include <memory>
#include "mainwindow.h"

using std::cout;

class MidQt5Panel: public QWidget
{
    Q_OBJECT
public:
    explicit MidQt5Panel(int width,
                          int height,
                          QWidget *parent = 0)
    {
        this->setParent(parent);
        this->resize(width, height);
    }

    void show();
    ~MidQt5Panel() {}

    void setMidLayout(QLayout* layout)
    {
        setLayout(layout);
    }
};

#endif // __MIDQT5PANEL__
