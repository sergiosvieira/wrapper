#include "mid-application.h"
#include "mid-window.h"
#include "mid-button.h"
#include "mid-msg-dialog.h"
// wxWidgets
#include "mid-wx-app.h"
#include "mid-wx-window.h"

int main(int argc, char **argv)
{
    MidApplication<MidWxApp> app(argc, argv);
    MidWindow<MidWxWindow> w(800, 600, "MidGui SIGA");
    w.show();
    return app.execute();
}
