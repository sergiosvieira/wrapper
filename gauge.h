#ifndef GAUGE_H
#define GAUGE_H

#include <iostream>
#include "mid-gauge.h"
#include "mid-qt5-gauge.h"

/*!
 * \brief The Gauge class
 */
class Gauge: public MidGauge<MidQt5Gauge>
{
public:
    /*!
     * \brief Gauge
     * \param parent
     * \param midID
     */
    Gauge(Id midID = 0,
          MidObject parent = {}):
        MidGauge<MidQt5Gauge>(parent, midID){}
};

#endif // GAUGE_H
