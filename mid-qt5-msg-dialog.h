#ifndef __MID_QT5_MSG_DIALOG__
#define __MID_QT5_MSG_DIALOG__

#include <QMessageBox>

class MidQt5MsgDialog: public QMessageBox
{
    QMessageBox m;
public:
    MidQt5MsgDialog() {}
    MidQt5MsgDialog(MidWindow<MidQt5Window> *parent,
                    const char* title, 
                    const char * text)
    {
        m.setWindowTitle(title);
        m.setText(text);
    }
    void setText(const char *text)
    {
        m.setText(text);
    }
    void setTitle(const char *title)
    {
        m.setWindowTitle(title);
    }
    void show()
    {
        m.exec();
    }
};

#endif /* __MID_QT5_MSG_DIALOG__ */
