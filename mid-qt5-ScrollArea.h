#ifndef MID_QT5_SCROLL_AREA_H
#define MID_QT5_SCROLL_AREA_H

#include <QScrollArea>
#include "mid-qt5-window.h"

#include "mid-window.h"
#include "definitions.h"

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

    void setMidScrollBarPolicy(MidScrollBarPolicy policy)
    {
        if (policy == MidScrollBarPolicy::AlwaysOn)
            this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        else if (policy == MidScrollBarPolicy::AlwaysOff)
            this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        else
            this->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    }
};

#endif /* MID_QT5_SCROLL_AREA_H */
