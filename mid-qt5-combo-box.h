#ifndef MID_QT5_COMBO_BOX_H
#define MID_QT5_COMBO_BOX_H

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
                   MidObject parent = {}):
        QComboBox (static_cast<QWidget*>(parent.get())){}
    /*!
     * \brief addMidItem
     * \param item
     */
    void addMidItem(const std::string &item)
    {
        this->addItem(QString(item.c_str()));
    }
};

#endif // MID_QT5_COMBO_BOX_H
