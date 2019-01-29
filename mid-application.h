#ifndef __MID_APPLICATION__
#define __MID_APPLICATION__

template <class T>
class MidApplication
{
    T *app = nullptr;
public:
    MidApplication(int argc, char **argv)
    {
        this->app = new T(argc, argv);
    }
    virtual ~MidApplication() {}
    int execute()
    {
        return this->app->execute();
    }
};

#endif /* __MID_APPLICATION__ */
