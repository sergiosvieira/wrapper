#include "windowWx.h"

#include "mid-wx-button.h"
#include "buttonWx.h"
#include "mid-msg-dialog.h"
#include "mid-wx-msg-dialog.h"
#include "mid-connect.h"
//#include "mid-qt5-connect.h"
//#include "mid-qt5-handler.h"
#include "mid-wx-connect.h"
#include "mid-wx-handler.h"

WindowWx::WindowWx(int width,
           	   int height,
           	   const char *title):
	MidWindow<MidWxWindow>(width, height, title)
{
	ButtonWx *b1 = new ButtonWx(this, "Hello World Button");
    wxButton* ref = (wxButton*)b1->ref<MidWxButton>();

    MidConnect<MidWxConnect>* connector = new MidConnect<MidWxConnect>(this);
    MidWxHandler* wxHandler = new MidWxHandler([&]() {
        MidMessageDialog<MidWxMsgDialog> m(this, "SIGA", "Hello world!");
        m.show();
        return true;
    });

    connector->connect(b1, EventTable::BUTTONCLICK, wxHandler);
}


