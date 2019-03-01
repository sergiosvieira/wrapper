#ifndef MID_QT5_ACTION_H
#define MID_QT5_ACTION_H

#include <QAction>
#include "mid-qt5-window.h"

#include "mid-window.h"

/*!
 * \brief The MidQt5Action class
 */
class MidQt5Action: public QAction
{
public:
    /*!
     * \brief MidQt5Action
     * \param id
     * \param title
     * \param parent
     */
    MidQt5Action
    (
        Id id = 0,
        const std::string &title = "",
        bool checkable = false,
        bool checkInput = false,
        MidObject parent = nullptr
    ):
        QAction (QString(title.c_str()), static_cast<QWidget*>(parent.get()))
    {
        this->setCheckable(checkable);
        if (checkable) this->setChecked(checkInput);
    }
    /*!
     * \brief setCaption
     * \param caption
     */
    void setCaption(const char *caption)
    {
        this->setText(caption);
    }
    /*!
     * \brief setActionText
     * \param caption
     */
    void setActionText(const char *caption)
    {
        setText(QString(caption));
    }

    void addMidIcon
    (
            const std::string &name,
            const std::string &filename
    )
    {
         const QIcon newIcon = QIcon::fromTheme(name.c_str(), QIcon(filename.c_str()));
         this->setIcon(newIcon);
    }
};

#endif // MID_QT5_ACTION_H
