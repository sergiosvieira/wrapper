#ifndef MIDHANDLER_H
#define MIDHANDLER_H

#include <functional>

/*!
 * \brief The MidHandler class
 */
class MidHandler
{
public:
    using Lambda = std::function<bool()>;
    /*!
     * \brief MidHandler
     * \param y
     */
    MidHandler(Lambda y): lambda(y){}
    /*!
     * \brief ~MidHandler
     */
    virtual ~MidHandler() {}
    Lambda lambda;
};

#endif // MIDHANDLER_H
