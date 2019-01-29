#ifndef __MID_BUTTON__
#define __MID_BUTTON__

template <class T>
class MidButton
{
    T b;
public:
    MidButton(const char *title)
    {
        this->b.setText(title);
    }

    T *getReference()
    {
        return &b;
    }
};

#endif /* __MID_BUTTON__ */
