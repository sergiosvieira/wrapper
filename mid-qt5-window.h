#ifndef __MID_QT5_WINDOW__
#define __MID_QT5_WINDOW__

#include <QtWidgets>
#include <QString>
#include <memory>
#include "mainwindow.h"
//#include "mid-qt5-button.h"

class MidQt5Button;

class MidQt5Window: public QWidget
{
    Q_OBJECT
public:
    explicit MidQt5Window(int width,
                          int height,
                          const char * title,
                          QWidget *parent = 0);
    /*{
        this->setParent(parent);
        this->resize(width, height);
        this->setWindowTitle(QString(title));
    }*/

    void addButton(MidQt5Button *button);
    /*{
        if (this->layout() == nullptr)
        {
            this->setLayout(new QVBoxLayout());
        }
        this->layout()->addWidget(button);
    }*/

    void show();
    /*{
        this->setVisible(true);
    }*/

    ~MidQt5Window();
    /*{
    }*/
};

#endif /* __MID_QT5_WINDO__ */
