#ifndef MID_QT5_SCROLL_AREA_H
#define MID_QT5_SCROLL_AREA_H

#include <QScrollArea>
#include "mid-qt5-window.h"

#include "mid-window.h"

/*!
 * \brief The MidQt5ScrollArea class
 */
class MidQt5ScrollArea: public QScrollArea
{
public:
    /*!
     * \brief MidQt5ScrollArea
     * \param id
     * \param parent
     */
    MidQt5ScrollArea(Id id = 0,
                 MidObject parent = nullptr):
        QScrollArea(static_cast<QWidget*>(parent.get()))
    {
        this->setWidgetResizable( true );

        this->setVerticalScrollBarPolicy( Qt::ScrollBarAlwaysOn );
    }

    void setComponent(MidObject component)
    {
        QWidget *comp = static_cast<QWidget*>(component.get());
        if (comp) setWidget(comp);
    }

    void setMidGeometry(int originX, int originY, int width, int height)
    {
        this->setGeometry(originX, originY, width, height);
    }
};

#endif /* MID_QT5_SCROLL_AREA_H */
