#ifndef MID_QT5_LINE_H
#define MID_QT5_LINE_H

#include <QFrame>
#include "definitions.h"
#include "mid-qt5-window.h"

#include "mid-window.h"

/*!
 * \brief The MidQt5Line class
 */
class MidQt5Line: public QFrame
{
public:
    /*!
     * \brief MidQt5Line
     * \param parent
     * \param midID
     * \param type
     */
    MidQt5Line
    (
        Id midID = 0,
        MidLineType type = MidLineType::VERTICAL,
        MidObject parent = nullptr
    ):
        QFrame (static_cast<QWidget*>(parent.get()))
    {
        if (type == MidLineType::VERTICAL)
        {
            this->setFrameShape(QFrame::VLine);
        }
        else if (type == MidLineType::HORIZONAL)
        {
            this->setFrameShape(QFrame::HLine);
        }
    }
};

#endif /* MID_QT5_LINE_H */
