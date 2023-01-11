#ifndef PANEL_H
#define PANEL_H
#include "pou.h"

//(*Headers(Panel)
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class Panel: public wxDialog
{
	public:

		Panel(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~Panel();

		//(*Declarations(Panel)
		wxBitmapButton* BitmapButton5;
		wxButton* Button1;
		wxButton* Button2;
		wxButton* Button3;
		wxButton* Button4;
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(Panel)
		static const long ID_STATICTEXT1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_BUTTON4;
		static const long ID_BITMAPBUTTON1;
		//*)

	private:

		//(*Handlers(Panel)
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnButton3Click(wxCommandEvent& event);
		void OnButton4Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
		pou xxx;
		wxBitmapButton * pola[0];
        wxBitmap obrazki[5];;

};

#endif
