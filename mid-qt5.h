#ifndef __MID_QT5__
#define __MID_QT5__

#include <QtWidgets>
#include <memory>

class MidQt5
{
    QApplication *a = nullptr;
public:
    MidQt5()
    {
        MidQt5(800, 600);
    }
    MidQt5(int width, int height)
    {
        int argc = 0;
        QApplication a(argc, nullptr);
        this->a = &a;
        QWidget w;
        w.show();
    }
    void show()
    {
        a->exec();
    }
    ~MidQt5(){}
};

#endif /* __MID_QT5__ */
