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

Window::Window(int width,
           	   int height,
           	   const char *title):
	MidWindow<MidQt5Window>(width, height, title)
{
    MidLayout<MidQt5VerticalLayout> *mainVertical = new MidLayout<MidQt5VerticalLayout>();
    MidLayout<MidQt5HorizontalLayout> *h1 = new MidLayout<MidQt5HorizontalLayout>();

    Button *b1 = new Button(nullptr, 1, "Hello World Button 1");
    RadioButton *rb1 = new RadioButton(nullptr, 2, "Radio Button 1");

    MidLayout<MidQt5VerticalLayout> *h2 = new MidLayout<MidQt5VerticalLayout>();;

    Checkbox *c4 = new Checkbox(nullptr, 4, "Hello World Button 4");
    TextField * tf = new TextField(nullptr, 2, "Text field text");

    h1->add(b1);
    h1->add(rb1);
    h2->add(tf);
    h2->add(c4);

    MidLayout<MidQt5HorizontalLayout> *h3 = new MidLayout<MidQt5HorizontalLayout>();

    Button *b5 = new Button(nullptr, 5, "Hello World Button 5");
    Button *b6 = new Button(nullptr, 6, "Hello World Button 6");

    h3->add(b5);
    h3->add(b6);

    Progressbar *p6 = new Progressbar(nullptr, 7);
    //p6->setMidEnable(true);
    //p6->setMidValue(30);
    h3->add(p6);


    mainVertical->addMidLayout(h1);
    mainVertical->addMidLayout(h2);
    mainVertical->addMidLayout(h3);
	MidConnect<MidQt5Connect> connector (this);
	MidQT5Handler qt5Handler ([&](){
	    MidMessageDialog<MidQt5MsgDialog> m(this, "SIGA", "Hello world!");
	    m.show();
        return true;
	});
	connector.connect(b1, EventTable::BUTTONCLICK, &qt5Handler);
    //connector.connect(b3, EventTable::BUTTONCLICK, &qt5Handler);
    setMidLayout(*mainVertical);
}


