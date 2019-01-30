#ifndef __MID_WINDOW__
#define __MID_WINDOW__

template <class T>
class MidWindow
{
    int width = 0;
    int height = 0;
    T *w;
public:
    MidWindow(int width,
              int height,
              const char *title = nullptr):
            width(width), height(height)
    {
        w = new T(width, height, title);
    }

    template <class U>
    void addButton(int x, int y, U *button)
    {
        w->addButton(button->getReference());
    }

    virtual ~MidWindow(){}
    void show()
    {
        w->show();
    }

    T *getReference()
    {
        return w;
    }
};

#endif /* __MID_WINDOW__ */
