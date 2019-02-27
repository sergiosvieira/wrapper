#ifndef __PROGRESSBARWX__
#define __PROGRESSBARWX__

#include <iostream>
#include "mid-progress-bar.h"
#include "mid-wx-progress-bar.h"

#include "windowWx.h"

class ProgressBarWx : public MidProgressBar<MidWxProgressbar>
{
public:
    ProgressBarWx
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

#endif // __PROGRESSBARWX__

