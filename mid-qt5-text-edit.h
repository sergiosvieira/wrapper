#ifndef __MIDQT5TEXTEDIT__
#define __MIDQT5TEXTEDIT__

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
        MidObject parent = nullptr
    ):
        QPlainTextEdit (title.c_str(), static_cast<QWidget*>(parent.get()))
    {
    }

    std::string getText()
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

#endif // __MIDQT5TEXTEDIT__
