#ifndef MIDQT5DATE_H
#define MIDQT5DATE_H

#include <QDate>
#include "mid-qt5-window.h"

#include "mid-window.h"

/*!
 * \brief The MidQt5Date class
 */
class MidQt5Date: public QDate
{
public:
    /*!
     * \brief MidQt5Date
     * \param day
     * \param month
     * \param year
     */
    MidQt5Date(int day = 1,
               int month = 1,
               int year = 1400):
        QDate (year, month, day){}
    /*!
     * \brief setDay
     * \param day
     */
    void setDay(int day)
    {
        setDate(day, month(), year());
    }
    /*!
     * \brief setMonth
     * \param month
     */
    void setMonth(int month)
    {
        setDate(day(), month, year());
    }
    /*!
     * \brief setYear
     * \param year
     */
    void setYear(int year)
    {
        setDate(day(), month(), year);
    }
};

#endif // MIDQT5DATE_H
