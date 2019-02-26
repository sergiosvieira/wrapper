#ifndef __MENUBAR__
#define __MENUBAR__

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
        MidObject parent = nullptr
    ):
        MidMenuBar<MidQt5MenuBar>(midID, parent) {}
};

#endif // __MENUBAR__
