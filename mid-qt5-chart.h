#ifndef MID_QT5_CHART_H
#define MID_QT5_CHART_H

#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include "mid-qt5-window.h"
#include "mid-window.h"

using namespace QtCharts;

/*!
 * \brief The MidQt5Chart class
 */
class MidQt5Chart: public QChart
{
public:
    /*!
     * \brief MidQt5Chart
     * \param id
     * \param title
     * \param parent
     */
    MidQt5Chart(Id id = 0,
                 const std::string &title = "",
                 MidObject parent = nullptr):
        QChart()
    {
        this->setTitle(title.c_str());
    }

    void addLine
    (
            const std::vector<double> &x,
            const std::vector<double> &y,
            unsigned int hexColor,
            unsigned int lineWidth,
            const std::string &lineTitle
    )
    {
        QLineSeries *series = new QLineSeries();
        unsigned int size = x.size();
        for (unsigned int i = 0; i < size; ++i)
        {
            *series << QPointF(x[i], y[i]);
        }
        series->setName(lineTitle.c_str());
        QPen pen(hexColor);
        pen.setWidth(lineWidth);
        series->setPen(pen);
        this->addSeries(series);
        this->createDefaultAxes();
    }
};

#endif /* MID_QT5_CHART_H */
