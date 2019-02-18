#include "window.h"

#include "button.h"
#include "mid-msg-dialog.h"
#include "mid-qt5-msg-dialog.h"
#include "mid-connect.h"
#include "mid-qt5-connect.h"
#include "mid-qt5-handler.h"

Window::Window(int width,
           	   int height,
           	   const char *title):
	MidWindow<MidQt5Window>(width, height, title)
{
	Button *b1 = new Button(this, "Hello World Button");
	MidConnect<MidQt5Connect> connector (this);
	MidQT5Handler qt5Handler ([&](){
	    MidMessageDialog<MidQt5MsgDialog> m(this, "SIGA", "Hello world!");
	    m.show();
        return true;
	});
	connector.connect(b1, EventTable::BUTTONCLICK, &qt5Handler);
}


