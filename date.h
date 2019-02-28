#ifndef DATE_H
#define DATE_H

#include "mid-date.h"
#include "mid-qt5-date.h"

/*!
 * \brief The Date class
 */
class Date: public MidDate<MidQt5Date>
{
public:
    /*!
     * \brief Date
     * \param day
     * \param month
     * \param year
     */
    Date(int day = 1,
        int month = 1,
        int year = 1400):
        MidDate<MidQt5Date>(day, month, year){}
};

#endif // DATE_H
