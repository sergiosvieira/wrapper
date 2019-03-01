#ifndef TREE_WIDGET_ITEM_H
#define TREE_WIDGET_ITEM_H

#include <iostream>
#include "mid-tree-widget-item.h"
#include "mid-qt5-tree-widget-item.h"

#include <vector>
#include <iostream>

/*!
 * \brief The TreeWidgetItem class
 */
class TreeWidgetItem: public MidTreeWidgetItem<MidQt5TreeWidgetItem>
{
public:
    /*!
     * \brief TreeWidgetItem
     * \param id
     * \param parent
     */
    TreeWidgetItem
    (
        Id id = 0,
        const std::vector<std::string>& texts = {},
        const std::vector<bool>& mustHaveACheck = {},
        const std::vector<bool>& checkInput = {},
        MidObject parent = nullptr
    ):
        MidTreeWidgetItem<MidQt5TreeWidgetItem>
            (id, texts, mustHaveACheck, checkInput, parent){}

    TreeWidgetItem
    (
        Id id,
        const std::vector<std::string>& texts,
        const std::vector<bool>& mustHaveACheck,
        const std::vector<bool>& checkInput,
        MidObject parent,
        enum Type type
    ):
        MidTreeWidgetItem<MidQt5TreeWidgetItem>
            (id, texts, mustHaveACheck, checkInput, parent, type){}
};

#endif // TREE_WIDGET_ITEM_H
