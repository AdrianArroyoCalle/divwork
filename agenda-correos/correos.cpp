// for all others, include the necessary headers (this file is usually all you
// need because it includes almost all "standard" wxWidgets headers)
#ifndef WX_PRECOMP
    #include "wx/wx.h"
#endif

#include "wx/wxprec.h"
#include <fstream>
#include <iostream>
#include <assert.h>
#include <iostream>
using namespace std;
wxString LINEA[800];
string LINEB[800];
int lectura=0;
int pagina=0;
char entornoFinal[1024];

#ifdef __BORLANDC__
    #pragma hdrstop
#endif



// ----------------------------------------------------------------------------
// resources
// ----------------------------------------------------------------------------

// the application icon (under Windows and OS/2 it is in resources and even
// though we could still include the XPM here it would be unused)
#if !defined(__WXMSW__) && !defined(__WXPM__)
    #include "sample.xpm"
#endif

// ----------------------------------------------------------------------------
// private classes
// ----------------------------------------------------------------------------

// Define a new application type, each program should derive a class from wxApp
class MyApp : public wxApp
{
public:
    // override base class virtuals
    // ----------------------------

    // this one is called on application startup and is a good place for the app
    // initialization (doing it here and not in the ctor allows to have an error
    // return: if OnInit() returns false, the application terminates)
    virtual bool OnInit();
	//virtual int OnRun(); //Hacer comprobaciones
 


 
};
class MyFrame : public wxFrame
{
public:
    // ctor(s)
    MyFrame(const wxString& title);
	wxRadioButton* primero;
	wxRadioButton* segundo;
	wxRadioButton* tercero;
	wxRadioButton* cuarto;
	wxRadioButton* cinco;
	wxRadioButton* seis;
	wxRadioButton* siete;
	wxRadioButton* ocho;
	wxRadioButton* nueve;
	wxRadioButton* diez;
	wxRadioButton* once;
	wxRadioButton* doce;
	wxRadioButton* trece;
	wxRadioButton* catorce;
	wxRadioButton* quince;
	wxStaticText* primeroApellido;
	wxStaticText* primeroEmail;
	wxStaticText* primeroRed;
	wxStaticText* segundoApellido;
	wxStaticText* segundoEmail;
	wxStaticText* segundoRed;
	wxStaticText* terceroApellido;
	wxStaticText* terceroEmail;
	wxStaticText* terceroRed;
	wxStaticText* cuartoApellido;
	wxStaticText* cuartoEmail;
	wxStaticText* cuartoRed;
	wxStaticText* cincoApellido;
	wxStaticText* cincoEmail;
	wxStaticText* cincoRed;
	wxStaticText* seisApellido;
	wxStaticText* seisEmail;
	wxStaticText* seisRed;
	wxStaticText* sieteApellido;
	wxStaticText* sieteEmail;
	wxStaticText* sieteRed;
	wxStaticText* ochoApellido;
	wxStaticText* ochoEmail;
	wxStaticText* ochoRed;
	wxStaticText* nueveApellido;
	wxStaticText* nueveEmail;
	wxStaticText* nueveRed;
	wxStaticText* diezApellido;
	wxStaticText* diezEmail;
	wxStaticText* diezRed;
	wxStaticText* onceApellido;
	wxStaticText* onceEmail;
	wxStaticText* onceRed;
	wxStaticText* doceApellido;
	wxStaticText* doceEmail;
	wxStaticText* doceRed;
	wxStaticText* treceApellido;
	wxStaticText* treceEmail;
	wxStaticText* treceRed;
	wxStaticText* catorceApellido;
	wxStaticText* catorceEmail;
	wxStaticText* catorceRed;
	wxStaticText* quinceApellido;
	wxStaticText* quinceEmail;
	wxStaticText* quinceRed;
    // event handlers (these functions should _not_ be virtual)
    void OnQuit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
	void OnAgregar(wxCommandEvent& event);
	void OnEliminar(wxCommandEvent& event);
	void OnLeer(wxCommandEvent& event);
	void OnSiguiente(wxCommandEvent& event);
	void OnAnterior(wxCommandEvent& event);
	void OnDetalles(wxCommandEvent& event);
	void OnTimer(wxTimerEvent& event);

private:
    // any class wishing to process wxWidgets events must use this macro
    DECLARE_EVENT_TABLE()
private:  
	//Añadir botones

};
enum
{
    // menu items
    Minimal_Quit = wxID_EXIT,
	ID_CALC = 1001,
	ID_NET = 1002,
	ID_CORREOS = 1003,
	ID_WRITE = 1004,
	ID_TASKKILLER = 1005,
	ID_OPCIONES = 1006,
	ID_ADR = 1007,
	ID_INSTALADOS = 1008,
	ID_ARCHIVOS = 1009,
	ID_CERRAR = 1010,
	ID_APAGAR = 1011,
	ID_USER = 1012,
	ID_WINUNIX = 1013,
	ID_APPS = 1014,
	ID_PLAY = 1015,
	ID_EXECUTE = 1016,
	ID_COMPRIMIR = 1017,
	ID_AGREGAR = 1018,
	ID_ELIMINAR = 1019,
	ID_SIGUIENTE = 1020,
	ID_ANTERIOR = 1021,
	ID_IMPORTAR = 1022,
	ID_EXPORTAR = 1023,
	ID_PRIMERO = 1024,
	ID_SEGUNDO = 1025,
	ID_TERCERO = 1026,
	ID_CUARTO = 1027,
	ID_QUINTO = 1028,
	ID_SEXTO = 1029,
	ID_SEPTIMO = 1030,
	ID_OCTAVO = 1031,
	ID_NOVENO = 1032,
	ID_DECIMO = 1033,
	TIMER_ID = 1034,
	ID_UNDECIMO = 1035,
	ID_DUODECIMO = 1036,
	ID_DECIMOTERCERO = 1037,
	ID_DECIMOCUARTO = 1038,
	ID_DECIMOQUINTO = 1039,

    // it is important for the id corresponding to the "About" command to have
    // this standard value as otherwise it won't be handled properly under Mac
    // (where it is special and put into the "Apple" menu)
    Minimal_About = wxID_ABOUT
};
BEGIN_EVENT_TABLE(MyFrame, wxFrame)
    EVT_MENU(Minimal_Quit,  MyFrame::OnQuit)
    EVT_MENU(Minimal_About, MyFrame::OnAbout)
    EVT_MENU(ID_AGREGAR, MyFrame::OnAgregar)
    EVT_TIMER(TIMER_ID, MyFrame::OnTimer)
    EVT_MENU(ID_SIGUIENTE, MyFrame::OnSiguiente)
    EVT_MENU(ID_ANTERIOR, MyFrame::OnAnterior)
    //EVT_MENU(ID_AGREGAR, MyFrame::OnAbout)   //Agregar eventos de menu
END_EVENT_TABLE()

// Create a new application object: this macro will allow wxWidgets to create
// the application object during program execution (it's better than using a
// static object for many reasons) and also implements the accessor function
// wxGetApp() which will return the reference of the right type (i.e. MyApp and
// not wxApp)
IMPLEMENT_APP(MyApp)
bool MyApp::OnInit()
{
    // call the base class initialization method, currently it only parses a
    // few common command-line options but it could be do more in the future
    if ( !wxApp::OnInit() )
        return false;
	SetAppName(wxT("Agenda de Correos de Divel SO"));
	SetVendorName(wxT("Adrian Arroyo Calle para Divel"));

    // create the main application window
    MyFrame *frame = new MyFrame(wxT("Agenda de Correos de Divel SO"));

    // and show it (the frames, unlike simple controls, are not shown when
    // created initially)
    frame->Show(true);
	
	char* linea[2048];
	char* caracter;
	char CARACTER;
	string MEDIA;
	int estado=0;
	int limpiar=0;
	int p=0;
	int r=0;
	char *entorno=getenv("HOME");
	char buffer[500];	
	strcpy (buffer,entorno);
	strcpy(entornoFinal, buffer);
	char lugar[]="/.divel/Datos/Correos.dat";
	strcat(entornoFinal,lugar);
	string datosGenerales[4];
	//entornoLectura=entornoString+"/.divel/Datos/Correos.dat";
	ifstream registro(entornoFinal,ifstream::in);
	if(!registro){wxMessageBox(wxT("Error al abrir el archivo de registro: Error 201"),wxT("Error 201"),wxICON_ERROR|wxOK);
	system("mkdir -p $HOME/.divel/Datos/");
	ofstream registroNuevo; registroNuevo.open(entornoFinal,ofstream::out);
	if(!registroNuevo){wxMessageBox(wxT("Ha ocurrido un error al crear el archivo Correos.dat, intentelo manualmente"));}
	registroNuevo.close();}else{
	//registro.seekg (0, ios::beg);
	while(limpiar<512){
	LINEB[limpiar].clear();limpiar++;
	}
	while(!registro.eof())
	{
		CARACTER=registro.get();
		if(CARACTER==' ')
	{LINEB[estado]=MEDIA;estado++;MEDIA.clear();}else 
	if(CARACTER=='\n'){LINEB[estado]=MEDIA;estado++;MEDIA.clear();}
	else {MEDIA=MEDIA+CARACTER;}
	//	caracter=fgetc(registro);
	//	if(caracter=' '){estado++;}else
	//	if(caracter='\n'){estado=0;}else
	//	{strcat(linea,caracter); datosGenerales[estado]="%s",linea;}
	}
	}

	registro.close();
	for(int i=0; LINEB!=NULL && i < 800; i++)
	{
		LINEA[i]=wxString::FromUTF8(LINEB[i].c_str());
	}
    // success: wxApp::OnRun() will be called which will enter the main message
    // loop and the application will run. If we returned false here, the
    // application would exit immediately.
    return true;
}
MyFrame::MyFrame(const wxString& title)
       : wxFrame(NULL, wxID_ANY, title)
{
    // set the frame icon
    SetIcon(wxICON(sample));
	SetSize(600,600);
#if wxUSE_MENUS
    // create a menu bar
    wxMenu *fileMenu = new wxMenu;
	wxMenu* ver=new wxMenu;

    // the "About" item should be in the help menu
    wxMenu *helpMenu = new wxMenu;
    helpMenu->Append(Minimal_About, wxT("A&cerca\tF1"), wxT("Información sobre este programa"));

	fileMenu->Append(ID_AGREGAR, wxT("A&gregar"),wxT("Agregar un nuevo registro"));
	//fileMenu->Append(ID_ELIMINAR, "&Eliminar","Eliminar un registro");
	ver->Append(ID_ANTERIOR, wxT("An&terior"),wxT("Ir una pagina atras"));
	ver->Append(ID_SIGUIENTE, wxT("&Siguiente"),wxT("Ir una pagina adelante"));
    fileMenu->Append(Minimal_Quit, wxT("&Salir\tAlt-X"), wxT("Cierra Agenda de Correos"));

    // now append the freshly created menu to the menu bar...
    wxMenuBar *menuBar = new wxMenuBar();
    menuBar->Append(fileMenu, wxT("&Archivo"));
	menuBar->Append(ver, wxT("&Ver"));
    menuBar->Append(helpMenu, wxT("A&yuda"));
	

    // ... and attach this menu bar to the frame
    SetMenuBar(menuBar);
	wxPanel* panel=new wxPanel(this);
	wxStaticText* nombre=new wxStaticText(panel, ID_CALC, wxT("Nombre"), wxPoint(20,20)); //Sumar 100
	wxStaticText* apellido=new wxStaticText(panel, ID_NET, wxT("Apellidos"), wxPoint(120,20));
	wxStaticText* email=new wxStaticText(panel, ID_NET, wxT("E-mail"), wxPoint(220,20));  //poner un evento a mailto://
	wxStaticText* red=new wxStaticText(panel, ID_NET, wxT("Red Social"), wxPoint(370,20));

	wxTimer* timer;
	timer=new wxTimer(this, TIMER_ID);
	timer->Start(500, true);
	
	wxButton* agregar=new wxButton(panel, ID_AGREGAR, wxT("Agregar"), wxPoint(470,20));
	//wxButton* eliminar=new wxButton(panel, ID_ELIMINAR, wxT("Eliminar"), wxPoint(470,120));
	wxButton* anterior=new wxButton(panel, ID_ANTERIOR, wxT("Anterior"), wxPoint(470, 320));
	wxButton* siguiente=new wxButton(panel, ID_SIGUIENTE, wxT("Siguiente"), wxPoint(470, 420));
	//Boton de Detalles y enviar correo
	primero=new wxRadioButton(panel, ID_PRIMERO, wxT("(VACIO)"), wxPoint(20,50),wxSize(-1,-1),wxRB_GROUP);
	segundo=new wxRadioButton(panel, ID_SEGUNDO, wxT("(VACIO)"), wxPoint(20,80));
	 tercero=new wxRadioButton(panel, ID_TERCERO, wxT("(VACIO)"), wxPoint(20,110));
	 cuarto=new wxRadioButton(panel, ID_CUARTO, wxT("(VACIO)"), wxPoint(20,140));
	 cinco=new wxRadioButton(panel, ID_QUINTO, wxT("(VACIO)"), wxPoint(20,170));
	 seis=new wxRadioButton(panel, ID_SEXTO, wxT("(VACIO)"), wxPoint(20,200));
	 siete=new wxRadioButton(panel, ID_SEPTIMO, wxT("(VACIO)"), wxPoint(20,230));
	 ocho=new wxRadioButton(panel, ID_OCTAVO, wxT("(VACIO)"), wxPoint(20,260));
	 nueve=new wxRadioButton(panel, ID_NOVENO, wxT("(VACIO)"), wxPoint(20,290));
	 diez=new wxRadioButton(panel, ID_DECIMO, wxT("(VACIO)"), wxPoint(20,320));
	once=new wxRadioButton(panel, ID_UNDECIMO, wxT("(VACIO)"), wxPoint(20,350));
	doce=new wxRadioButton(panel, ID_DUODECIMO, wxT("(VACIO)"), wxPoint(20,380));
	trece=new wxRadioButton(panel, ID_DECIMOTERCERO, wxT("(VACIO)"), wxPoint(20,410));
	catorce=new wxRadioButton(panel, ID_DECIMOCUARTO, wxT("(VACIO)"), wxPoint(20,440));
	quince=new wxRadioButton(panel, ID_DECIMOQUINTO, wxT("(VACIO)"), wxPoint(20,470));


	//StaticText
	primeroApellido=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(120,50));
	primeroEmail=new wxStaticText(panel, ID_EXECUTE, wxT("(VACIO)"), wxPoint(220,50));
	primeroRed=new wxStaticText(panel, ID_COMPRIMIR, wxT("(VACIO)"), wxPoint(370, 50));
	segundoApellido=new wxStaticText(panel, ID_PLAY, wxT("(VACIO)"), wxPoint(120,80));
	segundoEmail=new wxStaticText(panel, ID_APPS, wxT("(VACIO)"), wxPoint(220,80));
	segundoRed=new wxStaticText(panel, ID_WINUNIX, wxT("(VACIO)"), wxPoint(370, 80));
	 terceroApellido=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(120,110));  //120, 220 y 370. Sumar 30
	 terceroEmail=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(220,110));
	 terceroRed=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(370,110));
	 cuartoApellido=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(120,140));
	 cuartoEmail=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(220,140));
	 cuartoRed=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(370,140));
	 cincoApellido=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(120,170));
	 cincoEmail=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(220,170));
	 cincoRed=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(370,170));
	 seisApellido=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(120,200));
	 seisEmail=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(220,200));
	 seisRed=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(370,200));
	 sieteApellido=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(120,230));
	 sieteEmail=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(220,230));
	 sieteRed=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(370,230));
	 ochoApellido=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(120,260));
	 ochoEmail=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(220,260));
	 ochoRed=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(370,260));
	 nueveApellido=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(120,290));
	 nueveEmail=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(220,290));
	 nueveRed=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(370,290));
	 diezApellido=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(120,320));
	 diezEmail=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(220,320));
	 diezRed=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(370,320));
	 onceApellido=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(120,350));
	 onceEmail=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(220,350));
	 onceRed=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(370,350));
	 doceApellido=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(120,380));
	 doceEmail=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(220,380));
	 doceRed=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(370,380));
	 treceApellido=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(120,410));
	 treceEmail=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(220,410));
	 treceRed=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(370,410));
	 catorceApellido=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(120,440));
	 catorceEmail=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(220,440));
	 catorceRed=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(370,440));
	 quinceApellido=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(120,470));
	 quinceEmail=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(220,470));
	 quinceRed=new wxStaticText(panel, ID_WRITE, wxT("(VACIO)"), wxPoint(370,470));

	//Connect(TIMER_ID,wxEVT_TIMER, wxCommandEventHandler(MyFrame::OnTimer));
	Connect(ID_AGREGAR, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::OnAgregar));
	Connect(ID_SIGUIENTE, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::OnSiguiente));
	Connect(ID_ANTERIOR, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::OnAnterior));


#endif // wxUSE_MENUS

#if wxUSE_STATUSBAR
    // create a status bar just for fun (by default with 1 pane only)
    CreateStatusBar(2);
    SetStatusText(wxT("Agenda de Correos 1.0"));
#endif // wxUSE_STATUSBAR

}
void MyFrame::OnQuit(wxCommandEvent& WXUNUSED(event))
{
    // true is to force the frame to close
    Close(true);
}

void MyFrame::OnAbout(wxCommandEvent& WXUNUSED(event))
{
    wxMessageBox(wxString::Format
                 (
                    wxT("Agenda de Correos de Divel SO\n")
                    wxT("\n")
                    wxT("Organiza tus contactos desde aqui\n")
                    wxT("\n")
					wxT("Para mas productos visite:\n sites.google.com/site/divelmedia")
                 ),
                 wxT("Acerca de Agenda de Correos de Divel SO"),
                 wxOK | wxICON_INFORMATION,
                 this);
	primero->SetLabel(LINEA[lectura]);lectura++;
	primeroApellido->SetLabel(LINEA[lectura]);lectura++;
	primeroEmail->SetLabel(LINEA[lectura]);lectura++;
	primeroRed->SetLabel(LINEA[lectura]);lectura++;
	segundo->SetLabel(LINEA[lectura]);lectura++;
	segundoApellido->SetLabel(LINEA[lectura]);lectura++;
	segundoEmail->SetLabel(LINEA[lectura]);lectura++;
	segundoRed->SetLabel(LINEA[lectura]);lectura++;
	tercero->SetLabel(LINEA[lectura]);lectura++;
	 terceroApellido->SetLabel(LINEA[lectura]);lectura++;
	 terceroEmail->SetLabel(LINEA[lectura]);lectura++;
	 terceroRed->SetLabel(LINEA[lectura]);lectura++;
	cuarto->SetLabel(LINEA[lectura]);lectura++;
	 cuartoApellido->SetLabel(LINEA[lectura]);lectura++;
	 cuartoEmail->SetLabel(LINEA[lectura]);lectura++;
	 cuartoRed->SetLabel(LINEA[lectura]);lectura++;
	cinco->SetLabel(LINEA[lectura]);lectura++;
	 cincoApellido->SetLabel(LINEA[lectura]);lectura++;
	 cincoEmail->SetLabel(LINEA[lectura]);lectura++;
	 cincoRed->SetLabel(LINEA[lectura]);lectura++;
	seis->SetLabel(LINEA[lectura]);lectura++;
	 seisApellido->SetLabel(LINEA[lectura]);lectura++;
	 seisEmail->SetLabel(LINEA[lectura]);lectura++;
	 seisRed->SetLabel(LINEA[lectura]);lectura++;
	siete->SetLabel(LINEA[lectura]);lectura++;
	 sieteApellido->SetLabel(LINEA[lectura]);lectura++;
	 sieteEmail->SetLabel(LINEA[lectura]);lectura++;
	 sieteRed->SetLabel(LINEA[lectura]);lectura++;
	ocho->SetLabel(LINEA[lectura]);lectura++;
	 ochoApellido->SetLabel(LINEA[lectura]);lectura++;
	 ochoEmail->SetLabel(LINEA[lectura]);lectura++;
	 ochoRed->SetLabel(LINEA[lectura]);lectura++;
	nueve->SetLabel(LINEA[lectura]);lectura++;
	 nueveApellido->SetLabel(LINEA[lectura]);lectura++;
	 nueveEmail->SetLabel(LINEA[lectura]);lectura++;
	 nueveRed->SetLabel(LINEA[lectura]);lectura++;
	diez->SetLabel(LINEA[lectura]);lectura++;
	 diezApellido->SetLabel(LINEA[lectura]);lectura++;
	 diezEmail->SetLabel(LINEA[lectura]);lectura++;
	 diezRed->SetLabel(LINEA[lectura]);lectura++;
	once->SetLabel(LINEA[lectura]);lectura++;
	 onceApellido->SetLabel(LINEA[lectura]);lectura++;
	 onceEmail->SetLabel(LINEA[lectura]);lectura++;
	 onceRed->SetLabel(LINEA[lectura]);lectura++;
	doce->SetLabel(LINEA[lectura]);lectura++;
	 doceApellido->SetLabel(LINEA[lectura]);lectura++;
	 doceEmail->SetLabel(LINEA[lectura]);lectura++;
	 doceRed->SetLabel(LINEA[lectura]);lectura++;
	trece->SetLabel(LINEA[lectura]);lectura++;
	 treceApellido->SetLabel(LINEA[lectura]);lectura++;
	 treceEmail->SetLabel(LINEA[lectura]);lectura++;
	 treceRed->SetLabel(LINEA[lectura]);lectura++;
	catorce->SetLabel(LINEA[lectura]);lectura++;
	 catorceApellido->SetLabel(LINEA[lectura]);lectura++;
	 catorceEmail->SetLabel(LINEA[lectura]);lectura++;
	 catorceRed->SetLabel(LINEA[lectura]);lectura++;
	quince->SetLabel(LINEA[lectura]);lectura++;
	 quinceApellido->SetLabel(LINEA[lectura]);lectura++;
	 quinceEmail->SetLabel(LINEA[lectura]);lectura++;
	 quinceRed->SetLabel(LINEA[lectura]);lectura++;
}

void MyFrame::OnTimer(wxTimerEvent& event)
{
	primero->SetLabel(LINEA[lectura]);lectura++;
	primeroApellido->SetLabel(LINEA[lectura]);lectura++;
	primeroEmail->SetLabel(LINEA[lectura]);lectura++;
	primeroRed->SetLabel(LINEA[lectura]);lectura++;
	segundo->SetLabel(LINEA[lectura]);lectura++;
	segundoApellido->SetLabel(LINEA[lectura]);lectura++;
	segundoEmail->SetLabel(LINEA[lectura]);lectura++;
	segundoRed->SetLabel(LINEA[lectura]);lectura++;
	tercero->SetLabel(LINEA[lectura]);lectura++;
	 terceroApellido->SetLabel(LINEA[lectura]);lectura++;
	 terceroEmail->SetLabel(LINEA[lectura]);lectura++;
	 terceroRed->SetLabel(LINEA[lectura]);lectura++;
	cuarto->SetLabel(LINEA[lectura]);lectura++;
	 cuartoApellido->SetLabel(LINEA[lectura]);lectura++;
	 cuartoEmail->SetLabel(LINEA[lectura]);lectura++;
	 cuartoRed->SetLabel(LINEA[lectura]);lectura++;
	cinco->SetLabel(LINEA[lectura]);lectura++;
	 cincoApellido->SetLabel(LINEA[lectura]);lectura++;
	 cincoEmail->SetLabel(LINEA[lectura]);lectura++;
	 cincoRed->SetLabel(LINEA[lectura]);lectura++;
	seis->SetLabel(LINEA[lectura]);lectura++;
	 seisApellido->SetLabel(LINEA[lectura]);lectura++;
	 seisEmail->SetLabel(LINEA[lectura]);lectura++;
	 seisRed->SetLabel(LINEA[lectura]);lectura++;
	siete->SetLabel(LINEA[lectura]);lectura++;
	 sieteApellido->SetLabel(LINEA[lectura]);lectura++;
	 sieteEmail->SetLabel(LINEA[lectura]);lectura++;
	 sieteRed->SetLabel(LINEA[lectura]);lectura++;
	ocho->SetLabel(LINEA[lectura]);lectura++;
	 ochoApellido->SetLabel(LINEA[lectura]);lectura++;
	 ochoEmail->SetLabel(LINEA[lectura]);lectura++;
	 ochoRed->SetLabel(LINEA[lectura]);lectura++;
	nueve->SetLabel(LINEA[lectura]);lectura++;
	 nueveApellido->SetLabel(LINEA[lectura]);lectura++;
	 nueveEmail->SetLabel(LINEA[lectura]);lectura++;
	 nueveRed->SetLabel(LINEA[lectura]);lectura++;
	diez->SetLabel(LINEA[lectura]);lectura++;
	 diezApellido->SetLabel(LINEA[lectura]);lectura++;
	 diezEmail->SetLabel(LINEA[lectura]);lectura++;
	 diezRed->SetLabel(LINEA[lectura]);lectura++;
	once->SetLabel(LINEA[lectura]);lectura++;
	 onceApellido->SetLabel(LINEA[lectura]);lectura++;
	 onceEmail->SetLabel(LINEA[lectura]);lectura++;
	 onceRed->SetLabel(LINEA[lectura]);lectura++;
	doce->SetLabel(LINEA[lectura]);lectura++;
	 doceApellido->SetLabel(LINEA[lectura]);lectura++;
	 doceEmail->SetLabel(LINEA[lectura]);lectura++;
	 doceRed->SetLabel(LINEA[lectura]);lectura++;
	trece->SetLabel(LINEA[lectura]);lectura++;
	 treceApellido->SetLabel(LINEA[lectura]);lectura++;
	 treceEmail->SetLabel(LINEA[lectura]);lectura++;
	 treceRed->SetLabel(LINEA[lectura]);lectura++;
	catorce->SetLabel(LINEA[lectura]);lectura++;
	 catorceApellido->SetLabel(LINEA[lectura]);lectura++;
	 catorceEmail->SetLabel(LINEA[lectura]);lectura++;
	 catorceRed->SetLabel(LINEA[lectura]);lectura++;
	quince->SetLabel(LINEA[lectura]);lectura++;
	 quinceApellido->SetLabel(LINEA[lectura]);lectura++;
	 quinceEmail->SetLabel(LINEA[lectura]);lectura++;
	 quinceRed->SetLabel(LINEA[lectura]);lectura++;
	pagina=1;
}
void MyFrame::OnAgregar(wxCommandEvent& event)
{
	int agregarSatisfactorio=0;
	wxString nombreNuevo=wxT("");
	wxString apellidoNuevo=wxT("");
	wxString emailNuevo=wxT("");
	wxString redNuevo=wxT("");
	nombreNuevo=wxGetTextFromUser(wxT("Introduce el nombre del nuevo contacto"),wxT("Agregar contactos"),wxT(""));
	if(nombreNuevo!=wxT("")){
		apellidoNuevo=wxGetTextFromUser(wxT("Introduce el apellido del nuevo contacto"),wxT("Agregar contactos"),wxT(""));
		if(apellidoNuevo!=wxT("")){
					emailNuevo=wxGetTextFromUser(wxT("Introduce el e-mail del contacto"),wxT("Agregar contactos"),wxT(""));
					if(emailNuevo!=wxT("")){
							redNuevo=wxGetTextFromUser(wxT("Introduce la red social ([F]Facebook, [T]Tuenti, [t]Twitter\n, [G+]Google+, [LI]LinkedIn,[...]Otras) y su nombre en la red.\nPor favor no uses espacios, usa '_' "),wxT("Agregar contactos"),wxT(""));
							if(redNuevo==wxT("")){wxMessageBox(wxT("Operacion cancelada"),wxT("Agregar contactos"),wxICON_WARNING|wxOK);}else{agregarSatisfactorio=1;}
							}else{wxMessageBox(wxT("Operacion cancelada"),wxT("Agregar contactos"),wxICON_WARNING|wxOK);}
					}else{wxMessageBox(wxT("Operacion cancelada"),wxT("Agregar contactos"),wxICON_WARNING|wxOK);}


	}
	else{wxMessageBox(wxT("Operacion cancelada"),wxT("Agregar contactos"),wxICON_WARNING|wxOK);}
	
	if(agregarSatisfactorio==1)
	{
		string nombreEscribir = string(nombreNuevo.mb_str());
		string apellidoEscribir = string(apellidoNuevo.mb_str());
		string emailEscribir = string(emailNuevo.mb_str());
		string redEscribir = string(redNuevo.mb_str());
		ofstream Escribir(entornoFinal,ios::app);
		Escribir << nombreEscribir << " " << apellidoEscribir << " " << emailEscribir << " " << redEscribir << "\n";
		Escribir.close();
	
	}	


	
}

void MyFrame::OnSiguiente(wxCommandEvent& event)
{
	if(pagina==12){wxMessageBox(wxT("Esta version de Agenda de Correos no acepta mas paginas, lo sentimos e intenta actualizar a la siguiente version"), wxT("Fin de programa"), wxICON_WARNING|wxOK);}else{
	pagina++;
	switch(pagina){
	case 1: lectura=60;break;
	case 2: lectura=120;break;
	case 3: lectura=180;break;
	case 4:lectura=240;break;
	case 5:lectura=300;break;
	case 6:lectura=360;break;
	case 7:lectura=420;break;
	case 8:lectura=480;break;
	case 9:lectura=540;break;
	case 10:lectura=600;break;
	case 11:lectura=660;break;
	case 12:lectura=730;break;
		} 
	primero->SetLabel(LINEA[lectura]);lectura++;
	primeroApellido->SetLabel(LINEA[lectura]);lectura++;
	primeroEmail->SetLabel(LINEA[lectura]);lectura++;
	primeroRed->SetLabel(LINEA[lectura]);lectura++;
	segundo->SetLabel(LINEA[lectura]);lectura++;
	segundoApellido->SetLabel(LINEA[lectura]);lectura++;
	segundoEmail->SetLabel(LINEA[lectura]);lectura++;
	segundoRed->SetLabel(LINEA[lectura]);lectura++;
	tercero->SetLabel(LINEA[lectura]);lectura++;
	 terceroApellido->SetLabel(LINEA[lectura]);lectura++;
	 terceroEmail->SetLabel(LINEA[lectura]);lectura++;
	 terceroRed->SetLabel(LINEA[lectura]);lectura++;
	cuarto->SetLabel(LINEA[lectura]);lectura++;
	 cuartoApellido->SetLabel(LINEA[lectura]);lectura++;
	 cuartoEmail->SetLabel(LINEA[lectura]);lectura++;
	 cuartoRed->SetLabel(LINEA[lectura]);lectura++;
	cinco->SetLabel(LINEA[lectura]);lectura++;
	 cincoApellido->SetLabel(LINEA[lectura]);lectura++;
	 cincoEmail->SetLabel(LINEA[lectura]);lectura++;
	 cincoRed->SetLabel(LINEA[lectura]);lectura++;
	seis->SetLabel(LINEA[lectura]);lectura++;
	 seisApellido->SetLabel(LINEA[lectura]);lectura++;
	 seisEmail->SetLabel(LINEA[lectura]);lectura++;
	 seisRed->SetLabel(LINEA[lectura]);lectura++;
	siete->SetLabel(LINEA[lectura]);lectura++;
	 sieteApellido->SetLabel(LINEA[lectura]);lectura++;
	 sieteEmail->SetLabel(LINEA[lectura]);lectura++;
	 sieteRed->SetLabel(LINEA[lectura]);lectura++;
	ocho->SetLabel(LINEA[lectura]);lectura++;
	 ochoApellido->SetLabel(LINEA[lectura]);lectura++;
	 ochoEmail->SetLabel(LINEA[lectura]);lectura++;
	 ochoRed->SetLabel(LINEA[lectura]);lectura++;
	nueve->SetLabel(LINEA[lectura]);lectura++;
	 nueveApellido->SetLabel(LINEA[lectura]);lectura++;
	 nueveEmail->SetLabel(LINEA[lectura]);lectura++;
	 nueveRed->SetLabel(LINEA[lectura]);lectura++;
	diez->SetLabel(LINEA[lectura]);lectura++;
	 diezApellido->SetLabel(LINEA[lectura]);lectura++;
	 diezEmail->SetLabel(LINEA[lectura]);lectura++;
	 diezRed->SetLabel(LINEA[lectura]);lectura++;
	once->SetLabel(LINEA[lectura]);lectura++;
	 onceApellido->SetLabel(LINEA[lectura]);lectura++;
	 onceEmail->SetLabel(LINEA[lectura]);lectura++;
	 onceRed->SetLabel(LINEA[lectura]);lectura++;
	doce->SetLabel(LINEA[lectura]);lectura++;
	 doceApellido->SetLabel(LINEA[lectura]);lectura++;
	 doceEmail->SetLabel(LINEA[lectura]);lectura++;
	 doceRed->SetLabel(LINEA[lectura]);lectura++;
	trece->SetLabel(LINEA[lectura]);lectura++;
	 treceApellido->SetLabel(LINEA[lectura]);lectura++;
	 treceEmail->SetLabel(LINEA[lectura]);lectura++;
	 treceRed->SetLabel(LINEA[lectura]);lectura++;
	catorce->SetLabel(LINEA[lectura]);lectura++;
	 catorceApellido->SetLabel(LINEA[lectura]);lectura++;
	 catorceEmail->SetLabel(LINEA[lectura]);lectura++;
	 catorceRed->SetLabel(LINEA[lectura]);lectura++;
	quince->SetLabel(LINEA[lectura]);lectura++;
	 quinceApellido->SetLabel(LINEA[lectura]);lectura++;
	 quinceEmail->SetLabel(LINEA[lectura]);lectura++;
	 quinceRed->SetLabel(LINEA[lectura]);lectura++;}
}

void MyFrame::OnAnterior(wxCommandEvent& event)
{
if(pagina==1){wxMessageBox(wxT("Esta version de Agenda de Correos no acepta mas paginas, lo sentimos e intenta actualizar a la siguiente version"), wxT("Inicio de programa"), wxICON_WARNING|wxOK);}else{
	pagina--;
	switch(pagina){
	case 1: lectura=0;break;
	case 2: lectura=60;break;
	case 3: lectura=120;break;
	case 4:lectura=180;break;
	case 5:lectura=240;break;
	case 6:lectura=300;break;
	case 7:lectura=360;break;
	case 8:lectura=420;break;
	case 9:lectura=480;break;
	case 10:lectura=540;break;
	case 11:lectura=600;break;
	case 12:lectura=660;break;
		} 
	primero->SetLabel(LINEA[lectura]);lectura++;
	primeroApellido->SetLabel(LINEA[lectura]);lectura++;
	primeroEmail->SetLabel(LINEA[lectura]);lectura++;
	primeroRed->SetLabel(LINEA[lectura]);lectura++;
	segundo->SetLabel(LINEA[lectura]);lectura++;
	segundoApellido->SetLabel(LINEA[lectura]);lectura++;
	segundoEmail->SetLabel(LINEA[lectura]);lectura++;
	segundoRed->SetLabel(LINEA[lectura]);lectura++;
	tercero->SetLabel(LINEA[lectura]);lectura++;
	 terceroApellido->SetLabel(LINEA[lectura]);lectura++;
	 terceroEmail->SetLabel(LINEA[lectura]);lectura++;
	 terceroRed->SetLabel(LINEA[lectura]);lectura++;
	cuarto->SetLabel(LINEA[lectura]);lectura++;
	 cuartoApellido->SetLabel(LINEA[lectura]);lectura++;
	 cuartoEmail->SetLabel(LINEA[lectura]);lectura++;
	 cuartoRed->SetLabel(LINEA[lectura]);lectura++;
	cinco->SetLabel(LINEA[lectura]);lectura++;
	 cincoApellido->SetLabel(LINEA[lectura]);lectura++;
	 cincoEmail->SetLabel(LINEA[lectura]);lectura++;
	 cincoRed->SetLabel(LINEA[lectura]);lectura++;
	seis->SetLabel(LINEA[lectura]);lectura++;
	 seisApellido->SetLabel(LINEA[lectura]);lectura++;
	 seisEmail->SetLabel(LINEA[lectura]);lectura++;
	 seisRed->SetLabel(LINEA[lectura]);lectura++;
	siete->SetLabel(LINEA[lectura]);lectura++;
	 sieteApellido->SetLabel(LINEA[lectura]);lectura++;
	 sieteEmail->SetLabel(LINEA[lectura]);lectura++;
	 sieteRed->SetLabel(LINEA[lectura]);lectura++;
	ocho->SetLabel(LINEA[lectura]);lectura++;
	 ochoApellido->SetLabel(LINEA[lectura]);lectura++;
	 ochoEmail->SetLabel(LINEA[lectura]);lectura++;
	 ochoRed->SetLabel(LINEA[lectura]);lectura++;
	nueve->SetLabel(LINEA[lectura]);lectura++;
	 nueveApellido->SetLabel(LINEA[lectura]);lectura++;
	 nueveEmail->SetLabel(LINEA[lectura]);lectura++;
	 nueveRed->SetLabel(LINEA[lectura]);lectura++;
	diez->SetLabel(LINEA[lectura]);lectura++;
	 diezApellido->SetLabel(LINEA[lectura]);lectura++;
	 diezEmail->SetLabel(LINEA[lectura]);lectura++;
	 diezRed->SetLabel(LINEA[lectura]);lectura++;
	once->SetLabel(LINEA[lectura]);lectura++;
	 onceApellido->SetLabel(LINEA[lectura]);lectura++;
	 onceEmail->SetLabel(LINEA[lectura]);lectura++;
	 onceRed->SetLabel(LINEA[lectura]);lectura++;
	doce->SetLabel(LINEA[lectura]);lectura++;
	 doceApellido->SetLabel(LINEA[lectura]);lectura++;
	 doceEmail->SetLabel(LINEA[lectura]);lectura++;
	 doceRed->SetLabel(LINEA[lectura]);lectura++;
	trece->SetLabel(LINEA[lectura]);lectura++;
	 treceApellido->SetLabel(LINEA[lectura]);lectura++;
	 treceEmail->SetLabel(LINEA[lectura]);lectura++;
	 treceRed->SetLabel(LINEA[lectura]);lectura++;
	catorce->SetLabel(LINEA[lectura]);lectura++;
	 catorceApellido->SetLabel(LINEA[lectura]);lectura++;
	 catorceEmail->SetLabel(LINEA[lectura]);lectura++;
	 catorceRed->SetLabel(LINEA[lectura]);lectura++;
	quince->SetLabel(LINEA[lectura]);lectura++;
	 quinceApellido->SetLabel(LINEA[lectura]);lectura++;
	 quinceEmail->SetLabel(LINEA[lectura]);lectura++;
	 quinceRed->SetLabel(LINEA[lectura]);lectura++;}
}
//int MyApp::OnRun()
//{
//
//}

