#ifndef __MID_QT5_COMBO_BOX__
#define __MID_QT5_COMBO_BOX__

#include <QComboBox>
#include "mid-window.h"
#include "mid-qt5-window.h"

/*!
 * \brief The MidQt5ComboBox class
 */
class MidQt5ComboBox: public QComboBox
{
public:
    /*!
     * \brief MidQt5ComboBox
     * \param id
     * \param parent
     */
    MidQt5ComboBox(Id id = 0,
                   MidObject parent = nullptr):
        QComboBox (static_cast<QWidget*>(parent.get())){}
    /*!
     * \brief addMidItem
     * \param item
     */
    void addMidItem(const char* item)
    {
        this->addItem(QString(item));
    }
};

#endif // __MID_QT5_COMBO_BOX__
