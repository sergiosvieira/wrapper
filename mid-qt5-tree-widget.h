#ifndef MID_QT5_TREE_WIDGET_H
#define MID_QT5_TREE_WIDGET_H

#include <QTreeWidget>
#include "mid-qt5-window.h"

#include "mid-window.h"

/*!
 * \brief The MidQt5TreeWidget class
 */
class MidQt5TreeWidget: public QTreeWidget
{
public:
    /*!
     * \brief MidQt5TreeWidget
     * \param id
     * \param parent
     */
    MidQt5TreeWidget(Id id = 0,
                     int nColumns = 0,
                     const std::vector<std::string>& titles = {},
                 MidObject parent = {}):
        QTreeWidget(static_cast<QWidget*>(parent.get()))
    {
        this->setColumnCount(nColumns);

        QStringList list;

        for (int i = 0; i < titles.size(); ++i)
        {
            //this->setText(i, titles.at(i).c_str());
            list.push_back(titles.at(i).c_str());
        }

        setHeaderLabels(list);
    }
};

#endif /* MID_QT5_TREE_WIDGET_H */
