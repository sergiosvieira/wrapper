#ifndef __MIDQT5PANEL__
#define __MIDQT5PANEL__

#include <QtWidgets>
#include <QString>
#include <iostream>
#include <memory>
#include "mainwindow.h"
#include "mid-window.h"
#include "mid-qt5-window.h"

using std::cout;

class MidQt5Panel: public QWidget
{
    Q_OBJECT
public:
    explicit MidQt5Panel(MidWindow<MidQt5Window>* parent = nullptr,
                         int width = 600,
                          int height = 800
                          )
    {
        this->setParent((parent != nullptr) ? parent->get() : nullptr);
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
