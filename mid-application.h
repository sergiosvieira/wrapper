#ifndef MID_APPLICATION_H
#define MID_APPLICATION_H

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

#endif /* MID_APPLICATION_H */
