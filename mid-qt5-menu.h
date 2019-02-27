#ifndef MID_QT5_MENU_H
#define MID_QT5_MENU_H

#include <QMenu>
#include "mid-qt5-window.h"

#include "mid-window.h"

/*!
 * \brief The MidQt5Menu class
 */
class MidQt5Menu: public QMenu
{
public:
    /*!
     * \brief MidQt5Menu
     * \param midID
     * \param title
     * \param parent
     */
    MidQt5Menu
    (
        Id midID = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        QMenu (QString(title.c_str()), static_cast<QWidget*>(parent.get()))
    {
    }
    /*!
     * \brief setMidText
     * \param caption
     */
    void setMidText(const char *caption)
    {
        setTitle(QString(caption));
    }
    /*!
     * \brief addMidAction
     * \param object
     */
    void addMidAction(MidObject object)
    {
        QAction* action = static_cast<QAction*>(object.get());
        this->addAction(action);
    }
};

#endif // MID_QT5_MENU_H
