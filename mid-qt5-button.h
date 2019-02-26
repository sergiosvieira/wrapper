#ifndef __MID_QT5_BUTTON__
#define __MID_QT5_BUTTON__

#include <QPushButton>
#include "mid-qt5-window.h"

#include "mid-window.h"

/*!
 * \brief The MidQt5Button class
 */
class MidQt5Button: public QPushButton
{
public:
    /*!
     * \brief MidQt5Button
     * \param id
     * \param title
     * \param parent
     */
    MidQt5Button(Id id = 0,
                 const std::string &title = "",
                 MidObject parent = nullptr):
        QPushButton(QString(title.c_str()), static_cast<QWidget*>(parent.get())){}
};

#endif /* __MID_QT5_BUTTON__ */
