#ifndef MENU_H
#define MENU_H

#include <iostream>
#include "mid-menu.h"
#include "mid-qt5-menu.h"

/*!
 * \brief The Menu class
 */
class Menu: public MidMenu<MidQt5Menu>
{
public:
    /*!
     * \brief Menu
     * \param midID
     * \param title
     * \param parent
     */
    Menu
    (
        Id id = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        MidMenu<MidQt5Menu>(id, title, parent) {}
};

#endif // MENU_H
