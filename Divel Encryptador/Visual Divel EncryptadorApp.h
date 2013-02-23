//---------------------------------------------------------------------------
//
// Name:        Visual Divel EncryptadorApp.h
// Author:      Adrian Arroyo
// Created:     27/12/2011 16:57:05
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __VISUAL_DIVEL_ENCRYPTADORFRMApp_h__
#define __VISUAL_DIVEL_ENCRYPTADORFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class Visual_Divel_EncryptadorFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
