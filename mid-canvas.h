#ifndef MID_CANVAS_H
#define MID_CANVAS_H

#include "mid-object.h"

template <typename T>
class MidCanvas: public MidObject
{
public:
    MidCanvas(int width,
              int height,
              MidObject parent = nullptr):
        MidObject(new T{width, height, parent}){}
};

#endif // MID_CANVAS_H
