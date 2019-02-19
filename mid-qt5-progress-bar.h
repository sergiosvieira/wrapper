#ifndef __MID_QT5_PROGRESS_BAR__
#define __MID_QT5_PROGRESS_BAR__

#include <QFont>
#include <QProgressBar>

#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5ProgressBar: public  QProgressBar
{
private:
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    MidQt5ProgressBar(MidWindow<MidQt5Window>* parent = nullptr, long long int midID = 0):
        QProgressBar ((parent != nullptr) ? parent->get() : nullptr)
    {
    }
    MidQt5ProgressBar();

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
    void setParent(MidWindow<MidQt5Window>* parent)
    {
        this->parent = parent;
    }
};

#endif /* __MID_QT5_PROGRESS_BAR__ */
