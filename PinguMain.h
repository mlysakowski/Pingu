/***************************************************************
 * Name:      PinguMain.h
 * Purpose:   Defines Application Frame
 * Author:    Zuzanna Kozyra, Michal Lysakowski ()
 * Created:   2022-12-14
 * Copyright: Zuzanna Kozyra, Michal Lysakowski ()
 * License:
 **************************************************************/

#ifndef PINGUMAIN_H
#define PINGUMAIN_H
#include <map>
#include <iostream>


using namespace std;


//(*Headers(PinguDialog)
#include <wx/bmpbuttn.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class PinguDialog: public wxDialog
{
    public:

        PinguDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~PinguDialog();



    private:

        //(*Handlers(PinguDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnBitmapButton0Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(PinguDialog)
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT10;
        static const long ID_BITMAPBUTTON1;
        static const long ID_BITMAPBUTTON2;
        static const long ID_BITMAPBUTTON3;
        static const long ID_BITMAPBUTTON4;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT4;
        static const long ID_STATICTEXT5;
        static const long ID_STATICTEXT6;
        static const long ID_STATICTEXT7;
        static const long ID_STATICTEXT8;
        static const long ID_STATICTEXT9;
        //*)

        //(*Declarations(PinguDialog)
        wxBitmapButton* BitmapButton0;
        wxBitmapButton* BitmapButton1;
        wxBitmapButton* BitmapButton2;
        wxBitmapButton* BitmapButton3;
        wxStaticText* StaticText10;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxStaticText* StaticText5;
        wxStaticText* StaticText6;
        wxStaticText* StaticText7;
        wxStaticText* StaticText8;
        wxStaticText* StaticText9;
        //*)

        protected:

            DECLARE_EVENT_TABLE()
            wxBitmapButton * pola[4];
            map<int,int> id_to_nr;
            wxBitmap obrazki[4];

};

#endif // PINGUMAIN_H
