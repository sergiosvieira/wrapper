#ifndef __PANEL__
#define __PANEL__

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
        MidObject parent = nullptr
    ):
            MidPanel<MidQt5Panel>(width, height, parent)
        {}
};

#endif // __PANEL__
