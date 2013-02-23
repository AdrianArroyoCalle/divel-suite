//---------------------------------------------------------------------------
//
// Name:        AyudaApp.h
// Author:      Adrian Arroyo
// Created:     30/12/2011 20:39:52
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __AYUDAFRMApp_h__
#define __AYUDAFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class AyudaFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
