#ifndef MID_QT5_GROUP_ACTION_H
#define MID_QT5_GROUP_ACTION_H

#include <QActionGroup>
#include "mid-qt5-window.h"
#include "mid-window.h"

#include "general.h"
#include <vector>
#include <iostream>

/*!
 * \brief The MidQt5GroupAction class
 */
class MidQt5GroupAction: public QActionGroup
{
public:
    MidQt5GroupAction
    (
        Id midID = 0,
        const std::vector<MidObject>& actions = {},
        MidObject parent = nullptr
    ):
        QActionGroup
        (
            static_cast<QWidget*>(parent.get())
        )
    {
        this->setExclusive(true);
        for (auto &action: actions)
        {
            addMidAction(action);
        }
    }

    void addMidAction(MidObject object)
    {
        QAction* action = static_cast<QAction*>(object.get());
        this->addAction(action);
    }
};

#endif // MID_QT5_GROUP_ACTION_H
