#ifndef MIDQT5TEXTLABEL_H
#define MIDQT5TEXTLABEL_H

#include <QLineEdit>
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5TextLabel: public QLabel
{
public:
    MidQt5TextLabel(Id d  = 0,
                    const std::string &text = "",
                    MidObject parent = nullptr):
        QLabel (QString(text.c_str()), static_cast<QWidget*>(parent.get())){}
    std::string getMidText()
    {
        QString text = this->text();
        return text.toStdString().c_str();
    }
    void setMidText(const std::string &text)
    {
        setText(QString(text.c_str()));
    }
};

#endif // MIDQT5TEXTLABEL_H
