#include "windowWx.h"

#include "mid-wx-button.h"
#include "buttonWx.h"

#include "progressbarWx.h"
#include "GaugeWx.h"

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
    long long id = 1;
    MidLayout<MidWxVerticalLayout> *mainVertical = new MidLayout<MidWxVerticalLayout>();
    MidLayout<MidWxHorizontalLayout> *h1 = new MidLayout<MidWxHorizontalLayout>();

    ButtonWx *b1 = new ButtonWx(this, id++, "Hello World Button 1");

    ProgressbarWx *pb = new ProgressbarWx(this, id++, 0, 100, wxString::FromUTF8("Título do Janela"), "Carregando algo:");
    pb->setMidValue(30);
    pb->setMidValue(77, "Hello world with 77 %");

    GaugeWx *gauge = new GaugeWx(this, id++, 0, 100);
    gauge->setMidValue(40);
    gauge->setMidValue(87, "Hello world with 87 %");

    h1->add(b1);
    h1->add(pb);
    h1->add(gauge);

    pb->closeMidProgressBar();
    //gauge->closeMidGauge();

    mainVertical->addMidLayout(h1);

    MidConnect<MidWxConnect> connector(this);
    MidWxButtonHandler* wxButtonHandler = new MidWxButtonHandler([&]() {
        MidMessageDialog<MidWxMsgDialog> m(this, "SIGA", "Hello world!");
        m.show();
        return true;
    });
    connector.connect(b1, EventTable::BUTTONCLICK, wxButtonHandler);
    setMidLayout(*mainVertical);
}


