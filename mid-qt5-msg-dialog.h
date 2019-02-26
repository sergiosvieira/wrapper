#ifndef __MID_QT5_MSG_DIALOG__
#define __MID_QT5_MSG_DIALOG__

#include <QMessageBox>
#include "mid-qt5-window.h"

/*!
 * \brief The MidQt5MsgDialog class
 */
class MidQt5MsgDialog: public QMessageBox
{
    QMessageBox m;
public:
    /*!
     * \brief MidQt5MsgDialog
     */
    MidQt5MsgDialog() {}

    /*!
     * \brief MidQt5MsgDialog
     * \param parent
     * \param title
     * \param text
     */
    MidQt5MsgDialog(MidWindow<MidQt5Window> *parent,
                    const char* title, 
                    const char * text)
    {
        m.setWindowTitle(title);
        m.setText(text);
    }

    /*!
     * \brief setText
     * \param text
     */
    void setText(const char *text)
    {
        m.setText(text);
    }

    /*!
     * \brief setTitle
     * \param title
     */
    void setTitle(const char *title)
    {
        m.setWindowTitle(title);
    }

    /*!
     * \brief show
     */
    void show()
    {
        m.exec();
    }
};

#endif /* __MID_QT5_MSG_DIALOG__ */
