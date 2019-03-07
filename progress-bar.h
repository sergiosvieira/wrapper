#ifndef PROGRESS_BAR_H
#define PROGRESS_BAR_H

#include <iostream>
#include "mid-progress-bar.h"
#include "mid-qt5-progress-bar.h"

#include "window.h"

/*!
 * \brief The ProgressBar class
 */
class ProgressBar: public MidProgressBar<MidQt5ProgressBar>
{
public:
    /*!
     * \brief ProgressBar
     * \param id
     * \param min
     * \param max
     * \param title
     * \param msg
     * \param parent
     */
    ProgressBar
(
	Id id = 0,
	int min = 0,
	int max = 100,
    const std::string &title = "",
    const std::string &msg = "",
            MidObject parent = {}
):
        MidProgressBar<MidQt5ProgressBar>(id, min, max, title, msg, parent){}

};

#endif // PROGRESS_BAR_H
