#ifndef __GAUGE__
#define __GAUGE__

#include <iostream>
#include "mid-gauge.h"
#include "mid-qt5-gauge.h"

#include "window.h"

using std::cout;

class Gauge: public MidGauge<MidQt5Gauge>
{
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    Gauge(MidWindow<MidQt5Window>* parent = nullptr,
                long long int midID = 0):
        MidGauge<MidQt5Gauge>(parent, midID), parent(parent) {}

};

#endif // __GAUGE__
