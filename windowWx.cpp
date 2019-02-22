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

#include "mid-msg-dialog.h"
#include "mid-wx-msg-dialog.h"
#include "mid-connect.h"
#include "mid-wx-connect.h"
#include "mid-wx-handler.h"

#include "mid-layout.h"
#include "midwxverticallayout.h"
#include "mid-wx-horizontal-layout.h"

WindowWx::WindowWx(int width,
           	   int height,
           	   const char *title):
	MidWindow<MidWxWindow>(width, height, title)
{
    long long id = 1;
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

    /*TabWx *tabContainer = new TabWx(this, id++);
    PanelWx *panelTab1 = new PanelWx(this, 100, 100); //Deve ter tabContainer como pai
    PanelWx *panelTab2 = new PanelWx(this, 100, 100); //Deve ter tabContainer como pai
    tabContainer->addMidTab(panelTab1, "Aba 1");
    tabContainer->addMidTab(panelTab2, "Aba 1");*/

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
    //h2->add(tabContainer);

    //Está funcionando, mas vou comentar
    /*PanelWx *panel = new PanelWx(this, 100, 100);
    ButtonWx *b17 = new ButtonWx(this, id++, "Button in panel"); //O pai de Button deve ser panel
    MidLayout<MidWxVerticalLayout> *panelLayout = new MidLayout<MidWxVerticalLayout>();
    panelLayout->add(b17);
    panel->setMidLayout(*panelLayout);
    h2->add(panel);*/

    progressBar->closeMidProgressBar();
    //gauge->closeMidGauge();

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
    connector.connect(button, EventTable::BUTTONCLICK, wxButtonHandler);
    //setMidLayout(*mainVertical);
}


