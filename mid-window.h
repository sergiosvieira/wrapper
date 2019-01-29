#ifndef __MID_WINDOW__
#define __MID_WINDOW__

template <class T>
class MidWindow
{
    int width = 0;
    int height = 0;
    //T w;
public:
    MidWindow(int width, int height):
            width(width), height(height)
    {
    }
    virtual ~MidWindow(){}
    void show()
    {
        T w;
        w.show();
    }
};

#endif /* __MID_WINDOW__ */
