///-----------------------------------------------------------------
///
/// @file      Divel WriteFrm.h
/// @author    Arroyo
/// Created:   18/01/2012 20:57:01
/// @section   DESCRIPTION
///            Divel_WriteFrm class declaration
///
///------------------------------------------------------------------

#ifndef __DIVEL_WRITEFRM_H__
#define __DIVEL_WRITEFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/textctrl.h>
////Header Include End

////Dialog Style Start
#undef Divel_WriteFrm_STYLE
#define Divel_WriteFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxMAXIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class Divel_WriteFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		Divel_WriteFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Divel Write"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = Divel_WriteFrm_STYLE);
		virtual ~Divel_WriteFrm();
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxTextCtrl *WxMemo1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXMEMO1 = 1002,
			ID_Abrir,
			ID_Nuevo,
			ID_Guardar,
			ID_Acerca,
			ID_Cerrar,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
		void OnAbrir(wxCommandEvent& event);
		void OnNuevo(wxCommandEvent& event);
		void OnGuardar(wxCommandEvent& event);
        void OnAcerca(wxCommandEvent& event);
        void OnCerrar(wxCommandEvent& event);		
};

#endif
