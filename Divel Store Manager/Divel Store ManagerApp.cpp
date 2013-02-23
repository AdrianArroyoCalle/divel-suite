//---------------------------------------------------------------------------
//
// Name:        Divel Store ManagerApp.cpp
// Author:      Adrian Arroyo
// Created:     20/1/2012 18:12:08
// Description: 
//
//---------------------------------------------------------------------------

#include "Divel Store ManagerApp.h"
#include "Divel Store ManagerFrm.h"

IMPLEMENT_APP(Divel_Store_ManagerFrmApp)

bool Divel_Store_ManagerFrmApp::OnInit()
{
    Divel_Store_ManagerFrm* frame = new Divel_Store_ManagerFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int Divel_Store_ManagerFrmApp::OnExit()
{
	return 0;
}
