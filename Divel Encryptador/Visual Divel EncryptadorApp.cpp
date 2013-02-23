//---------------------------------------------------------------------------
//
// Name:        Visual Divel EncryptadorApp.cpp
// Author:      Adrian Arroyo
// Created:     27/12/2011 16:57:05
// Description: 
//
//---------------------------------------------------------------------------

#include "Visual Divel EncryptadorApp.h"
#include "Visual Divel EncryptadorFrm.h"

IMPLEMENT_APP(Visual_Divel_EncryptadorFrmApp)

bool Visual_Divel_EncryptadorFrmApp::OnInit()
{
    Visual_Divel_EncryptadorFrm* frame = new Visual_Divel_EncryptadorFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int Visual_Divel_EncryptadorFrmApp::OnExit()
{
	return 0;
}
