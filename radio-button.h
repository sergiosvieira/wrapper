#ifndef RADIO_BUTTON_H
#define RADIO_BUTTON_H

#include "mid-radio-button.h"
#include "mid-qt5-radio-button.h"

/*!
 * \brief The RadioButton class
 */
class RadioButton: public MidRadioButton<MidQt5RadioButton>
{
public:
    /*!
     * \brief RadioButton
     * \param id
     * \param title
     * \param parent
     */
    RadioButton(Id id = 0,
                const std::string &title = "",
                MidObject parent = nullptr):
        MidRadioButton<MidQt5RadioButton>(id, title, parent){}
};

#endif // RADIO_BUTTON_H
