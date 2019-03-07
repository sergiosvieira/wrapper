#ifndef MID_QT5_MSG_DIALOG_H
#define MID_QT5_MSG_DIALOG_H

#include <QMessageBox>
#include "mid-qt5-window.h"

/*!
 * \brief The MidQt5MsgDialog class
 */
class MidQt5MsgDialog: public QMessageBox
{
public:
    /*!
     * \brief MidQt5MsgDialog
     * \param id
     * \param title
     * \param text
     * \param parent
     */
    MidQt5MsgDialog
    (
        Id id = 0,
        const std::string &title = "",
        const std::string &text = "",
            MidObject parent = {}
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

    /*!
     * \brief setText
     * \param text
     */
    void setMidText(const std::string &text)
    {
        this->setText(text.c_str());
    }

    /*!
     * \brief setTitle
     * \param title
     */
    void setMidTitle(const std::string &title)
    {
        this->setWindowTitle(title.c_str());
    }

    /*!
     * \brief show
     */
    void show()
    {
        this->exec();
    }
};

#endif /* MID_QT5_MSG_DIALOG_H */
