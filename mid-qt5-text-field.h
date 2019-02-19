#ifndef MIDQT5TEXTFIELD_H
#define MIDQT5TEXTFIELD_H

#include <QLineEdit>
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5TextField: public QLineEdit
{
private:
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    MidQt5TextField(MidWindow<MidQt5Window>* parent = nullptr,
                 long long int midID = 0,
                 const char *title = ""):
        QLineEdit (title, (parent != nullptr) ? parent->get() : nullptr)
    {
    }
    MidQt5TextField(MidWindow<MidQt5Window>* parent = nullptr,
                 long long int midID = 0):
        QLineEdit ((parent != nullptr) ? parent->get() : nullptr)
    {
    }

    const char * getText()
    {
        QString text = this->text();
        return text.toStdString().c_str();
    }

    void setMidText(const char *caption)
    {
        setText(QString(caption));
    }
    void setParent(MidWindow<MidQt5Window>* parent)
    {
        this->parent = parent;
    }
};

#endif // MIDQT5TEXTFIELD_H
