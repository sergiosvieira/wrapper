#ifndef MID_TREE_WIDGET_ITEM_H
#define MID_TREE_WIDGET_ITEM_H

#include "mid-object.h"
#include "mid-window.h"

#include <vector>
#include <iostream>

#include "general.h"

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
        Id id,
        const std::vector<std::string>& texts,
        const std::vector<bool>& mustHaveACheck,
        const std::vector<bool>& checkInput,
        MidObject parent
    ):
        MidObject(new T{id, texts, mustHaveACheck, checkInput, parent}){}

    MidTreeWidgetItem
    (
        Id id,
        const std::vector<std::string>& texts,
        const std::vector<bool>& mustHaveACheck,
        const std::vector<bool>& checkInput,
        MidObject parent,
        enum Type type
    ):
        MidObject(new T{id, texts, mustHaveACheck, checkInput, parent, type}){}
};

#endif /* MID_TREE_WIDGET_ITEM_H */
