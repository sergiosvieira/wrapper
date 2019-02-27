//MidWindow<MidQt5Window> *base1 = new MidWindow<MidQt5Window>(0,0,"h1");

#ifndef __TABPAGE__
#define __TABPAGE__

#include <iostream>
#include "mid-window.h"
#include "mid-button.h"
#include "mid-qt5-button.h"

#include "window.h"

/*!
 * \brief The TabPage class
 */
class TabPage: public MidWindow<MidQt5Window>
{
public:
    /*!
     * \brief TabPage
     * \param midID
     * \param width
     * \param height
     * \param title
     * \param parent
     */
    TabPage
    (
        Id midID = 0,
        int width = 600,
        int height = 800,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        MidWindow<MidQt5Window>(width, height, title, parent) {}
};

#endif // __TABPAGE__
