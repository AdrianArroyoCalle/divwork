//---------------------------------------------------------------------------
//
// Name:        Divel WriteApp.h
// Author:      Arroyo
// Created:     18/01/2012 20:57:00
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __DIVEL_WRITEFRMApp_h__
#define __DIVEL_WRITEFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class Divel_WriteFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
