#ifndef MIDDATE_H
#define MIDDATE_H

#include "mid-object.h"
#include "mid-window.h"

//Minimum value of date: 1400-Jan-01

/*!
 * \brief MidDate Template
 */
template <class T>
class MidDate : public MidObject
{
public:
    /*!
     * \brief MidDate
     * \param day
     * \param month
     * \param year
     */
    MidDate(int day = 1,
            int month = 1,
            int year = 1400):
        MidObject(new T{day, month, year}){}
};

#endif // MIDDATE_H
