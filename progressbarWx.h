#ifndef PROGRESSBAR_H
#define PROGRESSBAR_H

#include <iostream>
#include "mid-progress-bar.h"
#include "mid-wx-progress-bar.h"

#include "windowWx.h"

using std::cout;

class ProgressbarWx : public MidProgressBar<MidWxProgressbar>
{
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    ProgressbarWx(MidWindow<MidWxWindow>* parent = nullptr,
        long long int midID = 0,
        int min = 0,
        int max = 100,
        const char *title = "",
        const char *msg = "") :
        MidProgressBar<MidWxProgressbar>(parent, midID, min, max, title, msg), parent(parent) {}

   
};

#endif // PROGRESSBAR_H

