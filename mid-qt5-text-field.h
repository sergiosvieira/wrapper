#ifndef MIDQT5TEXTFIELD_H
#define MIDQT5TEXTFIELD_H

#include <QLineEdit>
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5TextField: public QLineEdit
{
public:
    MidQt5TextField(Id id = 0,
                    const std::string &text = "",
                    MidObject parent = nullptr):
        QLineEdit (QString(text.c_str()), static_cast<QWidget*>(parent.get())){}
    std::string getMidText()
    {
        return this->text().toStdString().c_str();
    }
    void setMidText(const std::string &text)
    {
        setText(QString(text.c_str()));
    }
};

#endif // MIDQT5TEXTFIELD_H
