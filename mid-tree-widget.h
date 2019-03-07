#ifndef MID_TREE_WIDGET_H
#define MID_TREE_WIDGET_H

#include "mid-object.h"
#include "mid-window.h"

/*!
 * \brief MidTreeWidget Template
 */
template <class T>
class MidTreeWidget : public MidObject
{
public:
    /*!
     * \brief MidTreeWidget
     * \param id
     * \param parent
     */
    MidTreeWidget(Id id = 0,
                  int nColumns = 0,
                  const std::vector<std::string>& titles = {},
              MidObject parent = {}):
        MidObject(new T{id, nColumns, titles, parent}){}
};

#endif /* MID_TREE_WIDGET_H */
