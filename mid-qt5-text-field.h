#ifndef MID_QT5_TEXT_FIELD_H
#define MID_QT5_TEXT_FIELD_H

#include <QLineEdit>
#include "mid-qt5-window.h"

#include "mid-window.h"

/*!
 * \brief The MidQt5TextField class
 */
class MidQt5TextField: public QLineEdit
{
public:
    /*!
     * \brief MidQt5TextField
     * \param id
     * \param text
     * \param parent
     */
    MidQt5TextField(Id id = 0,
                    const std::string &text = "",
                    MidObject parent = {}):
        QLineEdit (QString(text.c_str()), static_cast<QWidget*>(parent.get())){}

    /*!
     * \brief getMidText
     * \return
     */
    std::string getMidText()
    {
        return this->text().toStdString().c_str();
    }

    /*!
     * \brief setMidText
     * \param text
     */
    void setMidText(const std::string &text)
    {
        setText(QString(text.c_str()));
    }
};

#endif // MID_QT5_TEXT_FIELD_H
