#ifndef SCROLL_AREA_H
#define SCROLL_AREA_H

#include "mid-scroll-area.h"
#include "mid-qt5-ScrollArea.h"


/*!
 * \brief The ScrollArea class
 */
class ScrollArea: public MidScrollArea<MidQt5ScrollArea>
{
public:
    /*!
     * \brief ScrollArea
     * \param id
     * \param parent
     */
    ScrollArea(Id id = 0,
           MidObject parent = nullptr):
        MidScrollArea<MidQt5ScrollArea>(id, parent){}
};

#endif // SCROLL_AREA_H
