#ifndef MID_QT5_TEXT_EDIT_H
#define MID_QT5_TEXT_EDIT_H

#include <QPlainTextEdit>
#include "mid-qt5-window.h"

#include "mid-window.h"

/*!
 * \brief The MidQt5TextEdit class
 */
class MidQt5TextEdit: public QPlainTextEdit
{
public:
    /*!
     * \brief MidQt5TextEdit
     * \param midID
     * \param title
     * \param parent
     */
    MidQt5TextEdit
    (
        Id midID = 0,
        const std::string &title = "",
        MidObject parent = {}
    ):
        QPlainTextEdit (title.c_str(), static_cast<QWidget*>(parent.get())){}
    /*!
     * \brief getMidText
     * \return
     */
    std::string getMidText()
    {
        QString text = this->toPlainText();
        return text.toStdString();
    }

    /*!
     * \brief setMidText
     * \param caption
     */
    void setMidText(const std::string &caption)
    {
        setPlainText(QString(caption.c_str()));
    }
};

#endif // MID_QT5_TEXT_EDIT_H
