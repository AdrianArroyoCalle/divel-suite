//---------------------------------------------------------------------------
//
// Name:        Divel Store ManagerApp.h
// Author:      Adrian Arroyo
// Created:     20/1/2012 18:12:08
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __DIVEL_STORE_MANAGERFRMApp_h__
#define __DIVEL_STORE_MANAGERFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class Divel_Store_ManagerFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
