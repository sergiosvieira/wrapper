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
    QPushButton *btn1 = nullptr;
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
        w->resize(width, height);
        vlay = new QVBoxLayout(w);
        w->setLayout(vlay);
        w->show(); //estava on

        //QWidget w;
        //w.show();
    }

    void addButton(int x, int y, MidQt5Button button)
    {
        /*vlay = new QVBoxLayout(w);
        QPushButton *btn1 = new QPushButton("btn1");
        vlay->addWidget(btn1);
        //w->layout()->addWidget(btn1);
        btn1->show();*/

        //not working
        /*btn1 = new QPushButton("btn1");
        w->layout()->addWidget(btn1);
        btn1->show();
        w->update();*/

        //not working
        /*vlay = new QVBoxLayout();
        btn1 = new QPushButton(w);
        vlay->addWidget(btn1);
        w->setLayout(vlay);*/

        /*btn1 = new QPushButton("One");
        QHBoxLayout *layout = new QHBoxLayout;
        layout->addWidget(btn1);
        w->setLayout(layout);*/


        //w->layout()->addWidget(btn1);
        //btn1->show();
        //w->update();


        //producing two frames
        /*vlay = new QVBoxLayout(w);
        QPushButton *btn1 = new QPushButton("btn1");
        vlay->addWidget(btn1);
        //btn1->show();*/

        QPushButton *btn1 = new QPushButton("btn1");
        w->layout()->addWidget(btn1);

    }

    void show()
    {
        //a = QCoreApplication::instance();
        //w->show();
        a->exec();
    }
    ~MidQt5()
    {
        if (w == nullptr) delete w;
        if (btn1 == nullptr) delete btn1;
    }
};

#endif /* __MID_QT5__ */
