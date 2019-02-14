#ifndef __MID_QT5_APP__
#define __MID_QT5_APP__

#include <QtWidgets>
#include <iostream>

using std::cout;

class MidQt5App: public QApplication
{
    //QApplication *app = nullptr;
public:
    MidQt5App(int argc, char **argv):
        QApplication(argc, argv){}
    bool notify(QObject *receiver, QEvent *event) override
    {
        QApplication::notify(receiver, event);
    }
    int execute()
    {
        return this->exec();
    }
};

#endif /* __MID_QT5_APP__ */
