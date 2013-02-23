///-----------------------------------------------------------------
///
/// @file      Divel Store ManagerFrm.cpp
/// @author    Adrian Arroyo
/// Created:   20/1/2012 18:12:09
/// @section   DESCRIPTION
///            Divel_Store_ManagerFrm class implementation
///
///------------------------------------------------------------------

#include "Divel Store ManagerFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// Divel_Store_ManagerFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(Divel_Store_ManagerFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(Divel_Store_ManagerFrm::OnClose)
	EVT_BUTTON(ID_WXBUTTON1,Divel_Store_ManagerFrm::WxButton1Click)
END_EVENT_TABLE()
////Event Table End

Divel_Store_ManagerFrm::Divel_Store_ManagerFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

Divel_Store_ManagerFrm::~Divel_Store_ManagerFrm()
{
}

void Divel_Store_ManagerFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxCheckBox2 = new wxCheckBox(this, ID_WXCHECKBOX2, wxT("Divel Write"), wxPoint(21, 97), wxSize(129, 13), 0, wxDefaultValidator, wxT("WxCheckBox2"));

	WxCheckBox1 = new wxCheckBox(this, ID_WXCHECKBOX1, wxT("Visual Divel Encryptador"), wxPoint(21, 78), wxSize(140, 15), 0, wxDefaultValidator, wxT("WxCheckBox1"));

	WxButton1 = new wxButton(this, ID_WXBUTTON1, wxT("Instalar los componentes seleccionados"), wxPoint(10, 306), wxSize(467, 49), 0, wxDefaultValidator, wxT("WxButton1"));
	WxButton1->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticBox1 = new wxStaticBox(this, ID_WXSTATICBOX1, wxT("Componentes a instalar"), wxPoint(9, 50), wxSize(467, 251));
	WxStaticBox1->SetForegroundColour(wxColour(wxT("GREEN")));
	WxStaticBox1->SetFont(wxFont(14, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, wxT("Divel           Store                  Manager"), wxPoint(16, 7), wxDefaultSize, 0, wxT("WxStaticText1"));
	WxStaticText1->SetForegroundColour(wxColour(wxT("BLUE")));
	WxStaticText1->SetFont(wxFont(20, wxSWISS, wxNORMAL, wxNORMAL, false));

	SetTitle(wxT("Divel Store Manager"));
	SetIcon(wxNullIcon);
	SetBackgroundColour(wxColour(255,255,255));
	SetSize(12,1,491,393);
	Center();
	
	////GUI Items Creation End
}

void Divel_Store_ManagerFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxButton1Click
 */
void Divel_Store_ManagerFrm::WxButton1Click(wxCommandEvent& event)
{
	if(WxCheckBox2->GetValue()==true){
        system("mkdir C:\\Divel\\Write");
        wxCopyFile(wxT(".\\DivelWrite.exe"),wxT("C:\\Divel\\Write\\DivelWrite.exe"));
        }
    if(WxCheckBox1->GetValue()==true){
        system("mkdir C:\\Divel\\Encryptador");
        wxCopyFile(wxT(".\\VisualDivelEncryptador.exe"),wxT("C:\\Divel\\Encryptador\\VisualDivelEncryptador.exe"));
        }// insert your code here
    wxMessageBox(wxT("La instalacion se completo correctamente"));
}
