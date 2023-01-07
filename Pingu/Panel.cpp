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

using namespace std;

//(*IdInit(Panel)
const long Panel::ID_STATICTEXT1 = wxNewId();
const long Panel::ID_BUTTON1 = wxNewId();
const long Panel::ID_BUTTON2 = wxNewId();
const long Panel::ID_BUTTON3 = wxNewId();
const long Panel::ID_BUTTON4 = wxNewId();
const long Panel::ID_BITMAPBUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Panel,wxDialog)
	//(*EventTable(Panel)
	//*)
END_EVENT_TABLE()


extern int numer_pingwina;

Panel::Panel(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(Panel)
	wxFlexGridSizer* FlexGridSizer1;
	wxFlexGridSizer* FlexGridSizer2;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	SetBackgroundColour(wxColour(218,239,239));
	FlexGridSizer1 = new wxFlexGridSizer(0, 2, 0, 0);
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
	Button4 = new wxButton(this, ID_BUTTON4, _("Od nowa"), wxDefaultPosition, wxSize(300,60), 0, wxDefaultValidator, _T("ID_BUTTON4"));
	FlexGridSizer2->Add(Button4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton5 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("images\\baby.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	FlexGridSizer1->Add(BitmapButton5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Panel::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Panel::OnButton2Click);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Panel::OnButton3Click);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Panel::OnButton4Click);
	//*)


    //obrazki[0]=wxBitmap(wxImage(_T("images\\szeregowybrudas.png")));
    //obrazki[1]=wxBitmap(wxImage(_T("images\\skipperbrudas.jpg")));
    //obrazki[2]=wxBitmap(wxImage(_T("images\\ricobrudas.jpg")));
    //obrazki[3]=wxBitmap(wxImage(_T("images\\kowalskibrudas.jpg")));

}

Panel::~Panel()
{
	//(*Destroy(Panel)
	//*)
}
#include <unistd.h>

void Panel::OnButton1Click(wxCommandEvent& event)
{
    Sleep(5);
    //pola[nr_pola]->SetBitmap(obrazki[numer_obrazka]);
  pola[0] -> SetBitmap(obrazki[3]);
}

void Panel::OnButton2Click(wxCommandEvent& event)
{


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
    xxx.reset();
}
