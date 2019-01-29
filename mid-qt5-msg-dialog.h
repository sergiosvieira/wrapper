#ifndef __MID_QT5_MSG_DIALOG__
#define __MID_QT5_MSG_DIALOG__

#include <QMessageBox>

class MidQt5MsgDialog: public QMessageBox
{
    QMessageBox m;
public:
    MidQt5MsgDialog() {}
    MidQt5MsgDialog(const char * text)
    {
        m.setText(text);
    }
    void setText(const char *text)
    {
        m.setText(text);
    }
    void show()
    {
        m.exec();
    }
};

#endif /* __MID_QT5_MSG_DIALOG__ */
