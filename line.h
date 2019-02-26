#ifndef __LINE_H__
#define __LINE_H__

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
     * \param parent
     * \param midID
     * \param lineType
     */
    Line(Id id = 0,
         MidLineType lineType = MidLineType::VERTICAL,
         MidObject parent = nullptr):
        MidLine<MidQt5Line>(id, lineType, parent){}
};

#endif // __LINE_H__
