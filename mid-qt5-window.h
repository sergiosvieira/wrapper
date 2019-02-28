#ifndef __MID_QT5_WINDOW__
#define __MID_QT5_WINDOW__

#include <QtWidgets>
#include <QString>
#include <iostream>
#include <memory>
#include "mainwindow.h"
#include "mid-object.h"
#include <QMenuBar>

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

    void setMidMenuBar(MidObject menuBar)
    {
        QMenuBar *obj = static_cast<QMenuBar*>(menuBar.get());
        if (obj && this->layout())
        {
            this->layout()->setMenuBar(obj);
        }
    }
};

#endif /* __MID_QT5_WINDO__ */
