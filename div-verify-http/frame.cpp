#include "frame.h"
#include "wx/wx.h"

MainFrame::MainFrame() : wxFrame(NULL,wxID_ANY,wxT("DivVerifyHTTP"))
{ 
	this->SetSize(400,300);
	wxPanel* panel=new wxPanel(this);
	wxStaticText* info=new wxStaticText(panel,wxID_ANY,wxT("Insert a URL, DivVerifyHTTP will verfify the server and you can read the metadata"),wxPoint(1,1));
	wxPanel* direction=new wxPanel(panel);
	wxStaticText* http=new wxStaticText(direction,wxID_ANY,wxT("http://"),wxPoint(1,30));
	wxTextCtrl* server=new wxTextCtrl(direction,wxID_ANY,wxT(""),wxPoint(50,30),wxSize(200,25));
	wxButton* check=new wxButton(direction,wxID_ANY,wxT("Verify HTTP"),wxPoint(260,30));
	check->Connect(wxEVT_COMMAND_BUTTON_CLICKED,wxCommandEventHandler(MainFrame::Check),NULL,this);
	wxPanel* logger=new wxPanel(panel);
	results=new wxTextCtrl(logger,wxID_ANY,wxT("[INFO] Started DivVerifyHTTP"),wxPoint(1,1),wxSize(800,600),wxTE_MULTILINE|wxTE_READONLY|wxTE_RICH2|wxTE_AUTO_URL);
	wxBoxSizer* sizer=new wxBoxSizer(wxVERTICAL);
	sizer->Add(info,1,wxEXPAND);
	sizer->Add(direction,1,wxEXPAND);
	sizer->Add(logger,1,wxEXPAND);
	panel->SetSizer(sizer);
	panel->SetAutoLayout(true);


}
void MainFrame::Check(wxCommandEvent& event)
{
	results->SetDefaultStyle(wxTextAttr(*wxBLUE));
	results->AppendText(wxT("\n[INFO] User starts a check procress"));
}