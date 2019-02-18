#include "window.h"

#include "button.h"
#include "mid-msg-dialog.h"
#include "mid-qt5-msg-dialog.h"
#include "mid-connect.h"
#include "mid-qt5-connect.h"
#include "mid-qt5-handler.h"

#include "mid-layout.h"
#include "midqtverticallayout.h"

Window::Window(int width,
           	   int height,
           	   const char *title):
	MidWindow<MidQt5Window>(width, height, title)
{
    MidLayout<MidQtVerticalLayout> layout;

    Button *b1 = new Button(this, "Hello World Button 1");
    Button *b2 = new Button(this, "Hello World Button 2");
    Button *b3 = new Button(this, "Hello World Button 3");

	MidConnect<MidQt5Connect> connector (this);
	MidQT5Handler qt5Handler ([&](){
	    MidMessageDialog<MidQt5MsgDialog> m(this, "SIGA", "Hello world!");
	    m.show();
        return true;
	});
	connector.connect(b1, EventTable::BUTTONCLICK, &qt5Handler);

    layout.add(b1);
    layout.add(b2);
    layout.add(b3);

    //implement setLayout(..)
    setLayout(layout);
}


