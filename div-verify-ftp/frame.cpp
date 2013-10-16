#include "frame.h"
#include "wx/wx.h"
#include "wx/sstream.h"
#include "wx/protocol/ftp.h"

MainFrame::MainFrame() : wxFrame(NULL,wxID_ANY,wxT("DivVerifyFTP"))
{ 
	this->SetSize(400,600);
	wxPanel* panel=new wxPanel(this);
	wxStaticText* info=new wxStaticText(panel,wxID_ANY,wxT("Insert a URL, DivVerifyFTP will verfify the server and you can read the metadata"),wxPoint(1,1));
	wxPanel* direction=new wxPanel(panel);
	wxStaticText* http=new wxStaticText(direction,wxID_ANY,wxT("ftp://"),wxPoint(1,30));
	server=new wxTextCtrl(direction,wxID_ANY,wxT(""),wxPoint(50,30),wxSize(200,25));
	wxButton* check=new wxButton(direction,wxID_ANY,wxT("Verify FTP"),wxPoint(260,30));
	check->Connect(wxEVT_COMMAND_BUTTON_CLICKED,wxCommandEventHandler(MainFrame::Check),NULL,this);
	results=new wxTextCtrl(panel,wxID_ANY,wxT("[INFO] Started DivVerifyFTP"),wxPoint(1,1),wxSize(400,200),wxTE_MULTILINE|wxTE_READONLY|wxTE_RICH2|wxTE_AUTO_URL);
	wxBoxSizer* sizer=new wxBoxSizer(wxVERTICAL);
	sizer->Add(info,1,wxEXPAND);
	sizer->Add(direction,1,wxEXPAND);
	sizer->Add(results,1,wxEXPAND);
	panel->SetSizer(sizer);
	panel->SetAutoLayout(true);


}
void MainFrame::Check(wxCommandEvent& event)
{
	results->SetDefaultStyle(wxTextAttr(*wxBLUE));
	results->AppendText(wxT("\n[INFO] User starts a check procress"));

	wxFTP ftp;
	wxString uri=server->GetValue();
	wxString server=uri.BeforeFirst('/');
	wxString file=uri.AfterFirst('/').Cmp(wxT(""))==0 ? wxT("/") : uri.AfterFirst('/');
	
	if(!ftp.Connect(server))
	{
			results->SetDefaultStyle(wxTextAttr(*wxRED));
			results->AppendText(wxT("\n[ERROR] DivVerifyFTP can't connect to the server"));
	}
	if(ftp.GetInputStream(file)!=NULL)
	{
			results->SetDefaultStyle(wxTextAttr(*wxGREEN));
			results->AppendText(wxT("\n[OK] File encountered"));
	}else{
			results->SetDefaultStyle(wxTextAttr(*wxRED));
			results->AppendText(wxT("\n[ERROR] The file doesn't exist"));
	}
	ftp.Close();

	/*int size=results->GetSize().GetHeight();
	int pos=results->GetScrollPos(wxVERTICAL);
	results->SetScrollPos(wxVERTICAL, pos - size);*/
}
