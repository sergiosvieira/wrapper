#ifndef __MID_QT5_GROUP_BOX__
#define __MID_QT5_GROUP_BOX__

#include <QGroupBox>
#include "mid-window.h"
#include "mid-qt5-window.h"

/*!
 * \brief The MidQt5GroupBox class
 */
class MidQt5GroupBox: public QGroupBox
{
public:
    /*!
     * \brief MidQt5GroupBox
     * \param id
     * \param title
     * \param parent
     */
    MidQt5GroupBox(Id id = 0,
                   const std::string &title = "",
                   MidObject parent = nullptr):
        QGroupBox (QString(title.c_str()),
                   static_cast<QWidget*>(parent.get())){}
    /*!
     * \brief setMidLayout
     * \param layout
     */
    void setMidLayout(MidObject layout)
    {
        this->setLayout(static_cast<QLayout*>(layout.get()));
    }
};


#endif // __MID_QT5_GROUP_BOX__
