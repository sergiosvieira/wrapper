#ifndef __MIDQT5ACTION__
#define __MIDQT5ACTION__

#include <QAction>
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5Action: public QAction
{
public:
    MidQt5Action(MidObject parent = nullptr,
                 long long int midID = 0,
                 const char *title = ""):
        QAction (title, static_cast<QWidget*>(parent.get()))
    {
    }

    void setCaption(const char *caption)
    {
        this->setText(caption);
    }

    void setActionText(const char *caption)
    {
        setText(QString(caption));
    }
};

#endif // __MIDQT5ACTION__
