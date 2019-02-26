#ifndef __MIDQT5MENU__
#define __MIDQT5MENU__

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
        long long int midID = 0,
        const char *title = "",
        MidObject parent = nullptr
    ):
        QMenu (title, static_cast<QWidget*>(parent.get()))
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

#endif // __MIDQT5MENU__
