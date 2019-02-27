#ifndef TAB_H
#define TAB_H

#include <iostream>
#include "mid-tab.h"
#include "mid-qt5-tab.h"

#include "window.h"

/*!
 * \brief The Tab class
 */
class Tab: public MidTab<MidQt5Tab>
{
public:
    /*!
     * \brief Tab
     * \param id
     * \param title
     * \param parent
     */
    Tab(Id id = 0,
        const std::string &title = "",
        MidObject parent = nullptr):
        MidTab<MidQt5Tab>(id, title, parent){}
};

#endif // TAB_H
