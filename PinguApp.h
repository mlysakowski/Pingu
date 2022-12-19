/***************************************************************
 * Name:      PinguApp.h
 * Purpose:   Defines Application Class
 * Author:    Zuzanna Kozyra, Michal Lysakowski ()
 * Created:   2022-12-14
 * Copyright: Zuzanna Kozyra, Michal Lysakowski ()
 * License:
 **************************************************************/

#ifndef PINGUAPP_H
#define PINGUAPP_H

#include <wx/app.h>

class PinguApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // PINGUAPP_H
