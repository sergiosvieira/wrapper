#ifndef __MIDWXDATEEDIT__
#define __MIDWXDATEEDIT__

#include <wx/datectrl.h>
#include "mid-wx-window.h"
#include "mid-window.h"
#include "mid-date.h"
#include "mid-wx-date.h"

class MidWxDateEdit: public wxDatePickerCtrl
{
private:
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    MidWxDateEdit(MidWindow<MidWxWindow>* parent = nullptr,
                   long long int midID = 0,
                   MidDate<MidWxDate> date = {}):
        wxDatePickerCtrl
        (
            (parent != nullptr) ? parent->get() : nullptr,
            midID,
            *date.ref<wxDateTime>()
        )
    {}

    void setParent(MidWindow<MidWxWindow>* parent)
    {
        this->parent = parent;
    }
};


#endif // __MIDWXDATEEDIT__
