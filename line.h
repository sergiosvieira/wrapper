#ifndef LINE_H
#define LINE_H

#include <iostream>
#include "mid-line.h"
#include "mid-qt5-line.h"

/*!
 * \brief The Line class
 */
class Line: public MidLine<MidQt5Line>
{
public:
    /*!
     * \brief Line
     * \param id
     * \param lineType
     * \param parent
     */
    Line(Id id = 0,
         MidLineType lineType = MidLineType::VERTICAL,
         MidObject parent = nullptr):
        MidLine<MidQt5Line>(id, lineType, parent){}
};

#endif // LINE_H
