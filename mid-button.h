#ifndef MIDBUTTON_H
#define MIDBUTTON_H

template <class T>
class MidButton
{
    T b;
public:
    MidButton() {}

    T *getReference()
    {
        return &b;
    }
};

#endif // MIDBUTTON_H
