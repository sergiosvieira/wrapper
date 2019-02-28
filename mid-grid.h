#ifndef MID_GRID_H
#define MID_GRID_H

#include "mid-object.h"


template<class T>
class MidGrid : public MidObject
{
public:
    MidGrid
    (
        Id id = 0,
        unsigned int numRows = 0,
        unsigned int numCols = 0,
        MidObject parent = nullptr
    ):
        MidObject(new T{id, numRows, numCols, parent}){}
};

#endif // MID_GRID_H
