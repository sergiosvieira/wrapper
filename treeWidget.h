#ifndef TREE_WIDGET_H
#define TREE_WIDGET_H

#include <iostream>
#include "mid-tree-widget.h"
#include "mid-qt5-tree-widget.h"


/*!
 * \brief The TreeWidget class
 */
class TreeWidget: public MidTreeWidget<MidQt5TreeWidget>
{
public:
    /*!
     * \brief TreeWidget
     * \param id
     * \param parent
     */
    TreeWidget
    (
        Id id = 0,
        int nColumns = 0,
        const std::vector<std::string>& titles = {},
        MidObject parent = nullptr
    ):
        MidTreeWidget<MidQt5TreeWidget>(id, nColumns, titles, parent){}
};

#endif // TREE_WIDGET_H
