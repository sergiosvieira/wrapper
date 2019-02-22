#ifndef __MID_QT5_PROGRESS_BAR__
#define __MID_QT5_PROGRESS_BAR__

#include <QFont>
#include <QProgressBar>

#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5ProgressBar: public  QProgressBar
{
public:
    MidQt5ProgressBar(Id id = 0,
                      MidObject parent = nullptr):
        QProgressBar (static_cast<QWidget*>(parent.get()))
    {
        setRange(0, 100);
    }
    void setMidRange(int minimum, int maximum)
    {
        this->setRange(minimum, maximum);
    }
    void setMidValue(int value)
    {
        setValue(value);
    }
    void setMidEnable(bool enable)
    {
        setEnabled(enable);
    }
    void setMidFormat(const QString &format)
    {
        setFormat(format);
    }
    void setMidMaximum(int maxValue)
    {
        setMaximum(maxValue);
    }
    void setMidMinimum(int maxValue)
    {
        setMinimum(maxValue);
    }
    void setMidFont(const QFont &font)
    {
        setFont(font);
    }
    int getMidMinValue()
    {
        return this->minimum();
    }
    int getMidMaxValue()
    {
        return this->maximum();
    }
};

#endif /* __MID_QT5_PROGRESS_BAR__ */
