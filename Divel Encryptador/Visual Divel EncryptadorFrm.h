///-----------------------------------------------------------------
///
/// @file      Visual Divel EncryptadorFrm.h
/// @author    Adrian Arroyo
/// Created:   27/12/2011 16:57:06
/// @section   DESCRIPTION
///            Visual_Divel_EncryptadorFrm class declaration
///
///------------------------------------------------------------------

#ifndef __VISUAL_DIVEL_ENCRYPTADORFRM_H__
#define __VISUAL_DIVEL_ENCRYPTADORFRM_H__

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
#include <wx/stattext.h>
#include <wx/statbox.h>
#include <wx/button.h>
////Header Include End

////Dialog Style Start
#undef Visual_Divel_EncryptadorFrm_STYLE
#define Visual_Divel_EncryptadorFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class Visual_Divel_EncryptadorFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		Visual_Divel_EncryptadorFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Divel Encryptador 2.0"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = Visual_Divel_EncryptadorFrm_STYLE);
		virtual ~Visual_Divel_EncryptadorFrm();
		void WxButton2Click(wxCommandEvent& event);
		void WxButton1Click(wxCommandEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxStaticText *WxStaticText1;
		wxStaticBox *WxStaticBox1;
		wxButton *WxButton2;
		wxButton *WxButton1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXSTATICTEXT1 = 1007,
			ID_WXSTATICBOX1 = 1003,
			ID_WXBUTTON2 = 1002,
			ID_WXBUTTON1 = 1001,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
