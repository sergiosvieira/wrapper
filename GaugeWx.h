#ifndef __WXGAUGE__
#define __WXGAUGE__

#include <iostream>
#include "mid-gauge.h"
#include "mid-wx-gauge.h"

#include "window.h"

using std::cout;

class GaugeWx: public MidGauge<MidWxGauge>
{
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    GaugeWx(MidWindow<MidWxWindow>* parent = nullptr,
        long long int midID = 0, int min = 0, int max = 100):
        MidGauge<MidWxGauge>(parent, midID), parent(parent) {}

};

#endif // __WXGAUGE__
