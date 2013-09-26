//---------------------------------------------------------------------------
//
// Name:        Divel WriteApp.cpp
// Author:      Arroyo
// Created:     18/01/2012 20:57:00
// Description: 
//
//---------------------------------------------------------------------------

#include "DivelWriteApp.h"
#include "DivelWriteFrm.h"

IMPLEMENT_APP(Divel_WriteFrmApp)

bool Divel_WriteFrmApp::OnInit()
{
    Divel_WriteFrm* frame = new Divel_WriteFrm(NULL);
    SetTopWindow(frame);
    frame->Maximize();
    frame->Show();
    return true;
}
 
int Divel_WriteFrmApp::OnExit()
{
	return 0;
}
