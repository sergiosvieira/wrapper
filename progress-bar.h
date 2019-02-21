#ifndef PROGRESS_BAR_H
#define PROGRESS_BAR_H

#include <iostream>
#include "mid-progress-bar.h"
#include "mid-qt5-progress-bar.h"

#include "window.h"

using std::cout;

class Progressbar: public MidProgressBar<MidQt5ProgressBar>
{
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    Progressbar(MidWindow<MidQt5Window>* parent = nullptr,
                long long int midID = 0,
                int min = 0,
                int max = 100,
                const char *title = "",
                const char *msg = ""):
        MidProgressBar<MidQt5ProgressBar>(parent, midID, min, max, title, msg), parent(parent) {}

};

#endif // PROGRESS_BAR_H
