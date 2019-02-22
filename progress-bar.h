#ifndef PROGRESS_BAR_H
#define PROGRESS_BAR_H

#include <iostream>
#include "mid-progress-bar.h"
#include "mid-qt5-progress-bar.h"

#include "window.h"

using std::cout;

class Progressbar: public MidProgressBar<MidQt5ProgressBar>
{
public:
    Progressbar(Id id = 0,
                MidObject parent = nullptr):
        MidProgressBar<MidQt5ProgressBar>(id, parent){}

};

#endif // PROGRESS_BAR_H
