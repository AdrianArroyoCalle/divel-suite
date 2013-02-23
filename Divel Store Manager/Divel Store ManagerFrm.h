///-----------------------------------------------------------------
///
/// @file      Divel Store ManagerFrm.h
/// @author    Adrian Arroyo
/// Created:   20/1/2012 18:12:09
/// @section   DESCRIPTION
///            Divel_Store_ManagerFrm class declaration
///
///------------------------------------------------------------------

#ifndef __DIVEL_STORE_MANAGERFRM_H__
#define __DIVEL_STORE_MANAGERFRM_H__

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
#include <wx/checkbox.h>
#include <wx/button.h>
#include <wx/statbox.h>
#include <wx/stattext.h>
////Header Include End

////Dialog Style Start
#undef Divel_Store_ManagerFrm_STYLE
#define Divel_Store_ManagerFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class Divel_Store_ManagerFrm : public wxFrame
{
	private:
		void WxButton1Click(wxCommandEvent& event);
		DECLARE_EVENT_TABLE();
		
	public:
		Divel_Store_ManagerFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Divel Store Manager"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = Divel_Store_ManagerFrm_STYLE);
		virtual ~Divel_Store_ManagerFrm();
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxCheckBox *WxCheckBox2;
		wxCheckBox *WxCheckBox1;
		wxButton *WxButton1;
		wxStaticBox *WxStaticBox1;
		wxStaticText *WxStaticText1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXCHECKBOX2 = 1005,
			ID_WXCHECKBOX1 = 1004,
			ID_WXBUTTON1 = 1003,
			ID_WXSTATICBOX1 = 1002,
			ID_WXSTATICTEXT1 = 1001,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
