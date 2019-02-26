#ifndef __MID_QT5_PROGRESS_BAR__
#define __MID_QT5_PROGRESS_BAR__

#include <QFont>
#include <QProgressDialog>

#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5ProgressBar: public QProgressDialog
{
private:
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    MidQt5ProgressBar
    (
            Id id = 0,
            int min = 0,
            int max = 100,
            const char *title = "",
            const char *msg = "",
            MidObject parent = nullptr
    ):
        QProgressDialog (title, msg, min, max, static_cast<QWidget*>(parent.get()))
    {
        setRange(min, max);
        setWindowTitle(title);
    }

    void setMidRange(int minimum, int maximum)
    {
        this->setRange(minimum, maximum);
    }
    void setMidValue(int value, const char *msg = "")
    {
        setValue(value);
    }
    void setMidEnable(bool enable)
    {
        setEnabled(enable);
    }
    void setMidFormat(const QString &format)
    {
        //setFormat(format);
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
