#ifndef __MID_QT5_WINDOW__
#define __MID_QT5_WINDOW__

#include <QtWidgets>
#include <QString>
#include <memory>
#include "mainwindow.h"

class MidQt5Button;

class MidQt5Window: public QWidget
{
    Q_OBJECT
public:
    explicit MidQt5Window(int width,
                          int height,
                          const char * title,
                          QWidget *parent = 0);
    void show();
    ~MidQt5Window();
};

#endif /* __MID_QT5_WINDO__ */
