#ifndef MID_QT5_TEXT_LABEL_H
#define MID_QT5_TEXT_LABEL_H

#include <QLineEdit>
#include "mid-qt5-window.h"
#include "mid-color.h"
#include "mid-window.h"

/*!
 * \brief The MidQt5TextLabel class
 */
class MidQt5TextLabel: public QLabel
{
public:
    /*!
     * \brief MidQt5TextLabel
     * \param d
     * \param text
     * \param parent
     */
    MidQt5TextLabel(Id d  = 0,
                    const std::string &text = "",
                    MidObject parent = {}):
        QLabel (QString(text.c_str()), static_cast<QWidget*>(parent.get())){}

    /*!
     * \brief getMidText
     * \return
     */
    std::string getMidText()
    {
        QString text = this->text();
        return text.toStdString().c_str();
    }
    /*!
     * \brief setMidText
     * \param text
     */
    void setMidText(const std::string &text)
    {
        setText(QString(text.c_str()));
    }
    /*!
     * \brief setMidTextColor
     * \param color
     */
    void setMidTextColor(MidObject color)
    {
        QPalette p = this->palette();
        MidColor<QColor> *c = static_cast<MidColor<QColor>*>(color.get());
        p.setColor(this->foregroundRole(), c->getColor());
        this->setPalette(p);
    }
};

#endif // MID_QT5_TEXT_LABEL_H
