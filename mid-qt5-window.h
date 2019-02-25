#ifndef __MID_QT5_WINDOW__
#define __MID_QT5_WINDOW__

#include <QtWidgets>
#include <QString>
#include <iostream>
#include <memory>
#include "mainwindow.h"
#include "mid-object.h"

using std::cout;

class MidQt5Button;

class MidQt5Window: public QWidget
{
    Q_OBJECT
public:
    explicit MidQt5Window(int width,
                          int height,
                          const std::string &title,
                          MidObject parent);
    void show();
    void setMidLayout(MidObject layout)
    {
        setLayout(static_cast<QLayout*>(layout.get()));
    }
};

#endif /* __MID_QT5_WINDO__ */
