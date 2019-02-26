#ifndef CHECKBOX_H
#define CHECKBOX_H

#include <iostream>
#include "mid-check-box.h"
#include "mid-qt5-check-box.h"

/*!
 * \brief The CheckBox class
 */
class CheckBox: public MidCheckBox<MidQt5CheckBox>
{
public:
    /*!
     * \brief CheckBox
     * \param midID
     * \param title
     * \param parent
     */
    CheckBox
    (
        long long int midID = 0,
        const char *title = "",
        MidObject parent = nullptr
    ):
        MidCheckBox<MidQt5CheckBox>(midID, title, parent){}
};

#endif // CHECKBOX_H
