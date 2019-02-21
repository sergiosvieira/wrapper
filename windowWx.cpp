#include "windowWx.h"

#include "mid-wx-button.h"
#include "buttonWx.h"
#include "textfieldWx.h"

#include "progressbarWx.h"
#include "GaugeWx.h"
#include "textlabelWx.h"
#include "combo-box-wx.h"

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

    ButtonWx *button = new ButtonWx(this, id++, "Hello World Button 1");

    ProgressbarWx *progressBar = new ProgressbarWx(this, id++, 0, 100, wxString::FromUTF8("Título do Janela"), "Carregando algo:");
    progressBar->setMidValue(30);
    progressBar->setMidValue(77, "Hello world with 77 %");

    GaugeWx *gauge = new GaugeWx(this, id++, 0, 100);
    gauge->setMidValue(40);
    gauge->setMidValue(87, "Hello world with 87 %");

    TextLabelWx *label = new TextLabelWx(this, id++, "Hello World LABEL");
    TextFieldWx *tf = new TextFieldWx(this, id++, "Hello World tf");
    ComboBoxWx *cb = new ComboBoxWx(this, id++);
    cb->addMidItem("Item 01");
    cb->addMidItem("Item 02");
    cb->addMidItem("Item 03");

    h1->add(button);
    h1->add(progressBar);
    h1->add(gauge);

    MidLayout<MidWxVerticalLayout> *h2 = new MidLayout<MidWxVerticalLayout>();
    h2->add(label);
    h2->add(tf);
    h2->add(cb);

    progressBar->closeMidProgressBar();
    //gauge->closeMidGauge();

    mainVertical->addMidLayout(h1);
    mainVertical->addMidLayout(h2);

    MidConnect<MidWxConnect> connector(this);
    MidWxButtonHandler* wxButtonHandler = new MidWxButtonHandler([&]() {
        MidMessageDialog<MidWxMsgDialog> m(this, "SIGA", "Hello world!");
        m.show();
        return true;
    });
    connector.connect(button, EventTable::BUTTONCLICK, wxButtonHandler);
    setMidLayout(*mainVertical);
}


