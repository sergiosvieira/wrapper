#ifndef MID_QT5_COLORS_H
#define MID_QT5_COLORS_H

#include <QColor>
#include "mid-color.h"

/*!
 * \brief The MidQt5ColorRed struct
 */
struct MidQt5ColorRed: MidColor<QColor>
{
    QColor getColor() const override
    {
        return Qt::red;
    }
};
/*!
 * \brief The MidQt5ColorGreen struct
 */
struct MidQt5ColorGreen: MidColor<QColor>
{
    QColor getColor() const override
    {
        return Qt::green;
    }
};
/*!
 * \brief The MidQt5ColorBlue struct
 */
struct MidQt5ColorBlue: MidColor<QColor>
{
    QColor getColor() const override
    {
        return Qt::blue;
    }
};
/*!
 * \brief The MidQt5ColorWhite struct
 */
struct MidQt5ColorWhite: MidColor<QColor>
{
    QColor getColor() const override
    {
        return Qt::white;
    }
};

/*!
 * \brief The MidQt5ColorBlack struct
 */
struct MidQt5ColorBlack: MidColor<QColor>
{
    QColor getColor() const override
    {
        return Qt::black;
    }
};
#endif // MID_QT5_COLORS_H
