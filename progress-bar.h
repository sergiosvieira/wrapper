#ifndef PROGRESS_BAR_H
#define PROGRESS_BAR_H

#include <iostream>
#include "mid-progress-bar.h"
#include "mid-qt5-progress-bar.h"

#include "window.h"

using std::cout;

class ProgressBar: public MidProgressBar<MidQt5ProgressBar>
{
public:
    ProgressBar
(
	Id id = 0,
	int min = 0,
	int max = 100,
    const std::string &title = "",
    const std::string &msg = "",
    MidObject parent = nullptr
):
        MidProgressBar<MidQt5ProgressBar>(id, min, max, title, msg, parent){}

};

#endif // PROGRESS_BAR_H
