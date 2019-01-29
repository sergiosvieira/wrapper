#ifndef __MID_QT5__
#define __MID_QT5__

#include <QtWidgets>
#include <memory>
#include "mainwindow.h"

class MidQt5
{
    QApplication *a = nullptr;

    MainWindow* w = nullptr;
public:
    MidQt5()
    {
        MidQt5(800, 600);
    }
    MidQt5(int width, int height)
    {
        int argc = 0;
        a = new QApplication(argc, nullptr);
        w = new MainWindow();
        w->show();

        //QWidget w;
        //w.show();
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
