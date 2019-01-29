#ifndef __MID_QT5_APP__
#define __MID_QT5_APP__

#include <QtWidgets>

class MidQt5App
{
    QApplication *app = nullptr;
public:
    MidQt5App(int argc, char **argv)
    {
        this->app = new QApplication(argc, argv);
    }
    int execute()
    {
        return this->app->exec();
    }
};

#endif /* __MID_QT5_APP__ */
