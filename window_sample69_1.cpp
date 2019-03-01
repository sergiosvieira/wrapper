#include "window_sample68.h"
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

WindowSample68::WindowSample68(int width,
           	   int height,
               const std::string &title,
               MidObject parent):
    MidWindow<MidQt5Window>(width, height, title, parent)
{
    long long id = 1;
    MidLayout<MidQt5VerticalLayout> *vLayout = new MidLayout<MidQt5VerticalLayout>();

    Panel *panel = new Panel(100, 100, *this);
    MidLayout<MidQt5HorizontalLayout> *hLayout = new MidLayout<MidQt5HorizontalLayout>();

    Panel *panelBtn = new Panel(100, 100, *this);
    MidLayout<MidQt5HorizontalLayout> *hLayoutBtn = new MidLayout<MidQt5HorizontalLayout>();

    MidStatusBar<MidQt5StatusBar>* statusBar = new MidStatusBar<MidQt5StatusBar>(id++, "Show the settings dialog", *this);


    this->textLabel = new TextLabel(id++, "É um fato conhecido de todos que um leitor se distrairá com.", nullptr);
    this->textLabelName = new TextLabel(id++, "Name:", nullptr);
    this->tfName = new TextField(id++, "Input your name");

    vLayout->add(*textLabel);
    vLayout->add(*textLabelName);
    vLayout->add(*tfName);


    this->textLabelAge = new TextLabel(id++, "Name:", nullptr);
    this->sp1 = new SpinBox(id++, 10, 77, nullptr);
    this->textLabelSex = new TextLabel(id++, "Name:", nullptr);

    this->cb1 = new ComboBox(id++, nullptr);
    cb1->addMidItem("Male");
    cb1->addMidItem("Female");
    cb1->addMidItem("Clebson");

    this->chBox1 = new CheckBox(id++, "Vote", nullptr);

    //ADD in hLayout
    hLayout->add(*textLabelAge);
    hLayout->add(*sp1);
    hLayout->add(*textLabelSex);
    hLayout->add(*cb1);
    hLayout->add(*chBox1);

    panel->setMidLayout(*hLayout);
    vLayout->add(*panel);

    Line *vl = new Line(id++, MidLineType::HORIZONAL, nullptr);
    vLayout->add(*vl);

    this->button1 = new Button{id++, "Botão 01", nullptr};
    this->button2 = new Button{id++, "Botão 02", nullptr};
    this->button3 = new Button{id++, "Botão 03", nullptr};
    this->button4 = new Button{id++, "Botão 04", nullptr};

    hLayoutBtn->add(*button1);
    hLayoutBtn->add(*button2);
    hLayoutBtn->add(*button3);
    hLayoutBtn->add(*button4);

    panelBtn->setMidLayout(*hLayoutBtn);
    vLayout->add(*panelBtn);

    this->setMidLayout(*vLayout);
}

WindowSample68::~WindowSample68()
{

}


