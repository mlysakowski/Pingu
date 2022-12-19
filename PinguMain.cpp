/***************************************************************
 * Name:      PinguMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Zuzanna Kozyra, Michal Lysakowski ()
 * Created:   2022-12-14
 * Copyright: Zuzanna Kozyra, Michal Lysakowski ()
 * License:
 **************************************************************/

#include "PinguMain.h"
#include <wx/msgdlg.h>
#include <iostream>
#include <map>

using namespace std;

//(*InternalHeaders(PinguDialog)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

#undef _
#define _(s) wxString::FromUTF8(s)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(PinguDialog)
const long PinguDialog::ID_STATICTEXT1 = wxNewId();
const long PinguDialog::ID_STATICTEXT10 = wxNewId();
const long PinguDialog::ID_BITMAPBUTTON1 = wxNewId();
const long PinguDialog::ID_BITMAPBUTTON2 = wxNewId();
const long PinguDialog::ID_BITMAPBUTTON3 = wxNewId();
const long PinguDialog::ID_BITMAPBUTTON4 = wxNewId();
const long PinguDialog::ID_STATICTEXT2 = wxNewId();
const long PinguDialog::ID_STATICTEXT3 = wxNewId();
const long PinguDialog::ID_STATICTEXT4 = wxNewId();
const long PinguDialog::ID_STATICTEXT5 = wxNewId();
const long PinguDialog::ID_STATICTEXT6 = wxNewId();
const long PinguDialog::ID_STATICTEXT7 = wxNewId();
const long PinguDialog::ID_STATICTEXT8 = wxNewId();
const long PinguDialog::ID_STATICTEXT9 = wxNewId();
//*)

BEGIN_EVENT_TABLE(PinguDialog,wxDialog)
    //(*EventTable(PinguDialog)
    //*)
END_EVENT_TABLE()

PinguDialog::PinguDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(PinguDialog)
    wxFlexGridSizer* FlexGridSizer1;
    wxFlexGridSizer* FlexGridSizer2;

    Create(parent, id, _("PINGU"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxCLOSE_BOX|wxMINIMIZE_BOX, _T("id"));
    FlexGridSizer1 = new wxFlexGridSizer(3, 1, 0, 0);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Wybierz swoją postać"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText10 = new wxStaticText(this, ID_STATICTEXT10, _("Uwaga! \nKażda z postaci ma swoją unikatową i ukrytą umiejętność.\n"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT10"));
    FlexGridSizer1->Add(StaticText10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer2 = new wxFlexGridSizer(0, 4, 0, 0);
    BitmapButton0 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("images\\szeregowy.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    FlexGridSizer2->Add(BitmapButton0, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton1 = new wxBitmapButton(this, ID_BITMAPBUTTON2, wxBitmap(wxImage(_T("images\\skipper.jpeg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
    FlexGridSizer2->Add(BitmapButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton2 = new wxBitmapButton(this, ID_BITMAPBUTTON3, wxBitmap(wxImage(_T("images\\rico.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
    FlexGridSizer2->Add(BitmapButton2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton3 = new wxBitmapButton(this, ID_BITMAPBUTTON4, wxBitmap(wxImage(_T("images\\kowalski.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
    FlexGridSizer2->Add(BitmapButton3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Szeregowy"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    wxFont StaticText2Font(12,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    FlexGridSizer2->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Skipper"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    wxFont StaticText3Font(12,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText3->SetFont(StaticText3Font);
    FlexGridSizer2->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Rico"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    wxFont StaticText4Font(12,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText4->SetFont(StaticText4Font);
    FlexGridSizer2->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Kowalski"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    wxFont StaticText5Font(12,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText5->SetFont(StaticText5Font);
    FlexGridSizer2->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Najmłodszy i najniższy stopniem spośród pingwinów. Jest infantylny, wrażliwy, strachliwy i naiwny."), wxDefaultPosition, wxSize(300,120), 0, _T("ID_STATICTEXT6"));
    FlexGridSizer2->Add(StaticText6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Dowódca grupy, odpowiedzialny\nza podejmowanie decyzji i organizację misji. Najlepiej wyszkolony członek zespołu, pewny siebie, odważny."), wxDefaultPosition, wxSize(300,120), 0, _T("ID_STATICTEXT7"));
    FlexGridSizer2->Add(StaticText7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("Specjalista od materiałów wybuchowych,\na zarazem ulubieniec Skippera.\nJest psychopatą mającym obsesję na punkcie wybuchów."), wxDefaultPosition, wxSize(300,120), 0, _T("ID_STATICTEXT8"));
    FlexGridSizer2->Add(StaticText8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText9 = new wxStaticText(this, ID_STATICTEXT9, _("Zastępca a zarazem doradca Skippera,\nprzez którego często proszony jest\no podanie możliwych rozwiązań problemu."), wxDefaultPosition, wxSize(300,120), 0, _T("ID_STATICTEXT9"));
    FlexGridSizer2->Add(StaticText9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(FlexGridSizer1);
    FlexGridSizer1->Fit(this);
    FlexGridSizer1->SetSizeHints(this);

    Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&PinguDialog::OnBitmapButton0Click);
    //*)

    pola[0]=BitmapButton0;
    pola[1]=BitmapButton1;
    pola[2]=BitmapButton2;
    pola[3]=BitmapButton3;

     for(int i=0;i<4;i++){
        Connect(pola[i]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&PinguDialog::OnBitmapButton0Click);
        id_to_nr[pola[i]->GetId()]=i;
     }
}

PinguDialog::~PinguDialog()
{
    //(*Destroy(PinguDialog)
    //*)
}

void PinguDialog::OnQuit(wxCommandEvent& event)
{
    Close();
}

void PinguDialog::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void PinguDialog::OnBitmapButton0Click(wxCommandEvent& event)
{
    int id=event.GetId();
    int nr=id_to_nr[id];
    wxString w;
    w<<nr;
    wxMessageBox(w);
}
