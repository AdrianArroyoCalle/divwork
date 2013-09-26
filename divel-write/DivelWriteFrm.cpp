///-----------------------------------------------------------------
///
/// @file      Divel WriteFrm.cpp
/// @author    Arroyo
/// Created:   18/01/2012 20:57:01
/// @section   DESCRIPTION
///            Divel_WriteFrm class implementation
///
///------------------------------------------------------------------

#include "DivelWriteFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// Divel_WriteFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(Divel_WriteFrm,wxFrame)
	////Manual Code Start
	EVT_MENU(ID_Cerrar, Divel_WriteFrm::OnCerrar)
	EVT_MENU(ID_Abrir, Divel_WriteFrm::OnAbrir)
	EVT_MENU(ID_Nuevo, Divel_WriteFrm::OnNuevo)
	EVT_MENU(ID_Guardar, Divel_WriteFrm::OnGuardar)
	EVT_MENU(ID_Acerca, Divel_WriteFrm::OnAcerca)
	////Manual Code End
	
	EVT_CLOSE(Divel_WriteFrm::OnClose)
END_EVENT_TABLE()
////Event Table End

Divel_WriteFrm::Divel_WriteFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
	wxMenu *menuArchivo = new wxMenu;
	wxMenu *menuAcerca = new wxMenu;
	
	menuArchivo->Append(ID_Nuevo, _("&Nuevo archivo"));
	menuArchivo->Append(ID_Abrir, _("&Abrir archivo..."));
	menuArchivo->Append(ID_Guardar, _("&Guardar archivo..."));
	menuArchivo->AppendSeparator();
	menuArchivo->Append(ID_Cerrar, _("&Salir"));
	
	menuAcerca->Append(ID_Acerca,_("A&cerca de"));
	
	wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append(menuArchivo, _("&Archivo"));
    menuBar->Append(menuAcerca, _("A&cerca"));
    
    SetMenuBar(menuBar);
	

}

Divel_WriteFrm::~Divel_WriteFrm()
{
}

void Divel_WriteFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxMemo1 = new wxTextCtrl(this, ID_WXMEMO1, wxEmptyString, wxPoint(26, 25), wxSize(195, 184), wxTE_MULTILINE, wxDefaultValidator, wxT(" "));
	WxMemo1->SetMaxLength(0);

	SetTitle(wxT("Divel Write"));
	SetIcon(wxNullIcon);
	SetSize(8,8,271,291);
	Center();
	
	////GUI Items Creation End
}

void Divel_WriteFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}
void Divel_WriteFrm::OnAbrir(wxCommandEvent& event)
{
    wxString CurrentDocPath;
		wxFileDialog* OpenDialog = new wxFileDialog(
		this, _("Elige un archivo para abrir"), wxEmptyString, wxEmptyString, 
		_("Archivos Divel Write(*.dwr)|*.dwr|Archivos Narciso(*.nar)|*.nar|Archivos de Texto (*.txt)|*.txt|Codigo Fuente C++ (*.cpp, *.cxx)|*.cpp;*.cxx|Archivo fuente de C (*.c)|*.c|Archivos de cabeza C (*.h)|*.h"),
		wxFD_OPEN, wxDefaultPosition);
 
	// Creates a "open file" dialog with 4 file types
	if (OpenDialog->ShowModal() == wxID_OK) // if the user click "Open" instead of "Cancel"
	{
		CurrentDocPath = OpenDialog->GetPath();
		// Sets our current document to the file the user selected
		WxMemo1->LoadFile(OpenDialog->GetPath()); //Opens that file
		SetTitle(wxString()<< OpenDialog->GetFilename()); // Set the Title to reflect the file open
	}
	OpenDialog->Destroy();
 
}
void Divel_WriteFrm::OnGuardar(wxCommandEvent& event)
{
	wxFileDialog *SaveDialog = new wxFileDialog(
		this, _("Guardar"), wxEmptyString, wxEmptyString,
		_("Archivos Divel Write(*.dwr)|*.dwr|Archivos de texto (*.txt)|*.txt|Codigo fuente C++ (*.cpp)|*.cpp|Codigo fuente C (*.c)|*.c|Archivos de cabecera C (*.h)|*.h"),
		wxFD_SAVE | wxFD_OVERWRITE_PROMPT, wxDefaultPosition);
 
	// Creates a Save Dialog with 4 file types
	if (SaveDialog->ShowModal() == wxID_OK) // If the user clicked "OK"
	{
		// set the path of our current document to the file the user chose to save under
		WxMemo1->SaveFile(SaveDialog->GetPath()); // Save the file to the selected path
		// Set the Title to reflect the file open
		SetTitle(wxString()<< SaveDialog->GetFilename());
	}
 
	// Clean up after ourselves
	SaveDialog->Destroy();
}
void Divel_WriteFrm::OnNuevo(wxCommandEvent& event)
{
    SetTitle(wxT("Nuevo archivo"));
	WxMemo1->Clear();
}
void Divel_WriteFrm::OnAcerca(wxCommandEvent& event)
{
	wxMessageBox(_("Divel Write es el procesador de textos de Divel\n\n(C) Adrian Arroyo Calle 2012\nPara mas info visite:\nsites.google.com/site/divelmedia"));
}
void Divel_WriteFrm::OnCerrar(wxCommandEvent& event)
{
	Destroy();
}
