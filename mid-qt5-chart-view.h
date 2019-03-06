#ifndef MID_QT5_CHART_VIEW_H
#define MID_QT5_CHART_VIEW_H

#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include "mid-qt5-window.h"
#include "mid-window.h"

using namespace QtCharts;

/*!
 * \brief The MidQt5ChartView class
 */
class MidQt5ChartView: public QChartView
{
public:
    /*!
     * \brief MidQt5Chart
     * \param id
     * \param title
     * \param parent
     */
    MidQt5ChartView(
                    MidObject midChart,
                    Id id = 0,
                 const std::string &title = "",
                 MidObject parent = nullptr):
        QChartView
        (
            static_cast<QChart*>(midChart.get()),
            static_cast<QWidget*>(parent.get())
        )
    {
        this->setRenderHint(QPainter::Antialiasing);
    }

};

#endif /* MID_QT5_CHART_VIEW_H */
