#ifndef MID_GRID_H
#define MID_GRID_H

#include "mid-object.h"
#include <vector>

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

    void setMidColsLabels(const std::vector<std::string> &labels)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->setMidColsLabels(labels);
    }

    void setMidRowsLabels(const std::vector<std::string> &labels)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->setMidRowsLabels(labels);
    }
};

#endif // MID_GRID_H
