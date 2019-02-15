#pragma once

#ifndef __IDS_DEFINITIONS__
#define __IDS_DEFINITIONS__

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

// for all others, include the necessary headers (this file is usually all you
// need because it includes almost all "standard" wxWidgets headers)
#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

enum
{
    BUTTON_Hello = wxID_HIGHEST + 1 // declares an id which will be used to call our button
};

#endif
