#ifndef __MIDQT5TEXTEDIT__
#define __MIDQT5TEXTEDIT__

#include <QPlainTextEdit>
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5TextEdit: public QPlainTextEdit
{
private:
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    MidQt5TextEdit(MidWindow<MidQt5Window>* parent = nullptr,
                 long long int midID = 0,
                 const char *title = ""):
        QPlainTextEdit (title, (parent != nullptr) ? parent->get() : nullptr)
    {
    }
    MidQt5TextEdit(MidWindow<MidQt5Window>* parent = nullptr,
                 long long int midID = 0):
        QPlainTextEdit ((parent != nullptr) ? parent->get() : nullptr)
    {
    }

    const char * getText()
    {
        QString text = this->toPlainText();
        return text.toStdString().c_str();
    }

    void setMidText(const char *caption)
    {
        setPlainText(QString(caption));
    }
    void setParent(MidWindow<MidQt5Window>* parent)
    {
        this->parent = parent;
    }
};

#endif // __MIDQT5TEXTEDIT__
