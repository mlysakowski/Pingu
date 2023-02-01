#include "Panel.h"

//(*InternalHeaders(Panel)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

#include <wx/msgdlg.h>
#include <iostream>
#include "pou.h"
#include "wx/sound.h"
#include "PinguApp.h"
#include "PinguMain.h"
#include <wx/timer.h>
#include <sstream>
#include <ctype.h>

using namespace std;

int x=0;

#undef _
#define _(s) wxString::FromUTF8(s)

//(*IdInit(Panel)
const long Panel::ID_STATICTEXT1 = wxNewId();
const long Panel::ID_BUTTON1 = wxNewId();
const long Panel::ID_BUTTON2 = wxNewId();
const long Panel::ID_BUTTON3 = wxNewId();
const long Panel::ID_BUTTON5 = wxNewId();
const long Panel::ID_BUTTON4 = wxNewId();
const long Panel::ID_BUTTON6 = wxNewId();
const long Panel::ID_BITMAPBUTTON1 = wxNewId();
const long Panel::ID_TIMER1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Panel,wxDialog)
	//(*EventTable(Panel)
	//*)
END_EVENT_TABLE()

#pragma comment(lib, "Winmm.lib")
extern int numer_pingwina;

Panel::Panel(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(Panel)
	wxFlexGridSizer* FlexGridSizer1;
	wxFlexGridSizer* FlexGridSizer2;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	SetBackgroundColour(wxColour(218,239,239));
	FlexGridSizer1 = new wxFlexGridSizer(2, 2, 0, 0);
	FlexGridSizer2 = new wxFlexGridSizer(0, 1, 0, 0);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Panel Sterowania"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(36,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial Black"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	FlexGridSizer2->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(this, ID_BUTTON1, _("Nakarm Pingwina"), wxDefaultPosition, wxSize(300,60), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer2->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, ID_BUTTON2, _("Umyj Pingwina"), wxDefaultPosition, wxSize(300,60), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	FlexGridSizer2->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button3 = new wxButton(this, ID_BUTTON3, _("Zagraj z Pingwinem"), wxDefaultPosition, wxSize(300,60), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	FlexGridSizer2->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button5 = new wxButton(this, ID_BUTTON5, _("Sprawdź swoją liczbę punktów"), wxDefaultPosition, wxSize(300,60), 0, wxDefaultValidator, _T("ID_BUTTON5"));
	FlexGridSizer2->Add(Button5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button4 = new wxButton(this, ID_BUTTON4, _("Od nowa"), wxDefaultPosition, wxSize(300,60), 0, wxDefaultValidator, _T("ID_BUTTON4"));
	FlexGridSizer2->Add(Button4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button6 = new wxButton(this, ID_BUTTON6, _("\?"), wxDefaultPosition, wxSize(30,30), 0, wxDefaultValidator, _T("ID_BUTTON6"));
	FlexGridSizer2->Add(Button6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton5 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("images\\baby.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	FlexGridSizer1->Add(BitmapButton5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	Timer1.SetOwner(this, ID_TIMER1);
	Timer1.Start(50, false);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Panel::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Panel::OnButton2Click);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Panel::OnButton3Click);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Panel::OnButton5Click);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Panel::OnButton4Click);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Panel::OnButton6Click);
	Connect(ID_TIMER1,wxEVT_TIMER,(wxObjectEventFunction)&Panel::OnTimer1Trigger);
	//*)


    obrazki[0]=wxBitmap(wxImage(_T("images\\szeregowybrudas.jpg")));
    obrazki[1]=wxBitmap(wxImage(_T("images\\skipperbrudas.png")));
    obrazki[2]=wxBitmap(wxImage(_T("images\\ricobrudas.jpg")));
    obrazki[3]=wxBitmap(wxImage(_T("images\\kowalskibrudas.jpg")));
    obrazki[4]=wxBitmap(wxImage(_T("images\\babybrudas.jpg")));
    obrazki[5]=wxBitmap(wxImage(_T("images\\szeregowy.jpg")));
    obrazki[6]=wxBitmap(wxImage(_T("images\\skipper.jpeg")));
    obrazki[7]=wxBitmap(wxImage(_T("images\\rico.jpg")));
    obrazki[8]=wxBitmap(wxImage(_T("images\\kowalski.jpg")));
    obrazki[9]=wxBitmap(wxImage(_T("images\\baby.jpg")));
    obrazki[10]=wxBitmap(wxImage(_T("images\\umiera.jpg")));



    Fit();
        SetIcon(wxICON(aaaa));

        //wxSound *mySound;
        //mySound = new wxSound();


       // wxSound *mySound;

        //mySound = new wxSound(_T("Minecraft-eating-sound-effect.wav"), false);

;
}

Panel::~Panel()
{
	//(*Destroy(Panel)
	//*)
}
#include <unistd.h>

void Panel::OnButton1Click(wxCommandEvent& event)
{
    x=x+3;
    //mySound->Play();
    //wxSound * mySound;
	//mySound = new wxSound (_T("Minecraft-eating-sound-effect.wav"), false );

	wxString mess=_("Karmisz Pingu! Liczba punktów: "); mess<<x;
        wxMessageBox(mess,_(""));

    if(x<0||x>=50)
    {
        x=0;
        BitmapButton5->SetBitmap(obrazki[10]);
        wxMessageBox(_("Koniec! Spróbuj ponownie!"),_("Koniec!"),wxICON_ERROR);
    }
    if(x<20){
    BitmapButton5->SetBitmap(obrazki[4]);
    }
    if(x==20){
      BitmapButton5->SetBitmap(obrazki[numer_pingwina]);
        //BitmapButton5->SetBitmap(obrazki[numer_pingwina+5]);
    }
    if (x>20){
        BitmapButton5->SetBitmap(obrazki[numer_pingwina]);
    }
}

void Panel::OnButton2Click(wxCommandEvent& event)
{
    x++;
    wxString mess=_("Myjesz Pingu! Liczba punktów: "); mess<<x;
        wxMessageBox(mess,_(""));
        if(x<0||x>=50)
    {
        x=0;
        BitmapButton5->SetBitmap(obrazki[10]);
        wxMessageBox(_("Koniec! Spróbuj ponownie!"),_("Koniec!"),wxICON_ERROR);
    }
    if(x<20){
        BitmapButton5->SetBitmap(obrazki[9]);
    }else{
    BitmapButton5->SetBitmap(obrazki[numer_pingwina+5]);
    }

}

#include "Panel.h"
#include "PinguApp.h"
#include "Gra.h"

void Panel::OnButton3Click(wxCommandEvent& event)
{
    Gra * np = new Gra(this);
    np->ShowModal();
    delete np;

}

void Panel::OnButton4Click(wxCommandEvent& event)
{
    x=0;
    this -> Destroy();
}




void Panel::OnButton5Click(wxCommandEvent& event)
{
    wxString mess=_("Twoja aktualna liczba punktów: "); mess<<x;
        wxMessageBox(mess,_(""));
}

void Panel::OnTimer1Trigger(wxTimerEvent& event)
{
    static int lt=0;
    lt++;
    double t=lt*Timer1.GetInterval()/1000.0;
    //StaticText2->SetLabel(wxString::Format("%.2f",t));
    if(t>=10.00)
    {
        x--;
        lt = 0;
   }
}

void Panel::OnButton6Click(wxCommandEvent& event)
{
    wxMessageBox(_("Twoim zadaniem jest opieka nad wybranym pingwinem. Za konkretne czynności otrzymujesz daną ilość punktów: karmienie: +3 punkty, mycie: +1 punkt. Dodatkowo, podczas grania z pingwinem: Ty wygrywasz: -3 punkty, Pingwin wygrywa: +2 punkty, reims: +1 punkt. Musisz szybko zdobywać punkty, ponieważ z upływem czasu będziesz tracił 1 punkt. Gdy liczba Twoich punktów będzie mniejsza od 0 lub większa od 50, oznacza to, że Pingwin nie otrzymał poprawnej opieki i umarł."),_("Instrukcja"));
}
