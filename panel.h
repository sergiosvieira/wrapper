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
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    /*!
     * \brief Panel
     * \param parent
     * \param width
     * \param height
     */
    Panel(MidWindow<MidQt5Window>* parent = nullptr,
          int width = 600,
          int height = 800):
            MidPanel<MidQt5Panel>(parent, width, height)
        {}
};

#endif // __PANEL__
