//---------------------------------------------------------------------------
//
// Name:        AyudaApp.cpp
// Author:      Adrian Arroyo
// Created:     30/12/2011 20:39:52
// Description: 
//
//---------------------------------------------------------------------------

#include "AyudaApp.h"
#include "AyudaFrm.h"

IMPLEMENT_APP(AyudaFrmApp)

bool AyudaFrmApp::OnInit()
{
    AyudaFrm* frame = new AyudaFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int AyudaFrmApp::OnExit()
{
	return 0;
}
