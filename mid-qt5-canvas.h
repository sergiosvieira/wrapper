#ifndef MID_QT5_CANVAS_H
#define MID_QT5_CANVAS_H

#include <QPixmap>
#include <QPainter>
#include <QWidget>
#include "mid-object.h"
#include "mid-color.h"

/*!
 * \brief The MidQt5Canvas class
 */
class MidQt5Canvas: public QPixmap
{
    MidObject parent = nullptr;
public:
    /*!
     * \brief MidQt5Canvas
     * \param width
     * \param height
     * \param object
     */
    MidQt5Canvas(int width,
                 int height,
                 MidObject parent = nullptr):
        QPixmap(width, height),
        parent(parent){}
    /*!
     * \brief midFill
     * \param color
     */
    void midFill(MidObject color)
    {
        if (parent)
        {
            MidColor<QColor> *c = static_cast<MidColor<QColor>*>(color.get());
            this->fill(c->getColor());
            QPainter painter(this);
            QWidget *widget = static_cast<QWidget*>(this->parent.get());
            painter.initFrom(widget);
        }
    }
};

#endif // MID_QT5_CANVAS_H
