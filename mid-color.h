#ifndef MID_COLOR_H
#define MID_COLOR_H

#include "mid-object.h"

template <typename T>
struct MidColor: public MidObject
{
    MidColor(): MidObject(new T{}){}
    virtual T getColor() const = 0;
};

#endif // MID_COLOR_H
