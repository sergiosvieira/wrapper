#ifndef MID_QT5_PROGRESS_BAR_H
#define MID_QT5_PROGRESS_BAR_H

#include <QFont>
#include <QProgressDialog>
#include "mid-qt5-window.h"
#include "mid-window.h"

/*!
 * \brief The MidQt5ProgressBar class
 */
class MidQt5ProgressBar: public QProgressDialog
{
public:
    /*!
     * \brief MidQt5ProgressBar
     * \param id
     * \param min
     * \param max
     * \param title
     * \param msg
     * \param parent
     */
    MidQt5ProgressBar
    (
            Id id = 0,
            int min = 0,
            int max = 100,
            const std::string &title = "",
            const std::string &msg = "",
            MidObject parent = {}
    ):
        QProgressDialog (title.c_str(), msg.c_str(), min, max, static_cast<QWidget*>(parent.get()))
    {
        setRange(min, max);
        setWindowTitle(title.c_str());
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
    void setMidFormat(const QString &format)
    {
        //setFormat(format);
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

#endif /* MID_QT5_PROGRESS_BAR_H */
