#include "windowWx.h"

#include "mid-wx-button.h"
#include "buttonWx.h"
#include "textfieldWx.h"
#include "textEditWx.h"
#include "date-edit-wx.h"

#include "progressbarWx.h"
#include "GaugeWx.h"
#include "textlabelWx.h"
#include "combo-box-wx.h"
#include "radio-button-wx.h"
#include "checkboxwx.h"
#include "spin-box-wx.h"
#include "group-box-wx.h"
#include "lineWx.h"
#include "dateWx.h"
#include "panelWx.h"
#include "tabWx.h"

#include "tabPageWx.h"

#include "mid-msg-dialog.h"
#include "mid-wx-msg-dialog.h"
#include "mid-connect.h"
#include "mid-wx-connect.h"
#include "mid-wx-handler.h"

#include "mid-layout.h"
#include "midwxverticallayout.h"
#include "mid-wx-horizontal-layout.h"

#include "mid-menu.h"

WindowWx::WindowWx(int width,
           	       int height,
                   const std::string &title,
                   MidObject parent):
	MidWindow<MidWxWindow>(width, height, title, parent)
{
    long long id = 1;
    MidLayout<MidWxVerticalLayout> *vLayout = new MidLayout<MidWxVerticalLayout>();
    this->button1 = new ButtonWx{ id++, "Botão 01", *this };
    this->radioButton1 = new RadioButtonWx{ id++, "Radio Button 1", *this };
    vLayout->add(*button1);
    vLayout->add(*radioButton1);
    this->textField1 = new TextFieldWx(id++, "Text field text", *this);
    vLayout->add(*textField1);
    this->progressBar1 = new ProgressBarWx(id++, 0, 100, "title", "msg", *this);
    int min = progressBar1->getMinValue();
    int max = progressBar1->getMaxValue();
    progressBar1->setMidValue(100);
    //vLayout->add(*progressBar1);
    this->textLabel1 = new TextLabelWx(id++, "TL 5", *this);
    vLayout->add(*textLabel1);
    this->cb1 = new ComboBoxWx(id++, *this);
    cb1->addMidItem("Item 01");
    cb1->addMidItem("Item 02");
    cb1->addMidItem("Item 03");
    vLayout->add(*cb1);
    this->sp1 = new SpinBoxWx(id++, 10, 77, *this);
    vLayout->add(*sp1);
    DateWx date(19, 2, 2019);
    this->dateEdit1 = new DateEditWx(id++, date, *this);
    vLayout->add(*dateEdit1);

    std::string msg = "A Funceme, como instituição pertencente ao Sistema de Gestão dos Recursos Hídricos do Estado do Ceará, vem implementando um conjunto de ações integradas, que visam obter e gerar, sistematicamente, uma série de informações que subsidiem os órgãos gestores no processo de gerenciamento e planejamento dos recursos hídricos, permitindo o aproveitamento, uso racional e preservação da água.\
            A área de recursos hídricos da Funceme desenvolve projetos em diversas linhas de pesquisa, envolvendo qualidade das águas superficiais e subterrâneas, hidrologia básica, hidráulica de canais, operação de reservatórios, hidrogeologia, sedimentologia, drenagem urbana, interação rio-aquífero, acoplamento de previsão climática a modelagem hidrológica.\
            Concentra seus esforços em três grandes áreas de atuação: Desenvolvimento de Estudos Básicos, Sistema de Suporte e Tratamento de Dados Básicos.";
    this->textEdit1 = new TextEditWx(id++, msg, *this);
    vLayout->add(*textEdit1);

    PanelWx *panel = new PanelWx(100, 100, *this);
    ButtonWx *b17 = new ButtonWx(id++, "Hello World Button 17", *panel);
    MidLayout<MidWxVerticalLayout> *panelLayout = new MidLayout<MidWxVerticalLayout>();
    panelLayout->add(*b17);
    panel->setMidLayout(*panelLayout);
    vLayout->add(*panel);


    this->tab1 = new TabWx(8, "tab1", *this);
    this->base1 = new TabPageWx(id++, 600, 800, "base1", *tab1);

    ButtonWx *buttonTab1 = new ButtonWx{ id++, "Botão tab1", *base1 };
    MidLayout<MidWxVerticalLayout> *vLayoutTab1 = new MidLayout<MidWxVerticalLayout>();
    vLayoutTab1->add(*buttonTab1);
    this->base1->setMidLayout(*vLayoutTab1);

    this->base2 = new TabPageWx(id++, 600, 800, "base2", *tab1);
    ButtonWx *buttonTab2 = new ButtonWx{ id++, "Botão tab2", *base2 };
    MidLayout<MidWxVerticalLayout> *vLayoutTab2 = new MidLayout<MidWxVerticalLayout>();
    vLayoutTab2->add(*buttonTab2);
    this->base2->setMidLayout(*vLayoutTab2);



    tab1->addMidTab(*base1, "tab1");
    tab1->addMidTab(*base2, "tab2");
    vLayout->add(*tab1);
    MidConnect<MidWxConnect> *connector = new MidConnect<MidWxConnect>(*this);
    MidWxButtonHandler *qt5ButtonHandler = new MidWxButtonHandler([this]() {
        //TODO: produce id of elements in a static way
        int nextId = 0;
        MidMessageDialog<MidWxMsgDialog> m(nextId, "SIGA", "Hello world!", *this);
        m.show();
        return true;
    });
    connector->connect(*button1, EventTable::BUTTONCLICK, qt5ButtonHandler);
    this->gp1 = new GroupBoxWx(id++, "Main Group Box", *this);
    MidLayout<MidWxHorizontalLayout> *h1 = new MidLayout<MidWxHorizontalLayout>();
    this->button2 = new ButtonWx{ id++, "Botão 02", *gp1 };
    this->radioButton2 = new RadioButtonWx{ id++, "Radio Button 2", *gp1 };

    this->chBox1 = new CheckBoxWx(id++, "Hello World CheckBox", *gp1);

    h1->add(*button2);
    h1->add(*radioButton2);

    LineWx *vl = new LineWx(id++, MidLineType::VERTICAL, *gp1);
    h1->add(*vl);

    h1->add(*chBox1);
    gp1->setMidLayout(*h1);

    LineWx *hl = new LineWx(id++, MidLineType::HORIZONAL, *this);
    vLayout->add(*hl);

    vLayout->add(*gp1);

    /*MenuBarWx* menuBar = new MenuBarWx(id++, nullptr);
    MenuWx* menuFile = new MenuWx(id++, "File", nullptr);
    Action* saveAction = new Action(id++, "Save", nullptr);
    Action* exitAction = new Action(id++, "Exit", nullptr);
    menuFile->addMidAction(*saveAction);
    menuFile->addMidAction(*exitAction);
    menuBar->addMidMenu(*menuFile);
    vLayout->setMidMenuBar(*menuBar);

    MidQT5ActionHandler qt5ActionHandler([&]() {
        MidMessageDialog<MidQt5MsgDialog> m(id++, "SIGA", "Action trigerred!", *this);
        m.show();
        return true;
    });
    connector->connect(*saveAction, EventTable::ACTIONTRIGERRED, &qt5ActionHandler);*/
    this->setMidLayout(*vLayout);

    /*long long id = 1;
    MidLayout<MidWxVerticalLayout> *mainVertical = new MidLayout<MidWxVerticalLayout>();
    MidLayout<MidWxHorizontalLayout> *h1 = new MidLayout<MidWxHorizontalLayout>();

    ButtonWx *button = new ButtonWx(this, id++, "Hello World Button 1");

    LineWx *vertLine = new LineWx(this, id++, MidLineType::VERTICAL);
    LineWx *horLine = new LineWx(this, id++, MidLineType::HORIZONAL);

    ProgressbarWx *progressBar = new ProgressbarWx(this, id++, 0, 100, wxString::FromUTF8("Título do Janela"), "Carregando algo:");
    progressBar->setMidValue(30);
    progressBar->setMidValue(77, "Hello world with 77 %");

    GaugeWx *gauge = new GaugeWx(this, id++, 0, 100);
    gauge->setMidValue(40);
    gauge->setMidValue(87, "Hello world with 87 %");

    TextLabelWx *label = new TextLabelWx(this, id++, "Hello World LABEL");
    TextFieldWx *tf = new TextFieldWx(this, id++, "Hello World tf");
    ComboBoxWx *cb = new ComboBoxWx(this, id++);
    cb->addMidItem("Item 01");
    cb->addMidItem("Item 02");
    cb->addMidItem("Item 03");

    RadioButtonWx *rb = new RadioButtonWx(this, id++, "radio button hello");
    CheckBoxWx *checkBox = new CheckBoxWx(this, id++, "check box hello");
    SpinBoxWx *spinBox = new SpinBoxWx(this, id++, 50, 77);
    DateWx *date = new DateWx(19, 2, 2019);
    DateEditWx *de = new DateEditWx(this, id++, *date);

    std::string msg = "A Funceme, como instituição pertencente ao Sistema de Gestão dos Recursos Hídricos do Estado do Ceará, vem implementando um conjunto de ações integradas, que visam obter e gerar, sistematicamente, uma série de informações que subsidiem os órgãos gestores no processo de gerenciamento e planejamento dos recursos hídricos, permitindo o aproveitamento, uso racional e preservação da água.\n\
            A área de recursos hídricos da Funceme desenvolve projetos em diversas linhas de pesquisa, envolvendo qualidade das águas superficiais e subterrâneas, hidrologia básica, hidráulica de canais, operação de reservatórios, hidrogeologia, sedimentologia, drenagem urbana, interação rio-aquífero, acoplamento de previsão climática a modelagem hidrológica.\n\
            Concentra seus esforços em três grandes áreas de atuação: Desenvolvimento de Estudos Básicos, Sistema de Suporte e Tratamento de Dados Básicos.";
    TextEditWx *textEdit = new TextEditWx(this, id++, msg.c_str());

    TabWx *tabContainer = new TabWx(this, id++);
    TabPageWx *panelTab1 = new TabPageWx(tabContainer, 100, 100); //Deve ter tabContainer como pai
    TabPageWx *panelTab2 = new TabPageWx(tabContainer, 100, 100); //Deve ter tabContainer como pai
    tabContainer->addMidTab(panelTab1, "Aba 1");
    tabContainer->addMidTab(panelTab2, "Aba 2");

    h1->add(button);
    h1->add(vertLine);
    h1->add(progressBar);
    h1->add(gauge);

    MidLayout<MidWxVerticalLayout> *h2 = new MidLayout<MidWxVerticalLayout>();
    h2->add(label);
    h2->add(horLine);
    h2->add(tf);
    h2->add(cb);
    h2->add(rb);
    h2->add(checkBox);
    h2->add(spinBox);
    h2->add(textEdit);
    h2->add(de);
    h2->add(tabContainer);

    progressBar->closeMidProgressBar();

    mainVertical->addMidLayout(h1);
    mainVertical->addMidLayout(h2);



    //novo layout
    GroupBoxWx *gp = new GroupBoxWx(this, id++, "Main Group Box");
    gp->setMidLayout(*mainVertical);

    MidLayout<MidWxVerticalLayout> *windowLayout = new MidLayout<MidWxVerticalLayout>();
    windowLayout->add(gp);
    setMidLayout(*windowLayout);

    MidConnect<MidWxConnect> connector(this);
    MidWxButtonHandler* wxButtonHandler = new MidWxButtonHandler([&]() {
        MidMessageDialog<MidWxMsgDialog> m(this, "SIGA", "Hello world!");
        m.show();
        return true;
    });
    connector.connect(button, EventTable::BUTTONCLICK, wxButtonHandler);*/
}

WindowWx::~WindowWx()
{
    

}


