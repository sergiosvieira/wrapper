#ifndef MID_CHART_VIEW_H
#define MID_CHART_VIEW_H

#include "mid-object.h"
#include "mid-window.h"

/*!
 * \brief MidChartView Template
 */
template <class T>
class MidChartView : public MidObject
{
public:
    /*!
     * \brief MidChart
     * \param id
     * \param title
     * \param parent
     */
    MidChartView(
                MidObject midChart,
                Id id = 0,
                const std::string &title = "",
                MidObject parent = nullptr):
        MidObject(new T{midChart, id, title, parent}){}
};

#endif /* MID_CHART_VIEW_H */
