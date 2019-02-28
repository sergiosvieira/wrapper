#ifndef MID_QT5_TREE_WIDGET_ITEM_H
#define MID_QT5_TREE_WIDGET_ITEM_H

#include <QTreeWidgetItem>
#include "mid-qt5-window.h"

#include "mid-window.h"

#include <vector>
#include <iostream>

/*!
 * \brief The MidQt5TreeWidgetItem class
 */
class MidQt5TreeWidgetItem: public QTreeWidgetItem
{
public:
    /*!
     * \brief MidQt5TreeWidgetItem
     * \param id
     * \param parent
     */
    MidQt5TreeWidgetItem
    (
            Id id = 0,
            const std::vector<std::string>& texts = {},
            const std::vector<bool>& mustHaveACheck = {},
            const std::vector<bool>& checkInput = {},
            MidObject parent = nullptr
    ):
        QTreeWidgetItem(
                static_cast<QTreeWidget*>(parent.get())
            )
    {
        for (int index = 0; index<texts.size(); ++index)
        {
            setText(index, texts.at(index).c_str());
        }

        for (int index = 0; index < mustHaveACheck.size(); ++index)
        {
            if (mustHaveACheck.at(index))
                this->setCheckState(index,
                    checkInput.at(index)? Qt::Checked: Qt::Unchecked);
        }
    }
};

#endif /* MID_QT5_TREE_WIDGET_ITEM_H */
