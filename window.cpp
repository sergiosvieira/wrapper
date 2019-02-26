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
#include "group-box.h"
#include "textlabel.h"
#include "spin-box.h"
#include "date-edit.h"
#include "date.h"
#include "mid-date.h"
#include "combo-box.h"
#include "tab.h"

Window::Window(int width,
           	   int height,
               const std::string &title,
               MidObject parent):
    MidWindow<MidQt5Window>(width, height, title, parent)
{
    MidLayout<MidQt5VerticalLayout> *vLayout = new MidLayout<MidQt5VerticalLayout>();
    this->button1 = new Button{0, "Botão 01", nullptr};
    this->radioButton1 = new RadioButton{1, "Radio Button 1", nullptr};
    vLayout->add(*button1);
    vLayout->add(*radioButton1);
    this->textField1 = new TextField(2, "Text field text", nullptr);
    vLayout->add(*textField1);
    this->progressBar1 = new Progressbar(3, nullptr);
    int min = progressBar1->getMinValue();
    int max = progressBar1->getMaxValue();
    progressBar1->setMidValue(30);
    vLayout->add(*progressBar1);
    this->textLabel1 = new TextLabel(4, "TL 5", nullptr);
    vLayout->add(*textLabel1);
    this->cb1 = new ComboBox(5, nullptr);
    cb1->addMidItem("Item 01");
    cb1->addMidItem("Item 02");
    cb1->addMidItem("Item 03");
    vLayout->add(*cb1);
    this->sp1 = new SpinBox(6, 10, 77, nullptr);
    vLayout->add(*sp1);
    Date date(19, 2, 2019);
    this->dateEdit1 = new DateEdit(7, date, nullptr);
    vLayout->add(*dateEdit1);
    this->base1 = new MidWindow<MidQt5Window>(0,0,"base1", nullptr);
    this->base2 = new MidWindow<MidQt5Window>(0,0,"base2", nullptr);
    this->tab1 = new Tab(8, "tab1", nullptr);
    tab1->addMidTab(*base1);
    tab1->addMidTab(*base2);
    vLayout->add(*tab1);
    MidConnect<MidQt5Connect> *connector  = new MidConnect<MidQt5Connect>(this);
    MidQT5Handler qt5Handler ([&](){
        MidMessageDialog<MidQt5MsgDialog> m(this, "SIGA", "Hello world!");
        m.show();
        return true;
    });
    connector->connect(button1, EventTable::BUTTONCLICK, &qt5Handler);
    this->setMidLayout(*vLayout);
}

Window::~Window()
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
}


