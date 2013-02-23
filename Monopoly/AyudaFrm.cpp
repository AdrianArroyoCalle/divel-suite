///-----------------------------------------------------------------
///
/// @file      AyudaFrm.cpp
/// @author    Adrian Arroyo
/// Created:   30/12/2011 20:39:53
/// @section   DESCRIPTION
///            AyudaFrm class implementation
///
///------------------------------------------------------------------

#include "AyudaFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// AyudaFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(AyudaFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(AyudaFrm::OnClose)
	EVT_BUTTON(ID_WXBITMAPBUTTON1,AyudaFrm::WxBitmapButton1Click)
END_EVENT_TABLE()
////Event Table End

AyudaFrm::AyudaFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

AyudaFrm::~AyudaFrm()
{
}

void AyudaFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	wxInitAllImageHandlers();   //Initialize graphic format handlers

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, wxT("Para comenzar se pulsa JUGAR o si tenemos una partida cargada anteriormente damos a Cargar y despues Hacer cambios. El orden de turnos es el siguiente: 1-Se tira el dado 2-Se compra, construye,alquila (automatico) o se pasa. 3-Se cambia de jugador (no hace falta si se pasa). El objetivo del juego es conseguir que el otro jugador vaya a la ruina. Se puede guardar una partida escribiendo en el Modo Banco el dinero que se posee y dando a Guardar y el Slot que queramos. Para comerciar se cambian los numeros de las propiedades teniendo en cuenta que estan ordenadas y que a la  izquierda viene la posicion del jugador (arriba,1,abajo,2). Se deben cambiar de acuerdo a las siguientes instruciones: 0-Vacio 1-Comprada por 1 2-Comprada por 2 y el 3 y 4 no se pueden poner. Para cualquier problema contacte con nosotros. SO: Windows XP/7 (Win98 no soportado)."), wxPoint(206, 41), wxSize(302, 201), wxST_NO_AUTORESIZE, wxT("WxStaticText1"));

	WxHyperLinkCtrl2 = new wxHyperlinkCtrl(this, ID_WXHYPERLINKCTRL2, wxT("Divel Media"), wxT("http://sites.google.com/site/divelmedia"), wxPoint(9, 294), wxSize(91, 17), wxNO_BORDER | wxHL_CONTEXTMENU, wxT("WxHyperLinkCtrl2"));
	WxHyperLinkCtrl2->SetFont(wxFont(8, wxSWISS, wxNORMAL, wxNORMAL, true, wxT("MS Sans Serif")));

	WxHyperLinkCtrl1 = new wxHyperlinkCtrl(this, ID_WXHYPERLINKCTRL1, wxT("Divel Store"), wxT("http://sites.google.com/site/divelstore"), wxPoint(9, 273), wxSize(89, 17), wxNO_BORDER | wxHL_CONTEXTMENU, wxT("WxHyperLinkCtrl1"));
	WxHyperLinkCtrl1->SetFont(wxFont(8, wxSWISS, wxNORMAL, wxNORMAL, true, wxT("MS Sans Serif")));

	WxStaticBox1 = new wxStaticBox(this, ID_WXSTATICBOX1, wxT("Instrucciones"), wxPoint(197, 2), wxSize(314, 360));
	WxStaticBox1->SetForegroundColour(wxColour(wxT("WHITE")));
	WxStaticBox1->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxCalendarCtrl1 = new wxCalendarCtrl(this, ID_WXCALENDARCTRL1, wxDateTime(30,(wxDateTime::Month)12,2011),wxPoint(6, 117), wxSize(182, 139), wxCAL_SUNDAY_FIRST | wxCAL_SHOW_HOLIDAYS | wxCAL_NO_MONTH_CHANGE | wxCAL_SHOW_SURROUNDING_WEEKS | wxCAL_SEQUENTIAL_MONTH_SELECTION);

	wxBitmap WxBitmapButton1_BITMAP (wxT("divel3.bmp"), wxBITMAP_TYPE_BMP);
	WxBitmapButton1 = new wxBitmapButton(this, ID_WXBITMAPBUTTON1, WxBitmapButton1_BITMAP, wxPoint(6, 9), wxSize(160, 69), wxBU_AUTODRAW, wxDefaultValidator, wxT("WxBitmapButton1"));

	SetTitle(wxT("Ayuda"));
	SetIcon(wxNullIcon);
	SetSize(8,8,528,426);
	Center();
	
	////GUI Items Creation End
}

void AyudaFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxBitmapButton1Click
 */
void AyudaFrm::WxBitmapButton1Click(wxCommandEvent& event)
{
wxMessageBox(_("Divel le agradece a usted el haber descargado este producto, para Divel eso ya es una recompensa.\n(C)Adrian Arroyo Calle 2011-2012\nDescarga nuestros nuevos productos desde Divel Store (sites.google.com/site/divelstore)alli encontraras Divel SO, Simutrans, Visual Divel Encryptador, ASWINDOWS, Narciso y mucho mas..."));
}

