//---------------------------------------------------------------------------
//
// Name:        MonopolyApp.cpp
// Author:      Adrian Arroyo
// Created:     18/12/2011 20:55:13
// Description: 
//
//---------------------------------------------------------------------------

#include "MonopolyApp.h"
#include "MonopolyFrm.h"

IMPLEMENT_APP(MonopolyFrmApp)

bool MonopolyFrmApp::OnInit()
{
    MonopolyFrm* frame = new MonopolyFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int MonopolyFrmApp::OnExit()
{
	return 0;
}
