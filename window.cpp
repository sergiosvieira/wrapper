#include "window.h"

#include "button.h"
#include "mid-msg-dialog.h"
#include "mid-qt5-msg-dialog.h"
#include "mid-connect.h"
#include "mid-qt5-connect.h"
#include "mid-qt5-handler.h"

#include "mid-layout.h"
#include "midqtverticallayout.h"
#include "mid-qt5-horizontal-layout.h"

Window::Window(int width,
           	   int height,
           	   const char *title):
	MidWindow<MidQt5Window>(width, height, title)
{
    MidLayout<MidQt5VerticalLayout> *mainVertical = new MidLayout<MidQt5VerticalLayout>();
    MidLayout<MidQt5HorizontalLayout> *h1 = new MidLayout<MidQt5HorizontalLayout>();
    Button *b1 = new Button(nullptr, "Hello World Button 1");
    Button *b2 = new Button(nullptr, "Hello World Button 2");
    h1->add(b1);
    h1->add(b2);
    MidLayout<MidQt5VerticalLayout> *h2 = new MidLayout<MidQt5VerticalLayout>();;
    Button *b3 = new Button(nullptr, "Hello World Button 3");
    Button *b4 = new Button(nullptr, "Hello World Button 4");
    h2->add(b3);
    h2->add(b4);
    MidLayout<MidQt5HorizontalLayout> *h3 = new MidLayout<MidQt5HorizontalLayout>();
    Button *b5 = new Button(nullptr, "Hello World Button 5");
    Button *b6 = new Button(nullptr, "Hello World Button 6");
    h3->add(b5);
    h3->add(b6);

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
    connector.connect(b3, EventTable::BUTTONCLICK, &qt5Handler);
    setMidLayout(*mainVertical);
}

