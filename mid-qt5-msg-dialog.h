#ifndef __MID_QT5_MSG_DIALOG__
#define __MID_QT5_MSG_DIALOG__

#include <QMessageBox>
#include "mid-qt5-window.h"

class MidQt5MsgDialog: public QMessageBox
{
public:
    MidQt5MsgDialog
    (
        Id id = 0,
        const std::string &title = "",
        const std::string &text = "",
        MidObject parent = nullptr
    ):
        QMessageBox(
            QMessageBox::Icon::Information,
            title.c_str(),
            text.c_str(),
            NoButton,
            static_cast<QWidget*>(parent.get())
            )
    {
    }
    void setMidText(const std::string &text)
    {
        this->setText(text.c_str());
    }
    void setMidTitle(const std::string &title)
    {
        this->setWindowTitle(title.c_str());
    }
    void show()
    {
        this->exec();
    }
};

#endif /* __MID_QT5_MSG_DIALOG__ */
