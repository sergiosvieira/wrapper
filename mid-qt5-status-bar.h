#ifndef MID_QT5_STATUS_BAR_H
#define MID_QT5_STATUS_BAR_H

#include <QMainWindow>
#include "mid-qt5-window.h"

#include "mid-window.h"

/*!
 * \brief The MidQt5StatusBar class
 */
class MidQt5StatusBar
{
    QMainWindow *parent;
public:
    /*!
     * \brief MidQt5StatusBar
     * \param id
     * \param title
     * \param parent
     */
    MidQt5StatusBar(Id id,
                 const std::string &title,
                 MidObject parent)
    {
        this->parent =  static_cast<QMainWindow*>(parent.get());
        if (this->parent == nullptr)
        {
            throw std::invalid_argument("MidQt5StatusBar::MidQt5StatusBar(): invalid cast of parent to QMainWindow");
        }
        this->parent->statusBar()->showMessage(title.c_str());
    }
    /*!
     * \brief showStatusBar
     * \param title
     */
    void showStatusBar(const std::string &title)
    {
        if (this->parent == nullptr)
        {
            throw std::invalid_argument("MidQt5StatusBar::showStatusBar(): parent is nullptr");
        }
        this->parent->statusBar()->showMessage(title.c_str());

    }

};

#endif /* MID_QT5_STATUS_BAR_H */
