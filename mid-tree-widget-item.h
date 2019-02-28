#ifndef MID_TREE_WIDGET_ITEM_H
#define MID_TREE_WIDGET_ITEM_H

#include "mid-object.h"
#include "mid-window.h"

#include <vector>
#include <iostream>

/*!
 * \brief MidTreeWidgetItem Template
 */
template <class T>
class MidTreeWidgetItem : public MidObject
{
public:
    /*!
     * \brief MidTreeWidgetItem
     * \param id
     * \param parent
     */
    MidTreeWidgetItem
    (
        Id id = 0,
        const std::vector<std::string>& texts = {},
        const std::vector<bool>& mustHaveACheck = {},
        const std::vector<bool>& checkInput = {},
        MidObject parent = nullptr
    ):
        MidObject(new T{id, texts, mustHaveACheck, checkInput, parent}){}
};

#endif /* MID_TREE_WIDGET_ITEM_H */
