#ifndef MID_QT5_GAUGE_H
#define MID_QT5_GAUGE_H

#include <QFont>
#include <QProgressBar>

#include "mid-qt5-window.h"

#include "mid-window.h"

/*!
 * \brief The MidQt5Gauge class
 */
class MidQt5Gauge: public QProgressBar
{
private:
    MidWindow<MidQt5Window>* parent = {};
public:
    /*!
     * \brief MidQt5Gauge
     * \param parent
     * \param midID
     * \param min
     * \param max
     * \param title
     * \param msg
     */
    MidQt5Gauge(MidWindow<MidQt5Window>* parent = {},
                      long long int midID = 0, int min = 0, int max = 100, const char *title = "", const char *msg = ""):
        QProgressBar ((parent != nullptr) ? parent->get() : nullptr)
    {
        setRange(min, max);
    }
    /*!
     * \brief setMidRange
     * \param minimum
     * \param maximum
     */
    void setMidRange(int minimum, int maximum)
    {
        this->setRange(minimum, maximum);
    }
    /*!
     * \brief setMidValue
     * \param value
     * \param msg
     */
    void setMidValue(int value, const char *msg = "")
    {
        setValue(value);
    }
    /*!
     * \brief setMidEnable
     * \param enable
     */
    void setMidEnable(bool enable)
    {
        setEnabled(enable);
    }
    /*!
     * \brief setMidFormat
     * \param format
     */
    void setMidFormat(const QString &format)
    {
        setFormat(format);
    }
    /*!
     * \brief setMidMaximum
     * \param maxValue
     */
    void setMidMaximum(int maxValue)
    {
        setMaximum(maxValue);
    }
    /*!
     * \brief setMidMinimum
     * \param maxValue
     */
    void setMidMinimum(int maxValue)
    {
        setMinimum(maxValue);
    }
    /*!
     * \brief setMidFont
     * \param font
     */
    void setMidFont(const QFont &font)
    {
        setFont(font);
    }
    /*!
     * \brief setParent
     * \param parent
     */
    void setParent(MidWindow<MidQt5Window>* parent)
    {
        this->parent = parent;
    }
    /*!
     * \brief getMidMinValue
     * \return
     */
    int getMidMinValue()
    {
        return this->minimum();
    }
    /*!
     * \brief getMidMaxValue
     * \return
     */
    int getMidMaxValue()
    {
        return this->maximum();
    }
};

#endif /* MID_QT5_GAUGE_H */
