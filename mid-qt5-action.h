#ifndef __MIDQT5ACTION__
#define __MIDQT5ACTION__

#include <QAction>
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5Action: public QAction
{
private:
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    MidQt5Action(MidWindow<MidQt5Window>* parent = nullptr,
                 long long int midID = 0,
                 const char *title = ""):
        QAction (title, (parent != nullptr) ? parent->get() : nullptr)
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
    void setParent(MidWindow<MidQt5Window>* parent)
    {
        this->parent = parent;
    }
};

#endif // __MIDQT5ACTION__
