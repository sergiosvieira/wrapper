#ifndef __MID_QT5_CHECK_BOX__
#define __MID_QT5_CHECK_BOX__

#include <QCheckBox>
#include "mid-qt5-window.h"

#include "mid-window.h"

/*!
 * \brief The MidQt5CheckBox class
 */
class MidQt5CheckBox: public QCheckBox
{
public:
    /*!
     * \brief MidQt5CheckBox
     * \param midID
     * \param title
     * \param parent
     */
    MidQt5CheckBox
    (
        Id midID = 0,
        const char *title = "",
        MidObject parent = nullptr
    ):
        QCheckBox(title, static_cast<QWidget*>(parent.get()))
    {
    }
    /*!
     * \brief MidQt5CheckBox
     */
    MidQt5CheckBox();
    /*!
     * \brief setCaption
     * \param caption
     */
    void setCaption(const char *caption)
    {
        this->setText(caption);
    }
    /*!
     * \brief setButtonText
     * \param caption
     */
    void setButtonText(const char *caption)
    {
        setText(QString(caption));
    }
};

#endif /* __MID_QT5_CHECKBOX__ */
