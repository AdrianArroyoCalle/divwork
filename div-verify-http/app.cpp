/*
* DivVerifyHTTP App class
*/
#include "app.h"
#include "frame.h"

bool DivVerifyHTTP::OnInit()
{
	this->SetAppName(wxT("DivVerifyHTTP"));
	this->SetVendorName(wxT("Adrian Arroyo Calle"));
	MainFrame* frame=new MainFrame();
	frame->Show(true);
	SetTopWindow(frame);
	return true;
}