#ifndef __MID_LINE__
#define __MID_LINE__

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
            MidObject parent = nullptr):
        MidObject(new T{id, lineType, parent}){}
};

#endif /* __MID_LINE__ */
