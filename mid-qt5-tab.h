#ifndef MID_QT5_TAB_H
#define MID_QT5_TAB_H

#include <QTabWidget>
#include "mid-qt5-window.h"

#include "mid-window.h"

/*!
 * \brief The MidQt5Tab class
 */
class MidQt5Tab: public QTabWidget
{
public:
    /*!
     * \brief MidQt5Tab
     * \param id
     * \param title
     * \param parent
     */
    MidQt5Tab(Id id = 0,
              const std::string &title = "",
              MidObject parent = {}):
        QTabWidget (static_cast<QWidget*>(parent.get())){}
    void addMidTab(MidObject object, const std::string& tabTitle)
    {
        QWidget* widget = static_cast<QWidget*>(object.get());
        addTab(widget, tabTitle.c_str());
    }
};

#endif // MID_QT5_TAB_H
