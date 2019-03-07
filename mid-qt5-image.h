#ifndef MID_QT5_IMAGE_H
#define MID_QT5_IMAGE_H


#include "mid-qt5-window.h"
#include "mid-window.h"
#include <QImage>

/*!
 * \brief The MidQt5Image class
 */
class MidQt5Image : public QImage
{
public:
    /*!
     * \brief MidQt5Image
     * \param id
     * \param filename
     * \param parent
     */
    MidQt5Image(Id id = 0,
                 const std::string &filename = "",
                MidObject parent = {})
    {
        if (!this->load(filename.c_str()));
        {
            std::invalid_argument("MidQt5Image::MidQt5Image(): error in load image " + filename);
        }
    }

};

#endif /* MID_QT5_IMAGE_H */
