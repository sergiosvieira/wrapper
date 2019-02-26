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
        const char *title = "",
        MidObject parent = nullptr
    ):
        QCheckBox(title, static_cast<QWidget*>(parent.get()))
    {
    }
    MidQt5CheckBox();
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
