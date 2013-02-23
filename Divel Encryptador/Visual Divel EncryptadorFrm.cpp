///-----------------------------------------------------------------
///
/// @file      Visual Divel EncryptadorFrm.cpp
/// @author    Adrian Arroyo
/// Created:   27/12/2011 16:57:06
/// @section   DESCRIPTION
///            Visual_Divel_EncryptadorFrm class implementation
///
///------------------------------------------------------------------

#include "Visual Divel EncryptadorFrm.h"
#include <string.h>
#include <windows.h>

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// Visual_Divel_EncryptadorFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(Visual_Divel_EncryptadorFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(Visual_Divel_EncryptadorFrm::OnClose)
	EVT_BUTTON(ID_WXBUTTON2,Visual_Divel_EncryptadorFrm::WxButton2Click)
	EVT_BUTTON(ID_WXBUTTON1,Visual_Divel_EncryptadorFrm::WxButton1Click)
END_EVENT_TABLE()
////Event Table End

Visual_Divel_EncryptadorFrm::Visual_Divel_EncryptadorFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

Visual_Divel_EncryptadorFrm::~Visual_Divel_EncryptadorFrm()
{
}

void Visual_Divel_EncryptadorFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, wxT("Para encriptar debes comprimir tus archivos en ZIP, RAR o 7z. Despues pulsas Seleccionar archivos y seleccionas el ZIP, RAR o 7z y despues la imagen necesario. Una vez hecho esto se creara la carpeta C:/Divel/Encryptador y alli estara el archivo encriptado.jpg y los demas. Para desencriptar selecciona el archivo, boton derecho, Abrir con... y selecciona WinZip, WinRar o 7-Zip."), wxPoint(14, 66), wxSize(340, 121), wxST_NO_AUTORESIZE, wxT("WxStaticText1"));

	WxStaticBox1 = new wxStaticBox(this, ID_WXSTATICBOX1, wxT("Instrucciones"), wxPoint(7, 16), wxSize(362, 180));
	WxStaticBox1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));
	WxStaticBox1->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxNORMAL, false, wxT("Tahoma")));

	WxButton2 = new wxButton(this, ID_WXBUTTON2, wxT("Seleccionar archivos"), wxPoint(5, 201), wxSize(371, 122), 0, wxDefaultValidator, wxT("WxButton2"));
	WxButton2->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxNORMAL, false, wxT("Tahoma")));

	WxButton1 = new wxButton(this, ID_WXBUTTON1, wxT("Abrir Mis Documentos\nRecuerda el archivo esta en\n C:\\Divel\\Encryptador)"), wxPoint(5, 327), wxSize(371, 107), wxSTATIC_BORDER, wxDefaultValidator, wxT("WxButton1"));
	WxButton1->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxNORMAL, false, wxT("Tahoma")));

	SetTitle(wxT("Visual Divel Encryptador 2.3"));
	SetIcon(wxNullIcon);
	SetSize(103,-26,396,476);
	Center();
	
	////GUI Items Creation End
}

void Visual_Divel_EncryptadorFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxButton2Click
 */
void Visual_Divel_EncryptadorFrm::WxButton2Click(wxCommandEvent& event)
{
    wxString ge=(_("copy /b "));
    wxString mas=(_("+"));
    wxString final=(_(" encriptado.jpg"));
    const char* efe;
    efe=" encriptado.jpg";
    wxString rar2;
    wxString jpg2;
  //   wxString rar = wxFileSelector(_("Selecciona el archivo RAR a encriptar"), wxEmptyString,
  //      wxEmptyString, wxEmptyString, wxT("Archivos RAR|*.rar")); 
  wxFileDialog *openDialog = new wxFileDialog(this, wxT("Selecciona el archivo RAR"), wxT(""), wxT(""),
                                                wxT("Todos los archivos soportados|*.rar;*.zip;*.7z|Archivos RAR|*.rar|Archivos ZIP|*.zip|Archivos 7z|*.7z"), wxOPEN);
    int response = openDialog->ShowModal();
    if (response == wxID_OK) {
        wxString rar2(openDialog->GetPath());
    }	// insert your code here
  wxFileDialog *open2Dialog = new wxFileDialog(this, wxT("Selecciona la imagen"), wxT(""), wxT(""),
                                                wxT("Imagenes|*.jpg;*.png;*.bmp"), wxOPEN);
    int response2 = open2Dialog->ShowModal();
    if (response2 == wxID_OK) {
        wxString jpg2(open2Dialog->GetPath());
    }
    system("mkdir C:\\Divel\\Encryptador");
 // wxString jpg = wxFileSelector(_("Selecciona la imagen que se vera"), wxEmptyString,
 //       wxEmptyString, wxEmptyString, wxT("Archivos de imagen JPEG|*.jpg||*.jpeg"));
    CopyFile(wxString(openDialog->GetPath()),wxString(wxT("C:\\Divel\\Encryptador\\archivos.rar")),false);
    CopyFile(wxString(open2Dialog->GetPath()),wxString(wxT("C:\\Divel\\Encryptador\\imagen.jpg")), false);
    
     
 //   char urlorig[255]="copy /b";
 //    wxString rar2=(rar->GetPath());
 //    wxString jpg2=(jpg->GetPath());
 //   wxSystem(wxString()<<ge<<rar2<<mas<<jpg2<<final);
    wxSystem(wxT("copy /b C:\\Divel\\Encryptador\\imagen.jpg+C:\\Divel\\Encryptador\\archivos.rar C:\\Divel\\Encryptador\\encriptado.jpg"));
 //   system(strcat(urlorig,rar,ge,jpg,efe));
 //   system("PAUSE");
}

/*
 * WxButton1Click
 */
void Visual_Divel_EncryptadorFrm::WxButton1Click(wxCommandEvent& event)
{
 //	system("copy /b imagen.jpg+archivos.rar encriptado.jpg");// insert your code here
 WinExec("explorer.exe",SW_NORMAL);
}
