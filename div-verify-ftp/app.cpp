/*
* DivVerifyFTP App class
*/
#include "app.h"
#include "frame.h"

bool DivVerifyFTP::OnInit()
{
	this->SetAppName(wxT("DivVerifyFTP"));
	this->SetVendorName(wxT("Adrian Arroyo Calle"));
	MainFrame* frame=new MainFrame();
	frame->Show(true);
	SetTopWindow(frame);
	return true;
}
