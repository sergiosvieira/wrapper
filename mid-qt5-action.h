#ifndef MID_QT5_ACTION_H
#define MID_QT5_ACTION_H

#include <QAction>
#include "mid-qt5-window.h"

#include "mid-window.h"

#include "general.h"

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
     * \param type
     * \param checkInput
     * \param shortcut
     * \param parent
     */
    MidQt5Action
    (
        Id id = 0,
        const std::string &title = "",
        const ActionType type = ActionType::DEFAULT,
        bool checkInput = false,
        const std::string& shortcut = "",
        MidObject parent = nullptr
    ):
        QAction (QString(title.c_str()), static_cast<QWidget*>(parent.get()))
    {
        bool checkable = false;
        if (type == ActionType::CHECK || type == ActionType::RADIO)
            checkable = true;

        this->setCheckable(checkable);
        if (checkable) this->setChecked(checkInput);

        if (shortcut.compare("") != 0)
        {
            this->setShortcut(QKeySequence(shortcut.c_str()));
        }
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
