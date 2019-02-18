#include "windowWx.h"

#include "mid-wx-button.h"
#include "buttonWx.h"
#include "mid-msg-dialog.h"
#include "mid-wx-msg-dialog.h"
#include "mid-connect.h"
#include "mid-wx-connect.h"
#include "mid-wx-handler.h"

#include "mid-layout.h"
#include "midwxverticallayout.h"
#include "mid-wx-horizontal-layout.h"

WindowWx::WindowWx(int width,
           	   int height,
           	   const char *title):
	MidWindow<MidWxWindow>(width, height, title)
{
    MidLayout<MidWxVerticalLayout> *mainVertical = new MidLayout<MidWxVerticalLayout>();
    MidLayout<MidWxHorizontalLayout> *h1 = new MidLayout<MidWxHorizontalLayout>();
    ButtonWx *b1 = new ButtonWx(this, 1, "Hello World Button 1");
    ButtonWx *b2 = new ButtonWx(this, 2, "Hello World Button 2");
    h1->add(b1);
    h1->add(b2);
    MidLayout<MidWxVerticalLayout> *h2 = new MidLayout<MidWxVerticalLayout>();;
    ButtonWx *b3 = new ButtonWx(this, 3, "Hello World Button 3");
    ButtonWx *b4 = new ButtonWx(this, 4, "Hello World Button 4");
    h2->add(b3);
    h2->add(b4);
    MidLayout<MidWxHorizontalLayout> *h3 = new MidLayout<MidWxHorizontalLayout>();
    ButtonWx *b5 = new ButtonWx(this, 5, "Hello World Button 5");
    ButtonWx *b6 = new ButtonWx(this, 6, "Hello World Button 6");
    h3->add(b5);
    h3->add(b6);

    mainVertical->addMidLayout(h1);
    mainVertical->addMidLayout(h2);
    mainVertical->addMidLayout(h3);

    MidConnect<MidWxConnect> connector(this);
    MidWxHandler* wxHandler = new MidWxHandler([&]() {
        MidMessageDialog<MidWxMsgDialog> m(this, "SIGA", "Hello world!");
        m.show();
        return true;
    });
    connector.connect(b1, EventTable::BUTTONCLICK, wxHandler);
    connector.connect(b3, EventTable::BUTTONCLICK, wxHandler);
    setMidLayout(*mainVertical);
}


