#ifndef MIDQT5SPINBOX_H
#define MIDQT5SPINBOX_H

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
                  MidObject parent = nullptr):
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

#endif // MIDQT5SPINBOX_H
