#ifndef __MID_QT5__
#define __MID_QT5__

#include <QtWidgets>
#include <memory>
#include "mainwindow.h"
#include "Midqt5button.h"

class MidQt5
{
    QApplication *a = nullptr;

    //MainWindow* w = nullptr;
    QWidget* w = nullptr;
    QVBoxLayout *vlay = nullptr;
public:
    MidQt5()
    {
        MidQt5(800, 600);
    }
    MidQt5(int width, int height)
    {
        int argc = 0;
        a = new QApplication(argc, nullptr);
        w = new QWidget();
        w->show();

        //QWidget w;
        //w.show();
    }

    void addButton(int x, int y, MidQt5Button button)
    {
        vlay = new QVBoxLayout(w);
        QPushButton *btn1 = new QPushButton("btn1");
        vlay->addWidget(btn1);
        //w->layout()->addWidget(btn1);
        btn1->show();

        /*
        vlay = new QVBoxLayout(w);
        QPushButton *btn1 = new QPushButton("btn1");
        vlay->addWidget(btn1);
        btn1->show();
         */
    }

    void show()
    {
        //a = QCoreApplication::instance();
        a->exec();
    }
    ~MidQt5()
    {
        if (w == nullptr) delete w;
    }
};

#endif /* __MID_QT5__ */
