#ifndef MIDQT5TEXTLABEL_H
#define MIDQT5TEXTLABEL_H

#include <QLineEdit>
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5TextLabel: public QLabel
{
private:
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    MidQt5TextLabel(MidWindow<MidQt5Window>* parent = nullptr,
                 long long int midID = 0,
                 const char *text = ""):
        QLabel (text, (parent != nullptr) ? parent->get() : nullptr)
    {
    }
    MidQt5TextLabel(MidWindow<MidQt5Window>* parent = nullptr,
                 long long int midID = 0):
        QLabel ((parent != nullptr) ? parent->get() : nullptr)
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

#endif // MIDQT5TEXTLABEL_H
