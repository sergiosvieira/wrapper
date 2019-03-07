#ifndef MID_LINE_H
#define MID_LINE_H

#include "mid-object.h"
#include "mid-window.h"

#include "definitions.h"

/*!
 * \brief MidLine Template
 */
template <class T>
class MidLine : public MidObject
{
public:
    /*!
     * \brief MidLine
     * \param id
     * \param lineType
     * \param parent
     */
    MidLine(Id id = 0,
            MidLineType lineType = MidLineType::VERTICAL,
            MidObject parent = {}):
        MidObject(new T{id, lineType, parent}){}
};

#endif /* MID_LINE_H */
