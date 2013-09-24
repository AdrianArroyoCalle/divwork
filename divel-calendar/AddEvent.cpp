#include "StdAfx.h"
#include "AddEvent.h"
#include <wx/datetime.h>


AddEvent::AddEvent(const wxString& title,int diadelano2,int mes2,int ano2) : wxDialog (NULL, wxID_ANY, title, wxDefaultPosition, wxSize(210, 110))
{

	SetSize(300,200);
	wxStaticText* ititulo=new wxStaticText(this,wxID_ANY,wxT("Titulo:"),wxPoint(1,10));
	titulo=new wxTextCtrl(this,wxID_ANY,wxT(""),wxPoint(70,10),wxSize(200,20),wxTE_RICH2);

	switch(mes2){
	case 0:break;
	case 1: diadelano2=diadelano2-31;break;
	case 2: diadelano2=diadelano2-28-31;break;
	case 3: diadelano2=diadelano2-28-31-30-1;break; //Abril
	case 4: diadelano2=diadelano2-28-31-30-31;break;
	case 5: diadelano2=diadelano2-28-31-30-31-30-1;break; //Junio
	case 6: diadelano2=diadelano2-28-31-30-31-30-31;break;//Sucesi�n completa 31-28-31-30-31-30-31-31-30-31-30-31
	case 7: diadelano2=diadelano2-28-31-30-31-30-31-31;break;
	case 8: diadelano2=diadelano2-28-31-30-31-30-31-31-30-1;break;//Septiembre
	case 9: diadelano2=diadelano2-28-31-30-31-30-31-31-30-31;break;
	case 10: diadelano2=diadelano2-28-31-30-31-30-31-31-30-31-30-1;break;//Noviembre
	case 11: diadelano2=diadelano2-28-31-30-31-30-31-31-30-31-30-31;break;
								
	}
	if((ano2%4==0 && (ano2%400==0 || ano2%100!=0))&& mes2>1)
	{
		diadelano2-=1;
	}


	idia=new wxStaticText(this,wxID_ANY,wxString::Format(wxT("Fecha: %d de %d del %d"),diadelano2,mes2,ano2),wxPoint(1,30));
	//Lugar, duraci�n, comentario
	wxStaticText* ilugar=new wxStaticText(this,wxID_ANY,wxT("Lugar:"),wxPoint(1,50));
	lugar=new wxTextCtrl(this,wxID_ANY,wxT(""),wxPoint(70,50),wxSize(200,20));
	wxStaticText* iduracion=new wxStaticText(this,wxID_ANY,wxT("Duracion:"),wxPoint(1,70));
	duracion=new wxTextCtrl(this,wxID_ANY,wxT(""),wxPoint(70,70),wxSize(200,20));
	wxStaticText* icomentario=new wxStaticText(this,wxID_ANY,wxT("Comentario:"),wxPoint(1,90));
	comentario=new wxTextCtrl(this,wxID_ANY,wxT(""),wxPoint(70,90),wxSize(200,20));
	wxButton* ok=new wxButton(this,ID_ADDEVTOK,wxT("OK"),wxPoint(70,110));
	Connect(ID_ADDEVTOK, wxEVT_COMMAND_BUTTON_CLICKED,wxCommandEventHandler(AddEvent::OK));

}


AddEvent::~AddEvent(void)
{
}

void AddEvent::OK(wxCommandEvent& event)
{




	if(ano<0 || ano>5000){
	ano=wxGetNumberFromUser(wxT("Introduce al ano del evento"),wxT("Escribe el numero"),wxT("Divel Calendar"),0L,0L,5000L);
	diadelano=wxGetNumberFromUser(wxT("Introduce el dia del evento"),wxT("Escribe el numero"),wxT("Divel Calendar"),0L,0L,366L);
	
	
	}
	//Conversi�n a formato DCalendar
	switch(mes){
	case 0:break;
	case 1: diadelano=diadelano-31;break;
	case 2: diadelano=diadelano-28-31;break;
	case 3: diadelano=diadelano-28-31-30-1;break; //Abril
	case 4: diadelano=diadelano-28-31-30-31;break;
	case 5: diadelano=diadelano-28-31-30-31-30-1;break; //Junio
	case 6: diadelano=diadelano-28-31-30-31-30-31;break;//Sucesi�n completa 31-28-31-30-31-30-31-31-30-31-30-31
	case 7: diadelano=diadelano-28-31-30-31-30-31-31;break;
	case 8: diadelano=diadelano-28-31-30-31-30-31-31-30-1;break;//Septiembre
	case 9: diadelano=diadelano-28-31-30-31-30-31-31-30-31;break;
	case 10: diadelano=diadelano-28-31-30-31-30-31-31-30-31-30-1;break;//Noviembre
	case 11: diadelano=diadelano-28-31-30-31-30-31-31-30-31-30-31;break;
								
	}
	if((ano%4==0 && (ano%400==0 || ano%100!=0))&& mes>1)
	{
		diadelano-=1;
	}



	wxString data[]={titulo->GetValue(),lugar->GetValue(),duracion->GetValue(),comentario->GetValue()};
	
	char* appdata_chr=getenv("HOME");
	wxString appdata=wxString::FromUTF8(appdata_chr);
	//wxString pathanual=wxString::Format(wxT("%s/Divel/Calendar/%d"),appdata,ano);
	wxString pathanual=appdata+wxT("/Divel/Calendar/")+wxString::Format(wxT("%d"),ano);
	if(wxDirExists(pathanual)==false)
	{
		wxMkdir(pathanual);
	}
	//CREAR CARPETA MENSUAL
	wxString pathmensual=appdata+wxT("/Divel/Calendar/")+wxString::Format(wxT("%d/%d"),ano,mes);
	if(wxDirExists(pathmensual)==false)
	{
		wxMkdir(pathmensual);
	}

	wxString pathdiario=pathmensual+wxString::Format(wxT("/%d"),diadelano);
	if(wxFileExists(pathdiario)==false)
	{
		//Crear fichero nuevo
		ofstream diafile(pathdiario.mb_str(),ofstream::app);
		if(diafile.is_open() && diafile.good())
		{
			char* cabecera="DivelCalendar:DiaFile\n";
			int tamano=strlen(cabecera);
			//strlen para tama�o de caracteres, sizeof tama�o de memoria
			diafile.write(cabecera,tamano);
			diafile.close();
		}



	}
		//A�adir al fichero
	  ofstream diafile(pathdiario.mb_str(),ofstream::app);
	  if(diafile.is_open() && diafile.good())
	  {
		wxString esc=wxT("Event: ")+data[0]+wxT("~")+data[1]+wxT("~")+data[2]+wxT("~")+data[3]+wxT("\n");
		diafile << esc;

	  }else{
	  wxMessageBox(wxT("No se ha podido guardar el evento"),wxT("Divel Calendar Error"),wxICON_ERROR|wxOK);
	  }
	  Destroy();
}
