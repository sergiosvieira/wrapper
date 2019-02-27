#ifndef PROGRESSBAR_H
#define PROGRESSBAR_H

#include <iostream>
#include "mid-progress-bar.h"
#include "mid-wx-progress-bar.h"

#include "windowWx.h"

class ProgressbarWx : public MidProgressBar<MidWxProgressbar>
{
public:
    ProgressbarWx
    (
        Id id = 0,
        int min = 0,
        int max = 100,
        const std::string &title = "",
        const std::string &msg = "",
        MidObject parent = nullptr
    ) :
        MidProgressBar<MidWxProgressbar>(id, min, max, title, msg, parent) {}
};

#endif // PROGRESSBAR_H

