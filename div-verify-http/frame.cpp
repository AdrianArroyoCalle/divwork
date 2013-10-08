#include "frame.h"
#include "wx/wx.h"
#include "wx/sstream.h"
#include "wx/protocol/http.h"

MainFrame::MainFrame() : wxFrame(NULL,wxID_ANY,wxT("DivVerifyHTTP"))
{ 
	this->SetSize(400,300);
	wxPanel* panel=new wxPanel(this);
	wxStaticText* info=new wxStaticText(panel,wxID_ANY,wxT("Insert a URL, DivVerifyHTTP will verfify the server and you can read the metadata"),wxPoint(1,1));
	wxPanel* direction=new wxPanel(panel);
	wxStaticText* http=new wxStaticText(direction,wxID_ANY,wxT("http://"),wxPoint(1,30));
	server=new wxTextCtrl(direction,wxID_ANY,wxT(""),wxPoint(50,30),wxSize(200,25));
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

	wxHTTP get;
	get.SetHeader(wxT("Content-Type"),wxT("text/html; charset=utf8"));
	results->AppendText(wxT("\n[Request] Content-Type: text/html; charset=utf8"));
	get.SetHeader(wxT("User-Agent"),wxT("DivVerifyHTTP/1.0 wxHTTP/2.8 (+http://github.com/AdrianArroyoCalle/divwork)"));
	results->AppendText(wxT("\n[Request] User-Agent: DivVerifyHTTP/1.0 wxHTTP/2.8 (+http://github.com/AdrianArroyoCalle/divwork)"));
	get.SetHeader(wxT("Accept-Charset"),wxT("utf-8"));
	results->AppendText(wxT("\n[Request] Accept-Charset: utf-8"));
	get.SetHeader(wxT("X-Requested-With"),wxT("DivVerifyHTTP"));
	results->AppendText(wxT("\n[Request] X-Requested-With: DivVerifyHTTP"));
	get.SetHeader(wxT("DNT"),wxT("1"));
	results->AppendText(wxT("\n[Request] DNT: 1"));
	get.SetTimeout(10);

	while (!get.Connect(server->GetValue().BeforeFirst('/')))  // only the server, no pages here yet ...
    wxSleep(5);

	results->AppendText(wxString::Format(wxT("\n[INFO] Server host: %s",server->GetValue().BeforeFirst('/'))));

	if(server->GetValue().AfterFirst('/').Cmp("")==0)
	{
		wxInputStream *httpStream = get.GetInputStream(wxT("/"));
		results->AppendText(wxT("\n[INFO] Server page: /"));
	}else{
		wxInputStream *httpStream = get.GetInputStream(server->GetValue().AfterFirst('/'));
		results->AppendText(wxString::Format(wxT("\n[INFO] Server page: %s",server->GetValue().AfterFirst('/'))));
	}

	results->SetDefaultStyle(wxTextAttr(*wxGREEN));
	results->AppendText(wxString::Format("\n[Response] HTTP Code: %d",get.GetResponse()));
	results->AppendText(wxString::Format("\n[Response] X-Powered-By: %s",get.GetHeader(wxT("X-Powered-By"))));
	results->AppendText(wxString::Format("\n[Response] Access-Control-Allow-Origin: %s",get.GetHeader(wxT("Access-Control-Allow-Origin"))));
	results->AppendText(wxString::Format("\n[Response] Date: %s",get.GetHeader(wxT("Date"))));
	results->AppendText(wxString::Format("\n[Response] Content-Type: %s",get.GetHeader(wxT("Content-Type"))));
	results->AppendText(wxString::Format("\n[Response] Location: %s",get.GetHeader(wxT("Location"))));

	switch(get.GetError())
	{
	case wxPROTO_NOERR: {
							results->SetDefaultStyle(wxTextAttr(*wxGREEN));
							results->AppendText("\n[OK] All almost good");
						}break;
	case wxPROTO_NETERR: {
							results->SetDefaultStyle(wxTextAttr(*wxRED));
							results->AppendText("\n[ERROR] Network error");
						 }break;
	case wxPROTO_PROTERR: {
							results->SetDefaultStyle(wxTextAttr(*wxRED));
							results->AppendText("\n[ERROR] Negotiation error");
						 }break;
	case wxPROTO_CONNERR: {
							results->SetDefaultStyle(wxTextAttr(*wxRED));
							results->AppendText("\n[ERROR] Connection error");
						 }break;
	case wxPROTO_INVVAL: {
							results->SetDefaultStyle(wxTextAttr(*wxRED));
							results->AppendText("\n[ERROR] Invalid argument");
						 }break;
	case wxPROTO_NOFILE: {
							results->SetDefaultStyle(wxTextAttr(*wxRED));
							results->AppendText("\n[ERROR] Remote file doesn't exist");
						 }break;
	default:{
				results->SetDefaultStyle(wxTextAttr(*wxRED));
				results->AppendText("\n[ERROR] Unknow error");
			}

	}
	/*wxDELETE(httpStream);*/
	get.Close();
}