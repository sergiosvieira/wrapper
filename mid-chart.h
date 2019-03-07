#ifndef MID_CHART_H
#define MID_CHART_H

#include "mid-object.h"
#include "mid-window.h"

/*!
 * \brief MidChart Template
 */
template <class T>
class MidChart : public MidObject
{
public:
    /*!
     * \brief MidChart
     * \param id
     * \param title
     * \param parent
     */
    MidChart(Id id = 0,
              const std::string &title = "",
              MidObject parent = nullptr):
        MidObject(new T{id, title, parent}){}


    void addMidLine
    (
        const std::vector<double> &x,
        const std::vector<double> &y,
        unsigned int hexColor,
        unsigned int lineWidth,
        const std::string &lineTitle
    )
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->addLine(x, y, hexColor, lineWidth, lineTitle);
    }

    void zoomIn()
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->zoomIn();
    }

    void zoomOut()
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->zoomOut();
    }

    void zoomReset()
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->zoomReset();
    }
};

#endif /* MID_CHART_H */
