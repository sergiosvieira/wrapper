#ifndef __MID_APPLICATION__
#define __MID_APPLICATION__

/*!
 * \brief MidApplication Template
 */
template <class T>
class MidApplication
{
    /*!
     * \brief app
     */
    T *app = nullptr;
public:
    /*!
     * \brief MidApplication
     * \param argc
     * \param argv
     */
    MidApplication(int argc, char **argv)
    {
        this->app = new T(argc, argv);
    }
    /*!
     * \brief ~MidApplication
     */
    virtual ~MidApplication() {}
    /*!
     * \brief execute
     * \return
     */
    int execute()
    {
        return this->app->execute();
    }
};

#endif /* __MID_APPLICATION__ */
