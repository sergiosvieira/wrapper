#ifndef BUTTON_H
#define BUTTON_H

#include <iostream>
#include "mid-button.h"
#include "mid-qt5-button.h"


/*!
 * \brief The Button class
 */
class Button: public MidButton<MidQt5Button>
{
public:
    /*!
     * \brief Button
     * \param id
     * \param title
     * \param parent
     */
    Button(Id id = 0,
           const std::string &title = "",
           MidObject parent = {}):
        MidButton<MidQt5Button>(id, title, parent){}
};

#endif // BUTTON_H
