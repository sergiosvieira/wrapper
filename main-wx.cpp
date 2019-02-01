#include "mid-application.h"
#include "mid-window.h"
#include "mid-button.h"
#include "mid-msg-dialog.h"
// wxWidgets
#include "mid-wx-app.h"
#include "mid-wx-window.h"
#include "mid-wx-button.h"
#include "mid-wx-msg-dialog.h"

#include <wx/msgdlg.h>


int main(int argc, char **argv)
{
    MidApplication<MidWxApp> app(argc, argv);
    MidWindow<MidWxWindow> w(800, 600, "MidGui SIGA");
    MidButton<MidWxButton> b(&w, "Hello World Button");
    w.show();
    /*
    MidMessageDialog<MidWxMsgDialog> d(&w, "Título", "Alô Mundo");
    d.show();
    */
    wxMessageDialog msg(NULL, "Alô Mundo", "Título", wxOK);
    msg.ShowModal();
    return app.execute();
}
