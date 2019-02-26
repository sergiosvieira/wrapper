#ifndef __MIDQT5ACTION__
#define __MIDQT5ACTION__

#include <QAction>
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5Action: public QAction
{
public:
    MidQt5Action
    (
        Id id = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        QAction (QString(title.c_str()), static_cast<QWidget*>(parent.get()))
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
