#include "window_sample15.h"
#include "button.h"
#include "checkbox.h"
#include "textfield.h"
#include "mid-msg-dialog.h"
#include "mid-qt5-msg-dialog.h"
#include "mid-connect.h"
#include "mid-qt5-connect.h"
#include "mid-qt5-button-handler.h"
#include "mid-qt5-action-handler.h"
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
#include "menu-bar.h"
#include "menu.h"
#include "action.h"
#include "line.h"
#include "textEdit.h"
#include "panel.h"
#include "tabPage.h"
#include "tabPage.h"

#include "mid-qt5-status-bar.h"
#include "mid-status-bar.h"

WindowSample15::WindowSample15(int width,
           	   int height,
               const std::string &title,
               MidObject parent):
    MidWindow<MidQt5Window>(width, height, title, parent)
{
    long long id = 1;
    MidLayout<MidQt5VerticalLayout> *vLayout = new MidLayout<MidQt5VerticalLayout>();
    MidStatusBar<MidQt5StatusBar>* statusBar = new MidStatusBar<MidQt5StatusBar>(id++, "Welcome to MidWindow", *this);

    this->setMidLayout(*vLayout);

    MenuBar *menuBar = new MenuBar(id++);
    Menu* menuFile = new Menu(id++, "File");
    Menu* menuHelp = new Menu(id++, "Help");
    Action* saveAction = new Action(id++, "Save", ActionType::DEFAULT, false, "");
    Action* exitAction = new Action(id++, "Exit", ActionType::DEFAULT, false, "");
    menuFile->addMidAction(*saveAction);
    menuFile->addMidAction(*exitAction);
    menuBar->addMidMenu(*menuFile);
    menuBar->addMidMenu(*menuHelp);
    vLayout->setMidMenuBar(*menuBar);

//    MidConnect<MidQt5Connect> *connector  = new MidConnect<MidQt5Connect>(*this);
//    MidQT5ActionHandler qt5ActionHandler ([&](){
//        MidMessageDialog<MidQt5MsgDialog> m(id++, "SIGA", "Action trigerred!", *this);
//        m.show();
//        return true;
//    });
//    connector->connect(*saveAction, EventTable::ACTIONTRIGERRED, &qt5ActionHandler);

}

WindowSample15::~WindowSample15()
{

}


