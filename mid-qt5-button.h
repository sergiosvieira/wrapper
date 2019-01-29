#ifndef __MID_QT5_BUTTON__
#define __MID_QT5_BUTTON__

#include <QPushButton>

class MidQt5Button: public QPushButton
{
public:
    MidQt5Button();
    void setCaption(const char *caption)
    {
        this->setText(QString(caption));
    }
};

#endif /* __MID_QT5_BUTTON__ */
