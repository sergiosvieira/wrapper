#ifndef __MIDWXDATEEDIT__
#define __MIDWXDATEEDIT__

#include <wx/datectrl.h>
#include "mid-wx-window.h"
#include "mid-window.h"
#include "mid-date.h"
#include "mid-wx-date.h"

class MidWxDateEdit: public wxDatePickerCtrl
{
public:
    MidWxDateEdit
    (
        Id id = 0,
        MidObject date = nullptr,
        MidObject parent = nullptr
    ):
        wxDatePickerCtrl
        (
            static_cast<wxWindow*>(parent.get()),
            id,
            *static_cast<wxDateTime*>(date.get())
        )
    {}
};


#endif // __MIDWXDATEEDIT__
