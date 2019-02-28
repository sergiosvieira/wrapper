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

WindowSample15::WindowSample15(int width,
           	   int height,
               const std::string &title,
               MidObject parent):
    MidWindow<MidQt5Window>(width, height, title, parent)
{
    long long id = 1;
    MidLayout<MidQt5VerticalLayout> *vLayout = new MidLayout<MidQt5VerticalLayout>();

    this->setMidLayout(*vLayout);

    MenuBar* menuBar = new MenuBar(id++, nullptr);
    Menu* menuFile = new Menu(id++, "File", nullptr);
    Action* saveAction = new Action(id++, "Save", nullptr);
    Action* exitAction = new Action(id++, "Exit", nullptr);
    menuFile->addMidAction(*saveAction);
    menuFile->addMidAction(*exitAction);
    menuBar->addMidMenu(*menuFile);
    vLayout->setMidMenuBar(*menuBar);

    MidConnect<MidQt5Connect> *connector  = new MidConnect<MidQt5Connect>(*this);
    MidQT5ActionHandler qt5ActionHandler ([&](){
        MidMessageDialog<MidQt5MsgDialog> m(id++, "SIGA", "Action trigerred!", *this);
        m.show();
        return true;
    });
    connector->connect(*saveAction, EventTable::ACTIONTRIGERRED, &qt5ActionHandler);

}

WindowSample15::~WindowSample15()
{
    if (this->button1) delete button1;
    if (this->radioButton1) delete radioButton1;
    if (this->textField1) delete textField1;
    if (this->progressBar1) delete progressBar1;
    if (this->textLabel1) delete textLabel1;
    if (this->cb1) delete cb1;
    if (this->sp1) delete sp1;
    if (this->dateEdit1) delete dateEdit1;
    if (this->tab1) delete tab1;
    if (this->gp1) delete gp1;
    //if (this->button2) delete button2;
    //if (this->radioButton2) delete radioButton2;

}


