///-----------------------------------------------------------------
///
/// @file      MonopolyFrm.h
/// @author    Adrian Arroyo
/// Created:   18/12/2011 20:55:14
/// @section   DESCRIPTION
///            MonopolyFrm class declaration
///
///------------------------------------------------------------------

#ifndef __MONOPOLYFRM_H__
#define __MONOPOLYFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/textctrl.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/statbox.h>
#include <wx/button.h>
////Header Include End

////Dialog Style Start
#undef MonopolyFrm_STYLE
#define MonopolyFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class MonopolyFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		MonopolyFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Monopoly"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = MonopolyFrm_STYLE);
		virtual ~MonopolyFrm();
		void WxButton1Click(wxCommandEvent& event);
		void WxButton2Click(wxCommandEvent& event);
		void WxButton6Click(wxCommandEvent& event);
		void WxButton6Click0(wxCommandEvent& event);
		void WxButton3Click(wxCommandEvent& event);
		void WxButton6Click1(wxCommandEvent& event);
		void WxButton5Click(wxCommandEvent& event);
		void WxButton7Click(wxCommandEvent& event);
		void MonopolyFrmActivate(wxActivateEvent& event);
		void WxButton6Click2(wxCommandEvent& event);
		void WxButton8Click(wxCommandEvent& event);
		void WxButton10Click(wxCommandEvent& event);
		void WxButton11Click(wxCommandEvent& event);
		void WxButton12Click(wxCommandEvent& event);
		void WxButton11Click0(wxCommandEvent& event);
		void WxButton12Click0(wxCommandEvent& event);
		void WxButton13Click(wxCommandEvent& event);
		void WxButton14Click(wxCommandEvent& event);
		void WxButton15Click(wxCommandEvent& event);
		void WxButton16Click(wxCommandEvent& event);
		void WxButton6Click3(wxCommandEvent& event);
		void WxButton5Click0(wxCommandEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxTextCtrl *WxMemo2;
		wxTextCtrl *WxMemo1;
		wxButton *WxButton16;
		wxButton *WxButton15;
		wxButton *WxButton14;
		wxButton *WxButton13;
		wxButton *WxButton12;
		wxStaticBox *WxStaticBox5;
		wxButton *WxButton11;
		wxStaticBox *WxStaticBox4;
		wxTextCtrl *WxEdit20;
		wxTextCtrl *WxEdit19;
		wxTextCtrl *WxEdit18;
		wxTextCtrl *WxEdit17;
		wxTextCtrl *WxEdit16;
		wxTextCtrl *WxEdit15;
		wxTextCtrl *WxEdit10;
		wxTextCtrl *WxEdit3;
		wxTextCtrl *WxEdit9;
		wxTextCtrl *WxEdit8;
		wxTextCtrl *WxEdit7;
		wxTextCtrl *WxEdit6;
		wxTextCtrl *WxEdit5;
		wxTextCtrl *WxEdit4;
		wxTextCtrl *WxEdit14;
		wxButton *WxButton4;
		wxButton *WxButton10;
		wxTextCtrl *WxEdit13;
		wxTextCtrl *WxEdit12;
		wxTextCtrl *WxEdit11;
		wxButton *WxButton8;
		wxStaticText *WxStaticText10;
		wxStaticText *WxStaticText9;
		wxStaticText *WxStaticText7;
		wxStaticText *WxStaticText2;
		wxButton *WxButton6;
		wxStaticText *WxStaticText5;
		wxStaticText *WxStaticText4;
		wxStaticText *WxStaticText8;
		wxStaticText *WxStaticText6;
		wxStaticBox *WxStaticBox3;
		wxStaticBitmap *WxStaticBitmap1;
		wxButton *WxButton7;
		wxStaticText *WxStaticText15;
		wxStaticText *WxStaticText3;
		wxStaticText *WxStaticText1;
		wxStaticBox *WxStaticBox2;
		wxButton *WxButton5;
		wxButton *WxButton3;
		wxButton *WxButton2;
		wxStaticBox *WxStaticBox1;
		wxButton *WxButton1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXMEMO2 = 1085,
			ID_WXMEMO1 = 1084,
			ID_WXBUTTON16 = 1083,
			ID_WXBUTTON15 = 1082,
			ID_WXBUTTON14 = 1081,
			ID_WXBUTTON13 = 1080,
			ID_WXBUTTON12 = 1079,
			ID_WXSTATICBOX5 = 1078,
			ID_WXBUTTON11 = 1077,
			ID_WXSTATICBOX4 = 1076,
			ID_WXEDIT20 = 1072,
			ID_WXEDIT19 = 1071,
			ID_WXEDIT18 = 1070,
			ID_WXEDIT17 = 1069,
			ID_WXEDIT16 = 1068,
			ID_WXEDIT15 = 1067,
			ID_WXEDIT10 = 1066,
			ID_WXEDIT3 = 1065,
			ID_WXEDIT9 = 1064,
			ID_WXEDIT8 = 1063,
			ID_WXEDIT7 = 1062,
			ID_WXEDIT6 = 1061,
			ID_WXEDIT5 = 1060,
			ID_WXEDIT4 = 1059,
			ID_WXEDIT14 = 1058,
			ID_WXBUTTON4 = 1057,
			ID_WXBUTTON10 = 1056,
			ID_WXEDIT13 = 1053,
			ID_WXEDIT12 = 1052,
			ID_WXEDIT11 = 1051,
			ID_WXBUTTON8 = 1049,
			ID_WXSTATICTEXT10 = 1029,
			ID_WXSTATICTEXT9 = 1028,
			ID_WXSTATICTEXT7 = 1027,
			ID_WXSTATICTEXT2 = 1026,
			ID_WXBUTTON6 = 1025,
			ID_WXSTATICTEXT5 = 1024,
			ID_WXSTATICTEXT4 = 1023,
			ID_WXSTATICTEXT8 = 1022,
			ID_WXSTATICTEXT6 = 1020,
			ID_WXSTATICBOX3 = 1017,
			ID_WXSTATICBITMAP1 = 1015,
			ID_WXBUTTON7 = 1014,
			ID_WXSTATICTEXT15 = 1013,
			ID_WXSTATICTEXT3 = 1011,
			ID_WXSTATICTEXT1 = 1008,
			ID_WXSTATICBOX2 = 1007,
			ID_WXBUTTON5 = 1006,
			ID_WXBUTTON3 = 1004,
			ID_WXBUTTON2 = 1003,
			ID_WXSTATICBOX1 = 1002,
			ID_WXBUTTON1 = 1001,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
