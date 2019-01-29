#ifndef MIDBUTTON_H
#define MIDBUTTON_H

template <class Button>
class MidButton
{
    Button b;
public:
    MidButton() {}

    Button getReference()
    {
        return b;
    }
};

#endif // MIDBUTTON_H
