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
const long Panel::ID_STATICBITMAP1 = wxNewId();
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
	wxFlexGridSizer* FlexGridSizer3;

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
	FlexGridSizer3 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("C:\\Michal\\projekt z programowania\\Pingu\\images\\baby.jpg"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	FlexGridSizer3->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Panel::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Panel::OnButton2Click);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Panel::OnButton3Click);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Panel::OnButton4Click);
	//*)

	wxString xx="xxx "; xx << numer_pingwina;
	wxMessageBox(xx);

}

Panel::~Panel()
{
	//(*Destroy(Panel)
	//*)
}


void Panel::OnButton1Click(wxCommandEvent& event)
{


}

void Panel::OnButton2Click(wxCommandEvent& event)
{

}

void Panel::OnButton3Click(wxCommandEvent& event)
{

}

void Panel::OnButton4Click(wxCommandEvent& event)
{
    xxx.reset();
}
