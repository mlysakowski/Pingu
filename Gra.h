#ifndef GRA_H
#define GRA_H
#include "pou.h"
#include "pkn.h"

//(*Headers(Gra)
#include <wx/bmpbuttn.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
//*)

class Gra: public wxDialog
{
	public:

		Gra(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Gra();

		//(*Declarations(Gra)
		wxBitmapButton* BitmapButton1;
		wxBitmapButton* BitmapButton2;
		wxBitmapButton* BitmapButton3;
		//*)

	protected:

		//(*Identifiers(Gra)
		static const long ID_BITMAPBUTTON1;
		static const long ID_BITMAPBUTTON2;
		static const long ID_BITMAPBUTTON3;
		//*)

	private:

		//(*Handlers(Gra)
		void OnBitmapButton1Click(wxCommandEvent& event);
		void OnBitmapButton2Click(wxCommandEvent& event);
		void OnBitmapButton3Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
		pkn zzz;
};

#endif
