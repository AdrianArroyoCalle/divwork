//---------------------------------------------------------------------------
//
// Name:        MonopolyApp.h
// Author:      Adrian Arroyo
// Created:     18/12/2011 20:55:12
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __MONOPOLYFRMApp_h__
#define __MONOPOLYFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class MonopolyFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
