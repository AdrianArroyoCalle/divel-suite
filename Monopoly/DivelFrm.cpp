///-----------------------------------------------------------------
///
/// @file      DivelFrm.cpp
/// @author    Adrian Arroyo
/// Created:   2/1/2012 11:58:44
/// @section   DESCRIPTION
///            DivelFrm class implementation
///
///------------------------------------------------------------------

#include "DivelFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// DivelFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(DivelFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(DivelFrm::OnClose)
END_EVENT_TABLE()
////Event Table End

DivelFrm::DivelFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

DivelFrm::~DivelFrm()
{
}

void DivelFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	SetTitle(wxT("Divel"));
	SetIcon(wxNullIcon);
	SetSize(8,8,320,334);
	Center();
	
	////GUI Items Creation End
}

void DivelFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}
