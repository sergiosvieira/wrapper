#include "window.h"
#include "button.h"
#include "checkbox.h"
#include "textfield.h"
#include "mid-msg-dialog.h"
#include "mid-qt5-msg-dialog.h"
#include "mid-connect.h"
#include "mid-qt5-connect.h"
#include "mid-qt5-handler.h"
#include "mid-layout.h"
#include "midqtverticallayout.h"
#include "mid-qt5-horizontal-layout.h"
#include "radio-button.h"
#include "progress-bar.h"
#include "group-box.h"
#include "textlabel.h"
#include "spin-box.h"
#include "date-edit.h"
#include "date.h"
#include "mid-date.h"
#include "combo-box.h"
#include "tab.h"

Window::Window(int width,
           	   int height,
           	   const char *title):
	MidWindow<MidQt5Window>(width, height, title)
{    
    MidLayout<MidQt5VerticalLayout> *mainVertical = new MidLayout<MidQt5VerticalLayout>();
    MidLayout<MidQt5HorizontalLayout> *h1 = new MidLayout<MidQt5HorizontalLayout>();

    Button *b1 = new Button(nullptr, 1, "Hello World Button 1");
    RadioButton *rb1 = new RadioButton(nullptr, 2, "Radio Button 1");

    MidLayout<MidQt5VerticalLayout> *h2 = new MidLayout<MidQt5VerticalLayout>();

    TextField * tf = new TextField(nullptr, 3, "Text field text");
    Checkbox *c4 = new Checkbox(nullptr, 4, "Hello World Button 4");

    h1->add(b1);
    h1->add(rb1);
    h2->add(tf);
    h2->add(c4);

    MidLayout<MidQt5HorizontalLayout> *h3 = new MidLayout<MidQt5HorizontalLayout>();

    Button *b5 = new Button(nullptr, 5, "Hello World Button 5");
    h3->add(b5);

    Progressbar *p6 = new Progressbar(nullptr, 7);
    int min = p6->getMinValue();
    int max = p6->getMaxValue();
    p6->setMidValue(30);

    h3->add(p6);

    TextLabel* tl = new TextLabel(nullptr, 5, "TL 5");
    Button *b6 = new Button(nullptr, 6, "Hello World Button 6");
    h3->add(tl);
    h3->add(b6);

    MidLayout<MidQt5VerticalLayout> *h4 = new MidLayout<MidQt5VerticalLayout>();

    ComboBox *cb = new ComboBox(nullptr, 7);
    cb->addMidItem("Item 01");
    cb->addMidItem("Item 02");
    cb->addMidItem("Item 03");

    SpinBox* sp = new SpinBox(nullptr, 8, 10, 77);
    Button *b9 = new Button(nullptr, 9, "Hello World Button 9");

    Date date(19, 2, 2019);
    DateEdit *de = new DateEdit(nullptr, 10, date);

    MidWindow<MidQt5Window> *base1 = new MidWindow<MidQt5Window>(0,0,"");
    MidWindow<MidQt5Window> *base2 = new MidWindow<MidQt5Window>(0,0,"");
    Button *b21 = new Button(base1, 21, "Hello World Button 21");
    Button *b22 = new Button(base2, 22, "Hello World Button 22");
    Tab *tab = new Tab(nullptr, 11);
    tab->addMidTab(base1);
    tab->addMidTab(base2);

    Button *b12 = new Button(nullptr, 12, "Hello World Button 12");
    Button *b13 = new Button(nullptr, 13, "Hello World Button 13");
    Button *b14 = new Button(nullptr, 14, "Hello World Button 14");
    Button *b15 = new Button(nullptr, 15, "Hello World Button 15");
    Button *b16 = new Button(nullptr, 16, "Hello World Button 16");

    h4->add(cb);
    h4->add(sp);
    h4->add(b9);
    h4->add(de);
    h4->add(tab);
    h4->add(b12);
    h4->add(b13);
    h4->add(b14);
    h4->add(b15);
    h4->add(b16);

    mainVertical->addMidLayout(h1);
    mainVertical->addMidLayout(h2);
    mainVertical->addMidLayout(h3);
    mainVertical->addMidLayout(h4);
	MidConnect<MidQt5Connect> connector (this);
	MidQT5Handler qt5Handler ([&](){
	    MidMessageDialog<MidQt5MsgDialog> m(this, "SIGA", "Hello world!");
	    m.show();
        return true;
	});
	connector.connect(b1, EventTable::BUTTONCLICK, &qt5Handler);
    GroupBox *gp = new GroupBox(nullptr, 1000, "Main Group Box");
    gp->setMidLayout(*mainVertical);
    MidLayout<MidQt5VerticalLayout> *windowLayout = new MidLayout<MidQt5VerticalLayout>();
    windowLayout->add(gp);
    setMidLayout(*windowLayout);
}


