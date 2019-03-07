#ifndef PANEL_H
#define PANEL_H

#include <iostream>
#include "mid-panel.h"
#include "mid-qt5-panel.h"

#include "window.h"

/*!
 * \brief The Panel class
 */
class Panel: public MidPanel<MidQt5Panel>
{
public:
    /*!
     * \brief Panel
     * \param parent
     * \param width
     * \param height
     */
    Panel
    (
        int width = 600,
        int height = 800,
        MidObject parent = {}
    ):
            MidPanel<MidQt5Panel>(width, height, parent)
        {}
};

#endif // PANEL_H
