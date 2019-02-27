#ifndef __MID_QT5_CHECK_BOX__
#define __MID_QT5_CHECK_BOX__

#include <QCheckBox>
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5CheckBox: public QCheckBox
{
public:
    MidQt5CheckBox
    (
        Id midID = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        QCheckBox(title.c_str(), static_cast<QWidget*>(parent.get()))
    {
    }
    void setCaption(const char *caption)
    {
        this->setText(caption);
    }

    void setButtonText(const char *caption)
    {
        setText(QString(caption));
    }
};

#endif /* __MID_QT5_CHECKBOX__ */
