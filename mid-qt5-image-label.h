#ifndef MID_QT5_IMAGE_LABEL_H
#define MID_QT5_IMAGE_LABEL_H

#include <QLineEdit>
#include "mid-qt5-window.h"

#include "mid-window.h"

/*!
 * \brief The MidQt5ImageLabel class
 */
class MidQt5ImageLabel: public QLabel
{
public:
    /*!
     * \brief MidQt5TextLabel
     * \param id
     * \param image
     * \param parent
     */
    MidQt5ImageLabel(Id id,
                    MidObject image,
                    MidObject parent):
        QLabel ("", static_cast<QWidget*>(parent.get()))
    {
        QImage *qImage = static_cast<QImage*>(image.get());
        this->setPixmap(QPixmap::fromImage(*qImage));
        this->adjustSize();
    }
};

#endif // MID_QT5_IMAGE_LABEL_H
