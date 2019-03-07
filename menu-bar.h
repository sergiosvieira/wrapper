#ifndef MENU_BAR_H
#define MENU_BAR_H

#include <iostream>
#include "mid-menu-bar.h"
#include "mid-qt5-menu-bar.h"

/*!
 * \brief The MenuBar class
 */
class MenuBar: public MidMenuBar<MidQt5MenuBar>
{
public:
    /*!
     * \brief MenuBar
     * \param midID
     * \param parent
     */
    MenuBar
    (
        Id midID = 0,
            MidObject parent = {}
    ):
        MidMenuBar<MidQt5MenuBar>(midID, parent) {}
};

#endif // MENU_BAR_H
