#ifndef __MID_QT5_WINDOW__
#define __MID_QT5_WINDOW__

#include <QtWidgets>
#include <memory>
#include "mainwindow.h"
#include "mid-qt5-button.h"

class MidQt5Window: public QWidget
{
    Q_OBJECT
public:
    explicit MidQt5Window(int width, int height, QWidget *parent = 0)
    {
        /*QVBoxLayout *vlay = new QVBoxLayout();
        vlay->setSpacing(0);
        vlay->setContentsMargins(0, 0, 0, 0);
        this->setLayout(vlay);*/
        resize(width, height);
    }

    void addButton(MidQt5Button *button)
    {
        QPushButton *btn1 = new QPushButton("btn1");
        if (this->layout() == nullptr)
        {
            this->setLayout(new QVBoxLayout());
        }
        this->layout()->addWidget(btn1);
    }

    void show()
    {
        this->setVisible(true);
    }

    ~MidQt5Window()
    {
    }
};

#endif /* __MID_QT5_WINDO__ */
