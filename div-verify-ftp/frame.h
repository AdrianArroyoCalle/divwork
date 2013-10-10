/*
* DivVerifyFTP MainFrame header
*/
#ifndef FRAME_H
#define FRAME_H

#include "wx/wx.h"

class MainFrame : public wxFrame
{
public:
	MainFrame();
private:
	void Check(wxCommandEvent&);
	wxTextCtrl* results;
	wxTextCtrl* server;

};

#endif
