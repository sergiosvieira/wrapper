#ifndef MID_QT5_SPIN_BOX_H
#define MID_QT5_SPIN_BOX_H

#include <QSpinBox>
#include "mid-qt5-window.h"

#include "mid-window.h"

/*!
 * \brief The MidQt5SpinBox class
 */
class MidQt5SpinBox: public QSpinBox
{
public:
    /*!
     * \brief MidQt5SpinBox
     * \param id
     * \param minValue
     * \param maxValue
     * \param parent
     */
    MidQt5SpinBox(Id id = 0,
                  int minValue = 0,
                  int maxValue = 100,
                  MidObject parent = {}):
        QSpinBox (static_cast<QWidget*>(parent.get()))
    {
        setRange(minValue, maxValue);
    }

    /*!
     * \brief getMidValue
     * \return
     */
    int getMidValue()
    {
        return value();
    }
};

#endif // MID_QT5_SPIN_BOX_H
