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
#include "textlabel.h"
#include "spin-box.h"

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

    TextLabel* tl = new TextLabel(nullptr, 5, "TL 5");
    Button *b6 = new Button(nullptr, 6, "Hello World Button 6");
    h3->add(tl);
    h3->add(b6);

    MidLayout<MidQt5VerticalLayout> *h4 = new MidLayout<MidQt5VerticalLayout>();
    Button *b7 = new Button(nullptr, 7, "Hello World Button 7");

    SpinBox* sp = new SpinBox(nullptr, 8, 10, 77);

    Button *b9 = new Button(nullptr, 9, "Hello World Button 9");
    Button *b10 = new Button(nullptr, 10, "Hello World Button 10");
    Button *b11 = new Button(nullptr, 11, "Hello World Button 11");
    Button *b12 = new Button(nullptr, 12, "Hello World Button 12");
    Button *b13 = new Button(nullptr, 13, "Hello World Button 13");
    Button *b14 = new Button(nullptr, 14, "Hello World Button 14");
    Button *b15 = new Button(nullptr, 15, "Hello World Button 15");
    Button *b16 = new Button(nullptr, 16, "Hello World Button 16");

    h4->add(b7);
    h4->add(sp);
    h4->add(b9);
    h4->add(b10);
    h4->add(b11);
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
    setMidLayout(*mainVertical);
}


