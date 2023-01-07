/***************************************************************
 * Name:      PinguApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Zuzanna Kozyra, Michal Lysakowski ()
 * Created:   2022-12-14
 * Copyright: Zuzanna Kozyra, Michal Lysakowski ()
 * License:
 **************************************************************/

#include "PinguApp.h"

//(*AppHeaders
#include "PinguMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(PinguApp);

bool PinguApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	PinguDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
