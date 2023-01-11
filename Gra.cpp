#include "Gra.h"

//(*InternalHeaders(Gra)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

#include <wx/msgdlg.h>
#include <iostream>
#include "pou.h"
#include "pkn.h"
#include <cstdlib>

using namespace std;

//(*IdInit(Gra)
const long Gra::ID_BITMAPBUTTON1 = wxNewId();
const long Gra::ID_BITMAPBUTTON2 = wxNewId();
const long Gra::ID_BITMAPBUTTON3 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Gra,wxDialog)
	//(*EventTable(Gra)
	//*)
END_EVENT_TABLE()

Gra::Gra(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Gra)
	wxFlexGridSizer* FlexGridSizer1;

	Create(parent, id, _("Kamieñ,  papier,  no¿yce"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	FlexGridSizer1 = new wxFlexGridSizer(0, 3, 0, 0);
	BitmapButton1 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("C:\\Michal\\projekt z programowania\\Pingu\\images\\papier.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	FlexGridSizer1->Add(BitmapButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton2 = new wxBitmapButton(this, ID_BITMAPBUTTON2, wxBitmap(wxImage(_T("C:\\Michal\\projekt z programowania\\Pingu\\images\\kamien.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
	FlexGridSizer1->Add(BitmapButton2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton3 = new wxBitmapButton(this, ID_BITMAPBUTTON3, wxBitmap(wxImage(_T("C:\\Michal\\projekt z programowania\\Pingu\\images\\nozyce.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
	FlexGridSizer1->Add(BitmapButton3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);

	Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Gra::OnBitmapButton1Click);
	Connect(ID_BITMAPBUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Gra::OnBitmapButton2Click);
	Connect(ID_BITMAPBUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Gra::OnBitmapButton3Click);
	//*)


Fit();
        SetIcon(wxICON(aaaa));

}

Gra::~Gra()
{
	//(*Destroy(Gra)
	//*)
}


void Gra::OnBitmapButton1Click(wxCommandEvent& event)
{
   srand(time(0));
    int r = rand()%10000+1;
    if(r%3==0||r%11==0||r%8==0){
        wxMessageBox(_("Pingu wygrywa!"));
    }else if(r%2==0||r%9==0){
        wxMessageBox(_("Wygrywasz!"));
    }else {
        wxMessageBox(_("Remis!"));
    }
}

void Gra::OnBitmapButton2Click(wxCommandEvent& event)
{
 srand(time(0));
    int r = rand()%10000+1;
    if(r%3==0||r%11==0||r%8==0){
        wxMessageBox(_("Pingu wygrywa!"));
    }else if(r%2==0||r%9==0){
        wxMessageBox(_("Wygrywasz!"));
    }else {
        wxMessageBox(_("Remis!"));
    }
}

void Gra::OnBitmapButton3Click(wxCommandEvent& event)
{
     srand(time(0));
    int r = rand()%10000+1;
    if(r%3==0||r%11==0||r%8==0){
        wxMessageBox(_("Pingu wygrywa!"));
    }else if(r%2==0||r%9==0){
        wxMessageBox(_("Wygrywasz!"));
    }else {
        wxMessageBox(_("Remis!"));
    }
}
