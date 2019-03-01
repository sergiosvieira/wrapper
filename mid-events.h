#ifndef MID_EVENTS_H
#define MID_EVENTS_H

#include <functional>
#include "mid-lambda.h"

using BoolVoid = std::function<bool()>;
using VoidIntInt = std::function<void(int, int)>;

class OnClicked: public MidLambda<BoolVoid>
{
public:
    OnClicked(BoolVoid lambda):
        MidLambda<BoolVoid>(lambda)
    {
        this->type = EventTable::BUTTONCLICK;
    }
};

class OnMenuItemClicked: public MidLambda<BoolVoid>
{
public:
    OnMenuItemClicked(BoolVoid lambda):
        MidLambda<BoolVoid>(lambda)
    {
        this->type = EventTable::ACTIONTRIGERRED;
    }
};

class OnItemDoubleClicked: public MidLambda<VoidIntInt>
{
public:
    OnItemDoubleClicked(VoidIntInt lambda):
        MidLambda<VoidIntInt>(lambda)
    {
        this->type = EventTable::GRIDSELECTEDCELL;
    }
};


#endif // MID_EVENTS_H
