#ifndef MID_QT5_RADIO_BUTTON_H
#define MID_QT5_RADIO_BUTTON_H

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
                      MidObject parent = {}):
        QRadioButton (QString(title.c_str()), static_cast<QWidget*>(parent.get())){}
};


#endif // MID_QT5_RADIO_BUTTON_H
