#ifndef __MID_QT5_RADIO_BUTTON__
#define __MID_QT5_RADIO_BUTTON__

#include <QRadioButton>
#include "mid-window.h"
#include "mid-qt5-window.h"

/*!
 * \brief The MidQt5RadioButton class
 */
class MidQt5RadioButton: public QRadioButton
{
public:
    /*!
     * \brief MidQt5RadioButton
     * \param id
     * \param title
     * \param parent
     */
    MidQt5RadioButton(Id id = 0,
                      const std::string &title = "",
                      MidObject parent = nullptr):
        QRadioButton (QString(title.c_str()), static_cast<QWidget*>(parent.get())){}
};


#endif // __MID_QT5_RADIO_BUTTON__
