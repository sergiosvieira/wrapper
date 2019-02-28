#ifndef MID_QT5_TOOL_BAR_H
#define MID_QT5_TOOL_BAR_H

#include <QToolBar>
#include <QMainWindow>
#include "mid-qt5-window.h"
#include "mid-window.h"
#include <QIcon>

/*!
 * \brief The MidQt5MenuBar class
 */
class MidQt5ToolBar
{
private:
    QMainWindow *parent;
    QToolBar *toolBar;
public:
    /*!
     * \brief MidQt5ToolBar
     * \param midID
     * \param parent
     */
    MidQt5ToolBar
    (
        Id midID,
        const std::string &title,
        MidObject parent
    )
    {
        this->parent =  static_cast<QMainWindow*>(parent.get());
        if (this->parent == nullptr)
        {
            throw std::invalid_argument("MidQt5ToolBar::MidQt5ToolBar(): invalid cast of parent to QMainWindow");
        }
        this->toolBar = this->parent->addToolBar((title.c_str()));
    }
    void addMidAction(MidObject object)
    {
        QAction *action = static_cast<QAction*>(object.get());
        toolBar->addAction(action);
    }
};

#endif // MID_QT5_MENU_BAR_H
