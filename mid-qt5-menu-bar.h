#ifndef __MIDQT5MENUBAR__
#define __MIDQT5MENUBAR__

#include <QMenuBar>
#include "mid-qt5-window.h"
#include "mid-window.h"

/*!
 * \brief The MidQt5MenuBar class
 */
class MidQt5MenuBar: public QMenuBar
{
private:
public:
    /*!
     * \brief MidQt5MenuBar
     * \param midID
     * \param parent
     */
    MidQt5MenuBar
    (
        Id midID = 0,
        MidObject parent = nullptr
    ):
        QMenuBar (static_cast<QWidget*>(parent.get()))
    {
    }
    /*!
     * \brief addMidMenu
     * \param object
     */
    void addMidMenu(MidObject object)
    {
        QMenu *menu = static_cast<QMenu*>(object.get());
        this->addMenu(menu);
    }
};

#endif // __MIDQT5MENUBAR__
