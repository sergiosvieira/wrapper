#ifndef TREE_WIDGET_SUBITEM_H
#define TREE_WIDGET_SUBITEM_H

#include <iostream>
#include "mid-tree-widget-item.h"
#include "mid-qt5-tree-widget-subitem.h"

#include <vector>
#include <iostream>

/*!
 * \brief The TreeWidgetSubitem class
 */
class TreeWidgetSubitem: public MidTreeWidgetItem<MidQt5TreeWidgetSubitem>
{
public:
    /*!
     * \brief TreeWidgetSubitem
     * \param id
     * \param parent
     */
    TreeWidgetSubitem
    (
        Id id = 0,
        const std::vector<std::string>& texts = {},
        const std::vector<bool>& mustHaveACheck = {},
        const std::vector<bool>& checkInput = {},
        MidObject parent = nullptr
    ):
        MidTreeWidgetItem<MidQt5TreeWidgetSubitem>
            (id, texts, mustHaveACheck, checkInput, parent){}
};

#endif // TREE_WIDGET_SUBITEM_H
