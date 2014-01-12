///-----------------------------------------------------------------
///
/// @file      MonopolyFrm.cpp
/// @author    Adrian Arroyo
/// Created:   18/12/2011 20:55:14
/// @section   DESCRIPTION
///            MonopolyFrm class implementation
///
///------------------------------------------------------------------

#include "MonopolyFrm.h"
#include <stdlib.h>
#include <time.h>
#include <wx/msgdlg.h>
#include <wx/textfile.h>

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// MonopolyFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(MonopolyFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(MonopolyFrm::OnClose)
	EVT_BUTTON(ID_WXBUTTON16,MonopolyFrm::WxButton16Click)
	EVT_BUTTON(ID_WXBUTTON15,MonopolyFrm::WxButton15Click)
	EVT_BUTTON(ID_WXBUTTON14,MonopolyFrm::WxButton14Click)
	EVT_BUTTON(ID_WXBUTTON13,MonopolyFrm::WxButton13Click)
	EVT_BUTTON(ID_WXBUTTON12,MonopolyFrm::WxButton12Click0)
	EVT_BUTTON(ID_WXBUTTON11,MonopolyFrm::WxButton11Click0)
	EVT_BUTTON(ID_WXBUTTON10,MonopolyFrm::WxButton10Click)
	EVT_BUTTON(ID_WXBUTTON8,MonopolyFrm::WxButton8Click)
	EVT_BUTTON(ID_WXBUTTON6,MonopolyFrm::WxButton7Click)
	EVT_BUTTON(ID_WXBUTTON7,MonopolyFrm::WxButton7Click)
	EVT_BUTTON(ID_WXBUTTON5,MonopolyFrm::WxButton5Click0)
	EVT_BUTTON(ID_WXBUTTON3,MonopolyFrm::WxButton3Click)
	EVT_BUTTON(ID_WXBUTTON2,MonopolyFrm::WxButton2Click)
	EVT_BUTTON(ID_WXBUTTON1,MonopolyFrm::WxButton1Click)
END_EVENT_TABLE()
////Event Table End

MonopolyFrm::MonopolyFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

MonopolyFrm::~MonopolyFrm()
{
}

void MonopolyFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	wxInitAllImageHandlers();   //Initialize graphic format handlers

	WxMemo2 = new wxTextCtrl(this, ID_WXMEMO2, wxEmptyString, wxPoint(781, 135), wxSize(193, 23), wxTE_MULTILINE, wxDefaultValidator, wxT("2000"));
	WxMemo2->SetMaxLength(0);
	WxMemo2->AppendText(wxT("2000"));
	WxMemo2->SetFocus();
	WxMemo2->SetInsertionPointEnd();
	WxMemo2->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxMemo1 = new wxTextCtrl(this, ID_WXMEMO1, wxEmptyString, wxPoint(781, 111), wxSize(191, 21), wxTE_MULTILINE, wxDefaultValidator, wxT("2000"));
	WxMemo1->SetMaxLength(0);
	WxMemo1->AppendText(wxT("2000"));
	WxMemo1->SetFocus();
	WxMemo1->SetInsertionPointEnd();
	WxMemo1->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxButton16 = new wxButton(this, ID_WXBUTTON16, wxT("Slot 3"), wxPoint(752, 315), wxSize(194, 29), 0, wxDefaultValidator, wxT("WxButton16"));
	WxButton16->SetFont(wxFont(12, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxButton15 = new wxButton(this, ID_WXBUTTON15, wxT("Slot 2"), wxPoint(752, 284), wxSize(195, 27), 0, wxDefaultValidator, wxT("WxButton15"));
	WxButton15->SetFont(wxFont(12, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxButton14 = new wxButton(this, ID_WXBUTTON14, wxT("Slot 3"), wxPoint(751, 458), wxSize(202, 29), 0, wxDefaultValidator, wxT("WxButton14"));
	WxButton14->SetFont(wxFont(12, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxButton13 = new wxButton(this, ID_WXBUTTON13, wxT("Slot 2"), wxPoint(750, 426), wxSize(204, 27), 0, wxDefaultValidator, wxT("WxButton13"));
	WxButton13->SetFont(wxFont(12, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxButton12 = new wxButton(this, ID_WXBUTTON12, wxT("Slot 1"), wxPoint(748, 392), wxSize(206, 28), 0, wxDefaultValidator, wxT("WxButton12"));
	WxButton12->SetFont(wxFont(12, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticBox5 = new wxStaticBox(this, ID_WXSTATICBOX5, wxT("Guardar partida"), wxPoint(734, 367), wxSize(237, 126));
	WxStaticBox5->SetForegroundColour(wxColour(wxT("WHITE")));
	WxStaticBox5->SetFont(wxFont(13, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxButton11 = new wxButton(this, ID_WXBUTTON11, wxT("Slot 1"), wxPoint(750, 249), wxSize(198, 30), 0, wxDefaultValidator, wxT("WxButton11"));
	WxButton11->SetFont(wxFont(12, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticBox4 = new wxStaticBox(this, ID_WXSTATICBOX4, wxT("Cargar partida"), wxPoint(734, 222), wxSize(238, 134));
	WxStaticBox4->SetForegroundColour(wxColour(wxT("WHITE")));
	WxStaticBox4->SetFont(wxFont(13, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxEdit20 = new wxTextCtrl(this, ID_WXEDIT20, wxT("0"), wxPoint(853, 189), wxSize(12, 19), 0, wxDefaultValidator, wxT("WxEdit20"));
	WxEdit20->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxEdit19 = new wxTextCtrl(this, ID_WXEDIT19, wxT("0"), wxPoint(836, 188), wxSize(12, 19), 0, wxDefaultValidator, wxT("WxEdit19"));
	WxEdit19->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxEdit18 = new wxTextCtrl(this, ID_WXEDIT18, wxT("0"), wxPoint(822, 187), wxSize(12, 19), 0, wxDefaultValidator, wxT("WxEdit18"));
	WxEdit18->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxEdit17 = new wxTextCtrl(this, ID_WXEDIT17, wxT("0"), wxPoint(804, 187), wxSize(12, 19), 0, wxDefaultValidator, wxT("WxEdit17"));
	WxEdit17->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxEdit16 = new wxTextCtrl(this, ID_WXEDIT16, wxT("0"), wxPoint(785, 188), wxSize(12, 19), 0, wxDefaultValidator, wxT("WxEdit16"));
	WxEdit16->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxEdit15 = new wxTextCtrl(this, ID_WXEDIT15, wxT("0"), wxPoint(768, 186), wxSize(12, 19), 0, wxDefaultValidator, wxT("WxEdit15"));
	WxEdit15->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxEdit10 = new wxTextCtrl(this, ID_WXEDIT10, wxT("0"), wxPoint(752, 186), wxSize(12, 19), 0, wxDefaultValidator, wxT("WxEdit10"));
	WxEdit10->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxEdit3 = new wxTextCtrl(this, ID_WXEDIT3, wxT("0"), wxPoint(909, 168), wxSize(12, 19), 0, wxDefaultValidator, wxT("WxEdit3"));
	WxEdit3->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxEdit9 = new wxTextCtrl(this, ID_WXEDIT9, wxT("0"), wxPoint(895, 168), wxSize(12, 19), 0, wxDefaultValidator, wxT("WxEdit9"));
	WxEdit9->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxEdit8 = new wxTextCtrl(this, ID_WXEDIT8, wxT("0"), wxPoint(881, 167), wxSize(12, 19), 0, wxDefaultValidator, wxT("WxEdit8"));
	WxEdit8->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxEdit7 = new wxTextCtrl(this, ID_WXEDIT7, wxT("0"), wxPoint(866, 168), wxSize(12, 19), 0, wxDefaultValidator, wxT("WxEdit7"));
	WxEdit7->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxEdit6 = new wxTextCtrl(this, ID_WXEDIT6, wxT("0"), wxPoint(852, 167), wxSize(12, 19), 0, wxDefaultValidator, wxT("WxEdit6"));
	WxEdit6->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxEdit5 = new wxTextCtrl(this, ID_WXEDIT5, wxT("0"), wxPoint(836, 167), wxSize(12, 19), 0, wxDefaultValidator, wxT("WxEdit5"));
	WxEdit5->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxEdit4 = new wxTextCtrl(this, ID_WXEDIT4, wxT("0"), wxPoint(821, 167), wxSize(12, 19), 0, wxDefaultValidator, wxT("WxEdit4"));
	WxEdit4->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxEdit14 = new wxTextCtrl(this, ID_WXEDIT14, wxT("0"), wxPoint(804, 166), wxSize(12, 19), 0, wxDefaultValidator, wxT("WxEdit14"));
	WxEdit14->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxButton4 = new wxButton(this, ID_WXBUTTON4, wxT("WxButton4"), wxPoint(778, 510), wxSize(41, 8), 0, wxDefaultValidator, wxT("WxButton4"));
	WxButton4->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxButton10 = new wxButton(this, ID_WXBUTTON10, wxT("Hacer intercambio"), wxPoint(776, 46), wxSize(198, 61), 0, wxDefaultValidator, wxT("WxButton10"));
	WxButton10->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxEdit13 = new wxTextCtrl(this, ID_WXEDIT13, wxT("0"), wxPoint(784, 168), wxSize(15, 17), 0, wxDefaultValidator, wxT("WxEdit13"));
	WxEdit13->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxEdit12 = new wxTextCtrl(this, ID_WXEDIT12, wxT("0"), wxPoint(769, 165), wxSize(13, 19), 0, wxDefaultValidator, wxT("WxEdit12"));
	WxEdit12->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxEdit11 = new wxTextCtrl(this, ID_WXEDIT11, wxT("0"), wxPoint(752, 167), wxSize(12, 17), 0, wxDefaultValidator, wxT("WxEdit11"));
	WxEdit11->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxButton8 = new wxButton(this, ID_WXBUTTON8, wxT("Ayuda"), wxPoint(473, 433), wxSize(249, 72), 0, wxDefaultValidator, wxT("WxButton8"));
	WxButton8->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticText10 = new wxStaticText(this, ID_WXSTATICTEXT10, wxT(""), wxPoint(754, 138), wxDefaultSize, 0, wxT("WxStaticText10"));
	WxStaticText10->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticText9 = new wxStaticText(this, ID_WXSTATICTEXT9, wxT(""), wxPoint(758, 103), wxDefaultSize, 0, wxT("WxStaticText9"));
	WxStaticText9->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticText7 = new wxStaticText(this, ID_WXSTATICTEXT7, wxT("0"), wxPoint(756, 75), wxDefaultSize, 0, wxT("WxStaticText7"));
	WxStaticText7->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, wxT("Jugador 1:"), wxPoint(479, 371), wxDefaultSize, 0, wxT("WxStaticText2"));
	WxStaticText2->SetFont(wxFont(12, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxButton6 = new wxButton(this, ID_WXBUTTON6, wxT("Pasar"), wxPoint(9, 340), wxSize(122, 100), 0, wxDefaultValidator, wxT("WxButton6"));
	WxButton6->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticText5 = new wxStaticText(this, ID_WXSTATICTEXT5, wxT("2000"), wxPoint(563, 394), wxDefaultSize, 0, wxT("WxStaticText5"));
	WxStaticText5->SetFont(wxFont(11, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticText4 = new wxStaticText(this, ID_WXSTATICTEXT4, wxT("2000"), wxPoint(563, 371), wxDefaultSize, 0, wxT("WxStaticText4"));
	WxStaticText4->SetFont(wxFont(11, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticText8 = new wxStaticText(this, ID_WXSTATICTEXT8, wxT("Coste de la propiedad"), wxPoint(19, 108), wxDefaultSize, 0, wxT("WxStaticText8"));
	WxStaticText8->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticText6 = new wxStaticText(this, ID_WXSTATICTEXT6, wxT(""), wxPoint(762, 448), wxDefaultSize, 0, wxT("WxStaticText6"));
	WxStaticText6->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticBox3 = new wxStaticBox(this, ID_WXSTATICBOX3, wxT("Modo Banca y Gestion de partidas"), wxPoint(725, 13), wxSize(262, 486));
	WxStaticBox3->SetForegroundColour(wxColour(wxT("WHITE")));
	WxStaticBox3->SetFont(wxFont(12, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticBitmap1 = new wxStaticBitmap(this, ID_WXSTATICBITMAP1, wxBitmap(wxT("monopolyHD.bmp"), wxBITMAP_TYPE_BMP), wxPoint(478, 31), wxSize(230, 212) );
	WxStaticBitmap1->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxButton7 = new wxButton(this, ID_WXBUTTON7, wxT("Cambiar Jugador"), wxPoint(135, 428), wxSize(333, 78), 0, wxDefaultValidator, wxT("WxButton7"));
	WxButton7->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticText15 = new wxStaticText(this, ID_WXSTATICTEXT15, wxT("Jugador 2:"), wxPoint(479, 395), wxDefaultSize, 0, wxT("WxStaticText15"));
	WxStaticText15->SetFont(wxFont(12, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticText3 = new wxStaticText(this, ID_WXSTATICTEXT3, wxT(""), wxPoint(756, 41), wxDefaultSize, 0, wxT("WxStaticText3"));
	WxStaticText3->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, wxT("Pulsa JUGAR para empezar el juego de dos jugadores de Monopoly"), wxPoint(15, 41), wxDefaultSize, 0, wxT("WxStaticText1"));
	WxStaticText1->SetFont(wxFont(11, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticBox2 = new wxStaticBox(this, ID_WXSTATICBOX2, wxT("Dinero"), wxPoint(472, 339), wxSize(250, 88));
	WxStaticBox2->SetForegroundColour(wxColour(wxT("WHITE")));
	WxStaticBox2->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxButton5 = new wxButton(this, ID_WXBUTTON5, wxT("Construir"), wxPoint(368, 258), wxSize(346, 80), 0, wxDefaultValidator, wxT("WxButton5"));
	WxButton5->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxButton3 = new wxButton(this, ID_WXBUTTON3, wxT("Comprar"), wxPoint(8, 256), wxSize(349, 82), 0, wxDefaultValidator, wxT("WxButton3"));
	WxButton3->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxButton2 = new wxButton(this, ID_WXBUTTON2, wxT("Tirar dado"), wxPoint(135, 345), wxSize(333, 82), 0, wxDefaultValidator, wxT("WxButton2"));
	WxButton2->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxStaticBox1 = new wxStaticBox(this, ID_WXSTATICBOX1, wxT("Panel de Juego"), wxPoint(8, 11), wxSize(706, 241));
	WxStaticBox1->SetForegroundColour(wxColour(wxT("WHITE")));
	WxStaticBox1->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxButton1 = new wxButton(this, ID_WXBUTTON1, wxT("JUGAR"), wxPoint(8, 444), wxSize(123, 62), 0, wxDefaultValidator, wxT("WxButton1"));
	WxButton1->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxNORMAL, false));

	SetTitle(wxT("Monopoly"));
	SetIcon(wxNullIcon);
	SetSize(8,8,999,542);
	Center();
	
	////GUI Items Creation End
}

void MonopolyFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxButton1Click jugar
 */
void MonopolyFrm::WxButton1Click(wxCommandEvent& event)
{
    int activo;
	activo=1;
    WxStaticText3->SetLabel(_("1"));// activar variable activo
}

/*
 * WxButton2Click tirar dado
 */
void MonopolyFrm::WxButton2Click(wxCommandEvent& event)
{
    char j;
    int activo;
    int dado;
    double posicion1;
    double posicion2;
    double dinero1;
    double dinero2;
    double jugador;
    posicion1=0; //posicion inicial
    posicion2=0; //posicion inicial
    dinero1=2000; //dinero inicial
    dinero2=2000; //dinero inicial
    WxStaticText7->GetLabel().ToDouble( &posicion1);
    WxStaticText4->GetLabel().ToDouble( &dinero1);
    WxStaticText5->GetLabel().ToDouble( &dinero2);
    WxStaticText10->GetLabel().ToDouble(&posicion2);
    WxStaticText4->SetLabel(wxString()<<dinero1); //ajustar dinero
    WxStaticText5->SetLabel(wxString()<<dinero2); //ajustar dinero
    WxStaticText3->GetLabel().ToDouble( &jugador);
    if(jugador==0){
        WxStaticText1->SetLabel(_("No puedes tirar los dados, antes debes empezar el juego"));
        }
    if(jugador==1){
            srand(time(NULL)); //Hora
            dado=(rand()%6)+1; //Cuentas con los dados
            WxStaticText1->SetLabel(_("Dado="));
            posicion1+=dado; //sumar el dado a la posicion 
            WxStaticText7->SetLabel(wxString()<<posicion1);
            switch(dado){
                case 1:
                { wxMessageDialog *aMsg = new wxMessageDialog(this,_("Dado=1"), _("Resultado"), wxOK);
                aMsg->ShowModal();
                free(aMsg);
                WxStaticText1->SetLabel(_("Dado=1"));
                }
                break; //Informar sobre el resultado
                case 2:
                {
                wxMessageDialog *bMsg = new wxMessageDialog(this,_("Dado=2"), _("Resultado"), wxOK);
                bMsg->ShowModal();
                free(bMsg);
                WxStaticText1->SetLabel(_("Dado=2"));
                }
                break;
                case 3: {wxMessageDialog *cMsg = new wxMessageDialog(this,_("Dado=3"), _("Resultado"), wxOK);
                cMsg->ShowModal();
                free(cMsg);
                WxStaticText1->SetLabel(_("Dado=3"));
                }
                break;
                case 4: {wxMessageDialog *dMsg = new wxMessageDialog(this,_("Dado=4"), _("Resultado"), wxOK);
                dMsg->ShowModal();
                free(dMsg);
                WxStaticText1->SetLabel(_("Dado=4"));}
                break;
                case 5: {wxMessageDialog *eMsg = new wxMessageDialog(this,_("Dado=5"), _("Resultado"), wxOK);
                eMsg->ShowModal();
                free(eMsg);
                WxStaticText1->SetLabel(_("Dado=5"));}
                break;
                case 6: {wxMessageDialog *fMsg = new wxMessageDialog(this,_("Dado=6"), _("Resultado"), wxOK);
                fMsg->ShowModal();
                free(fMsg);
                WxStaticText1->SetLabel(_("Dado=6"));}
                break;
                }
        if(posicion1 >20){
            posicion1=0;
            dinero1+=2000;
            WxStaticText1->SetLabel(_("Recibes 2000 $ por pasar por la salida"));
        }
        if(WxStaticText7->GetLabel()== wxString(_("1"))){
            WxStaticText1->SetLabel(_("Calle de la Asuncion"));
            WxStaticText8->SetLabel(_("Coste: 150 $     Alquiler: 25 $     Alquiler con hotel: 50 $"));
            if(WxEdit11->GetValue()== wxString(_("2"))){
                if(dinero1 < 25){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-25;
                    dinero2=dinero2+25;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Calle de la Asuncion"));
                }}
            if(WxEdit11->GetValue()== wxString(_("4"))){
                if(dinero1 < 50){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-50;
                    dinero2+=50;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Calle de la Asuncion"));
                }}
        }
        if(WxStaticText7->GetLabel()==wxString(_("2"))){
            WxStaticText1->SetLabel(_("Rambla de San Antonio"));
            WxStaticText8->SetLabel(_("Coste: 200 $     Alquiler: 30 $     Alquiler con hotel: 100 $"));
            if(WxEdit12->GetValue()== wxString(_("2"))){
                if(dinero1 < 30){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-30;
                    dinero2=dinero2+30;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Rambla de San Antonio"));
                }}
                if(WxEdit12->GetValue()== wxString(_("4"))){
                if(dinero1 < 100){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-100;
                    dinero2+=100;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Rambla de San Antonio"));
                }}
        }
        if(WxStaticText7->GetLabel()==wxString(_("3"))){
            WxStaticText1->SetLabel(_("Paseo Llagra"));
            WxStaticText8->SetLabel(_("Coste: 250 $     Alquiler: 35 $     Alquiler con hotel: 150 $"));
        if(WxEdit13->GetValue()== wxString(_("2"))){
                if(dinero1 < 35){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-35;
                    dinero2=dinero2+35;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Paseo Llagra"));
                }}
                if(WxEdit13->GetValue()== wxString(_("4"))){
                if(dinero1 < 150){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-150;
                    dinero2+=150;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Paseo Llagra"));
                }}
        }
        if(WxStaticText7->GetLabel()==wxString(_("4"))){
            WxStaticText1->SetLabel(_("Avenida Molpeceres"));
            WxStaticText8->SetLabel(_("Coste: 300 $     Alquiler: 40 $     Alquiler con hotel: 200 $"));
        if(WxEdit14->GetValue()== wxString(_("2"))){
                if(dinero1 < 40){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-40;
                    dinero2=dinero2+40;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Avenida Molpeceres"));
                }}
                if(WxEdit14->GetValue()== wxString(_("4"))){
                if(dinero1 < 200){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-200;
                    dinero2+=200;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Avenida Molpeceres"));
                }}
        }
        if(WxStaticText7->GetLabel()==wxString(_("5"))){
            WxStaticText1->SetLabel(_("Calle Zorrilla"));
            WxStaticText8->SetLabel(_("Coste: 350 $     Alquiler: 45 $     Alquiler con hotel: 250 $"));
        if(WxEdit4->GetValue()== wxString(_("2"))){
                if(dinero1 < 45){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-45;
                    dinero2=dinero2+45;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Calle Zorrilla"));
                }}if(WxEdit4->GetValue()== wxString(_("4"))){
                if(dinero1 < 250){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-250;
                    dinero2+=250;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Calle Zorrilla"));
                }}
        }
        if(WxStaticText7->GetLabel()==wxString(_("6"))){
            WxStaticText1->SetLabel(_("Callejon de la Paz"));
            WxStaticText8->SetLabel(_("Coste: 400 $     Alquiler: 50 $     Alquiler con hotel: 300 $"));
        if(WxEdit5->GetValue()== wxString(_("2"))){
                if(dinero1 < 50){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-50;
                    dinero2=dinero2+50;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Callejon de la Paz"));
                }}if(WxEdit5->GetValue()== wxString(_("4"))){
                if(dinero1 < 300){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-300;
                    dinero2+=300;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Callejon de la Paz"));                }}
        }
        if(WxStaticText7->GetLabel()==wxString(_("7"))){
            WxStaticText1->SetLabel(_("Impuesto sobre la renta"));
            WxStaticText8->SetLabel(_("Debes pagar: 200 $ (Paga dando a COMPRAR)"));
        }
        if(WxStaticText7->GetLabel()==wxString(_("8"))){
            WxStaticText1->SetLabel(_("Calle Hersinamento"));
            WxStaticText8->SetLabel(_("Coste: 450 $     Alquiler: 60 $     Alquiler con hotel: 300 $"));
        if(WxEdit6->GetValue()== wxString(_("2"))){
                if(dinero1 < 60){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-60;
                    dinero2=dinero2+60;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Calle Hersinamiento"));
                }}if(WxEdit6->GetValue()== wxString(_("4"))){
                if(dinero1 < 300){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-300;
                    dinero2+=300;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Calle Hersinamiento"));
                }}
        }
        if(WxStaticText7->GetLabel()==wxString(_("9"))){
            WxStaticText1->SetLabel(_("Paseo de Longbridge"));
            WxStaticText8->SetLabel(_("Coste: 450 $     Alquiler: 50 $     Alquiler con hotel: 400 $"));
        if(WxEdit7->GetValue()== wxString(_("2"))){
                if(dinero1 < 50){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-50;
                    dinero2=dinero2+50;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Paseo de Longbridge"));
                }}if(WxEdit7->GetValue()== wxString(_("4"))){
                if(dinero1 < 400){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-400;
                    dinero2+=400;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Paseo de Longbridge"));
                }}
        }
        if(WxStaticText7->GetLabel()==wxString(_("10"))){
            WxStaticText1->SetLabel(_("Plaza Reunida"));
            WxStaticText8->SetLabel(_("Coste: 500 $     Alquiler: 50 $     Alquiler con hotel: 300 $"));
        if(WxEdit8->GetValue()== wxString(_("2"))){
                if(dinero1 < 50){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-50;
                    dinero2=dinero2+50;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Plaza Reunida"));
                }}if(WxEdit8->GetValue()== wxString(_("4"))){
                if(dinero1 < 300){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-300;
                    dinero2+=300;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Plaza Reunida"));
                }}}
        if(WxStaticText7->GetLabel()==wxString(_("11"))){
            WxStaticText1->SetLabel(_("Carcel"));
            WxStaticText8->SetLabel(_("Paga 500 $ para volver al juego (Paga pulsando COMPRAR)"));
        }
        if(WxStaticText7->GetLabel()==wxString(_("12"))){
            WxStaticText1->SetLabel(_("Calle Oscura"));
            WxStaticText8->SetLabel(_("Coste: 550 $     Alquiler: 60 $     Alquiler con hotel: 400 $"));
        if(WxEdit9->GetValue()== wxString(_("2"))){
                if(dinero1 < 60){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-60;
                    dinero2=dinero2+60;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Calle Oscura"));
                }}if(WxEdit9->GetValue()== wxString(_("4"))){
                if(dinero1 < 400){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-400;
                    dinero2+=400;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Calle Oscura"));
                }}
        }
        if(WxStaticText7->GetLabel()==wxString(_("13"))){
            WxStaticText1->SetLabel(_("Rua Libertad"));
            WxStaticText8->SetLabel(_("Coste: 540 $     Alquiler: 63 $     Alquiler con hotel: 400 $"));
        if(WxEdit3->GetValue()== wxString(_("2"))){
                if(dinero1 < 63){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-63;
                    dinero2=dinero2+63;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Rua Libertad"));
                }}if(WxEdit3->GetValue()== wxString(_("4"))){
                if(dinero1 < 400){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-400;
                    dinero2+=400;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Rua Libertad"));
                }}
        }
        if(WxStaticText7->GetLabel()==wxString(_("14"))){
            WxStaticText1->SetLabel(_("Rue del Percebe"));
            WxStaticText8->SetLabel(_("Coste: 600 $     Alquiler: 70 $     Alquiler con hotel: 430 $"));
        if(WxEdit10->GetValue()== wxString(_("2"))){
                if(dinero1 < 70){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-70;
                    dinero2=dinero2+70;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Rue del Percebe"));
                }}if(WxEdit10->GetValue()== wxString(_("4"))){
                if(dinero1 < 430){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-430;
                    dinero2+=430;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Rue del Percebe"));
                }}
        }
        if(WxStaticText7->GetLabel()==wxString(_("15"))){
            WxStaticText1->SetLabel(_("Avenida de Quintanilla"));
            WxStaticText8->SetLabel(_("Coste: 600 $     Alquiler: 77 $     Alquiler con hotel: 480 $"));
        if(WxEdit15->GetValue()== wxString(_("2"))){
                if(dinero1 < 77){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-77;
                    dinero2=dinero2+77;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Avenida de Quintanilla"));
                }}if(WxEdit15->GetValue()== wxString(_("4"))){
                if(dinero1 < 480){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-480;
                    dinero2+=480;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Avenida de Quintanilla"));
                }}
        }
        if(WxStaticText7->GetLabel()==wxString(_("16"))){
            WxStaticText1->SetLabel(_("Muelle de Levante"));
            WxStaticText8->SetLabel(_("Coste: 700 $     Alquiler: 80 $     Alquiler con hotel: 500 $"));
        if(WxEdit16->GetValue()== wxString(_("2"))){
                if(dinero1 < 80){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-80;
                    dinero2=dinero2+80;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Muelle de Levante"));
                }}if(WxEdit16->GetValue()== wxString(_("4"))){
                if(dinero1 < 500){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-500;
                    dinero2+=500;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Muelle de Levante"));
                }}
        }
        if(WxStaticText7->GetLabel()==wxString(_("17"))){
            WxStaticText1->SetLabel(_("Carretera de Adrousa"));
            WxStaticText8->SetLabel(_("Coste: 750 $     Alquiler: 82 $     Alquiler con hotel: 600 $"));
        if(WxEdit17->GetValue()== wxString(_("2"))){
                if(dinero1 < 82){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-82;
                    dinero2=dinero2+82;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Carretera de Adrousa"));
                }}if(WxEdit17->GetValue()== wxString(_("4"))){
                if(dinero1 < 600){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-600;
                    dinero2+=600;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Carretera de Adrousa"));
                }}
        }
        if(WxStaticText7->GetLabel()==wxString(_("18"))){
            WxStaticText1->SetLabel(_("Autopista de Hertia"));
            WxStaticText8->SetLabel(_("Coste: 800 $     Alquiler: 86 $     Alquiler con hotel: 700 $"));
        if(WxEdit18->GetValue()== wxString(_("2"))){
                if(dinero1 < 86){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-86;
                    dinero2=dinero2+86;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Autopista de Hertia"));
                }}if(WxEdit18->GetValue()== wxString(_("4"))){
                if(dinero1 < 700){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-700;
                    dinero2+=700;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Autopista de Hertia"));
                }}
        }
        if(WxStaticText7->GetLabel()==wxString(_("19"))){
            WxStaticText1->SetLabel(_("Calle Salgano"));
            WxStaticText8->SetLabel(_("Coste: 900 $     Alquiler: 90 $     Alquiler con hotel: 800 $"));
        if(WxEdit19->GetValue()== wxString(_("2"))){
                if(dinero1 < 90){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-90;
                    dinero2=dinero2+90;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Calle Salgano"));
                }}if(WxEdit19->GetValue()== wxString(_("4"))){
                if(dinero1 < 800){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-800;
                    dinero2+=800;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Calle Salgano"));
                }}
        }
        if(WxStaticText7->GetLabel()==wxString(_("20"))){
            WxStaticText1->SetLabel(_("Paseo de Kolinberg"));
            WxStaticText8->SetLabel(_("Coste: 1000 $     Alquiler: 100 $     Alquiler con hotel: 900 $"));
        if(WxEdit20->GetValue()== wxString(_("2"))){
                if(dinero1 < 100){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-100;
                    dinero2=dinero2+100;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Paseo de Kolinberg"));
                }}
        if(WxEdit20->GetValue()== wxString(_("4"))){
                if(dinero1 < 900){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
                }else{
                    dinero1=dinero1-900;
                    dinero2+=900;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Paseo de Kolinberg"));
                }}
        }
        
      WxStaticText3->SetLabel(_("2"));     
      WxStaticText7->SetLabel(wxString()<<posicion1); 
      WxStaticText4->SetLabel(wxString()<<dinero1);
      WxStaticText5->SetLabel(wxString()<<dinero2);
}
if(jugador==3){
            srand(time(NULL)); //Hora
            dado=(rand()%6)+1; //Cuentas con los dados
            WxStaticText1->SetLabel(_("Dado=")); 
            WxStaticText10->SetLabel(wxString()<<posicion2);
            WxStaticText10->GetLabel().ToDouble(&posicion2);
            switch(dado){

                case 1: {wxMessageDialog *aMsg = new wxMessageDialog(this,_("Dado=1"), _("Resultado"), wxOK);
                aMsg->ShowModal();
                free(aMsg);
                WxStaticText1->SetLabel(_("Dado=1"));}
                break; //Informar sobre el resultado
                case 2: {wxMessageDialog *bMsg = new wxMessageDialog(this,_("Dado=2"), _("Resultado"), wxOK);
                bMsg->ShowModal();
                free(bMsg);
                WxStaticText1->SetLabel(_("Dado=2"));}
                break;
                case 3: {wxMessageDialog *cMsg = new wxMessageDialog(this,_("Dado=3"), _("Resultado"), wxOK);
                cMsg->ShowModal();
                free(cMsg);
                WxStaticText1->SetLabel(_("Dado=3"));}
                break;
                case 4: {wxMessageDialog *dMsg = new wxMessageDialog(this,_("Dado=4"), _("Resultado"), wxOK);
                dMsg->ShowModal();
                free(dMsg);
                WxStaticText1->SetLabel(_("Dado=4"));}
                break;
                case 5: {wxMessageDialog *eMsg = new wxMessageDialog(this,_("Dado=5"), _("Resultado"), wxOK);
                eMsg->ShowModal();
                free(eMsg);
                WxStaticText1->SetLabel(_("Dado=5"));}
                break;
                case 6: {wxMessageDialog *fMsg = new wxMessageDialog(this,_("Dado=6"), _("Resultado"), wxOK);
                fMsg->ShowModal();
                free(fMsg);
                WxStaticText1->SetLabel(_("Dado=6"));}
                break;
    }
    posicion2+=dado;
        if(posicion2> 20){
            posicion2=0;
            dinero2+=2000;
            WxStaticText1->SetLabel(_("Recibes 2000 $ por pasar por la salida"));
            }
            if(posicion2==1){
            WxStaticText1->SetLabel(_("Calle de la Asuncion"));
            WxStaticText8->SetLabel(_("Coste: 150 $     Alquiler: 25 $     Alquiler con hotel: 50 $"));
            if(WxEdit11->GetValue()== wxString(_("1"))){
                if(dinero2 < 25){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-25;
                    dinero1=dinero1+25;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Calle de la Asuncion"));
                }}
            if(WxEdit11->GetValue()== wxString(_("3"))){
                if(dinero2 < 50){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-50;
                    dinero1+=50;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Calle de la Asuncion"));
                }}
        }
        if(posicion2==2){
            WxStaticText1->SetLabel(_("Rambla de San Antonio"));
            WxStaticText8->SetLabel(_("Coste: 200 $     Alquiler: 30 $     Alquiler con hotel: 100 $"));
            if(WxEdit12->GetValue()== wxString(_("1"))){
                if(dinero2 < 30){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-30;
                    dinero1=dinero1+30;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Rambla de San Antonio"));
                }}
                if(WxEdit12->GetValue()== wxString(_("3"))){
                if(dinero2 < 100){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-100;
                    dinero1+=100;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Rambla de San Antonio"));
                }}
        }
        if(posicion2==3){
            WxStaticText1->SetLabel(_("Paseo Llagra"));
            WxStaticText8->SetLabel(_("Coste: 250 $     Alquiler: 35 $     Alquiler con hotel: 150 $"));
        if(WxEdit13->GetValue()== wxString(_("1"))){
                if(dinero2 < 35){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-35;
                    dinero1=dinero1+35;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Paseo Llagra"));
                }}
                if(WxEdit13->GetValue()== wxString(_("3"))){
                if(dinero2 < 150){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-150;
                    dinero1+=150;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Paseo Llagra"));
                }}
        }
        if(posicion2==4){
            WxStaticText1->SetLabel(_("Avenida Molpeceres"));
            WxStaticText8->SetLabel(_("Coste: 300 $     Alquiler: 40 $     Alquiler con hotel: 200 $"));
        if(WxEdit14->GetValue()== wxString(_("1"))){
                if(dinero2 < 40){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-40;
                    dinero1=dinero1+40;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Avenida Molpeceres"));
                }}
                if(WxEdit14->GetValue()== wxString(_("3"))){
                if(dinero2 < 200){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-200;
                    dinero1+=200;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Avenida Molpeceres"));
                }}
        }
        if(posicion2==5){
            WxStaticText1->SetLabel(_("Calle Zorrilla"));
            WxStaticText8->SetLabel(_("Coste: 350 $     Alquiler: 45 $     Alquiler con hotel: 250 $"));
        if(WxEdit4->GetValue()== wxString(_("1"))){
                if(dinero2 < 45){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-45;
                    dinero1=dinero1+45;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Calle Zorrilla"));
                }}if(WxEdit4->GetValue()== wxString(_("3"))){
                if(dinero2 < 250){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-250;
                    dinero1+=250;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Calle Zorrilla"));
                }}
        }
        if(posicion2==6){
            WxStaticText1->SetLabel(_("Callejon de la Paz"));
            WxStaticText8->SetLabel(_("Coste: 400 $     Alquiler: 50 $     Alquiler con hotel: 300 $"));
        if(WxEdit5->GetValue()== wxString(_("1"))){
                if(dinero2 < 50){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-50;
                    dinero1=dinero1+50;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Callejon de la Paz"));
                }}if(WxEdit5->GetValue()== wxString(_("3"))){
                if(dinero2 < 300){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-300;
                    dinero1+=300;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Callejon de la Paz"));                }}
        }
        if(posicion2==7){
            WxStaticText1->SetLabel(_("Impuesto sobre la renta"));
            WxStaticText8->SetLabel(_("Debes pagar: 200 $ (Paga dando a COMPRAR)"));
        }
        if(posicion2==8){
            WxStaticText1->SetLabel(_("Calle Hersinamento"));
            WxStaticText8->SetLabel(_("Coste: 450 $     Alquiler: 60 $     Alquiler con hotel: 300 $"));
        if(WxEdit6->GetValue()== wxString(_("1"))){
                if(dinero2 < 60){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-60;
                    dinero1=dinero1+60;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Calle Hersinamiento"));
                }}if(WxEdit6->GetValue()== wxString(_("3"))){
                if(dinero2 < 300){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-300;
                    dinero1+=300;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Calle Hersinamiento"));
                }}
        }
        if(posicion2==9){
            WxStaticText1->SetLabel(_("Paseo de Longbridge"));
            WxStaticText8->SetLabel(_("Coste: 450 $     Alquiler: 50 $     Alquiler con hotel: 400 $"));
        if(WxEdit7->GetValue()== wxString(_("1"))){
                if(dinero2 < 50){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-50;
                    dinero1=dinero1+50;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Paseo de Longbridge"));
                }}if(WxEdit7->GetValue()== wxString(_("3"))){
                if(dinero2 < 400){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-400;
                    dinero1+=400;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Paseo de Longbridge"));
                }}
        }
        if(posicion2==10){
            WxStaticText1->SetLabel(_("Plaza Reunida"));
            WxStaticText8->SetLabel(_("Coste: 500 $     Alquiler: 50 $     Alquiler con hotel: 300 $"));
        if(WxEdit8->GetValue()== wxString(_("1"))){
                if(dinero2 < 50){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-50;
                    dinero1=dinero1+50;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Plaza Reunida"));
                }}if(WxEdit8->GetValue()== wxString(_("3"))){
                if(dinero2 < 300){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-300;
                    dinero1+=300;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Plaza Reunida"));
                }}}
        if(posicion2==11){
            WxStaticText1->SetLabel(_("Carcel"));
            WxStaticText8->SetLabel(_("Paga 500 $ para volver al juego (Paga pulsando COMPRAR)"));
        }
        if(posicion2==12){
            WxStaticText1->SetLabel(_("Calle Oscura"));
            WxStaticText8->SetLabel(_("Coste: 550 $     Alquiler: 60 $     Alquiler con hotel: 400 $"));
        if(WxEdit9->GetValue()== wxString(_("1"))){
                if(dinero2 < 60){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-60;
                    dinero1=dinero1+60;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Calle Oscura"));
                }}if(WxEdit9->GetValue()== wxString(_("3"))){
                if(dinero2 < 400){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-400;
                    dinero1+=400;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Calle Oscura"));
                }}
        }
        if(posicion2==13){
            WxStaticText1->SetLabel(_("Rua Libertad"));
            WxStaticText8->SetLabel(_("Coste: 540 $     Alquiler: 63 $     Alquiler con hotel: 400 $"));
        if(WxEdit3->GetValue()== wxString(_("1"))){
                if(dinero2 < 63){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-63;
                    dinero1=dinero1+63;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Rua Libertad"));
                }}if(WxEdit3->GetValue()== wxString(_("3"))){
                if(dinero2 < 400){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-400;
                    dinero1+=400;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Rua Libertad"));
                }}
        }
        if(posicion2==14){
            WxStaticText1->SetLabel(_("Rue del Percebe"));
            WxStaticText8->SetLabel(_("Coste: 600 $     Alquiler: 70 $     Alquiler con hotel: 430 $"));
        if(WxEdit10->GetValue()== wxString(_("1"))){
                if(dinero2 < 70){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-70;
                    dinero1=dinero1+70;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Rue del Percebe"));
                }}if(WxEdit10->GetValue()== wxString(_("3"))){
                if(dinero2 < 430){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-430;
                    dinero1+=430;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Rue del Percebe"));
                }}
        }
        if(posicion2==15){
            WxStaticText1->SetLabel(_("Avenida de Quintanilla"));
            WxStaticText8->SetLabel(_("Coste: 600 $     Alquiler: 77 $     Alquiler con hotel: 480 $"));
        if(WxEdit15->GetValue()== wxString(_("1"))){
                if(dinero2 < 77){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-77;
                    dinero1=dinero1+77;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Avenida de Quintanilla"));
                }}if(WxEdit15->GetValue()== wxString(_("3"))){
                if(dinero2 < 480){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-480;
                    dinero1+=480;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Avenida de Quintanilla"));
                }}
        }
        if(posicion2==16){
            WxStaticText1->SetLabel(_("Muelle de Levante"));
            WxStaticText8->SetLabel(_("Coste: 700 $     Alquiler: 80 $     Alquiler con hotel: 500 $"));
        if(WxEdit16->GetValue()== wxString(_("1"))){
                if(dinero2 < 80){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-80;
                    dinero1=dinero1+80;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Muelle de Levante"));
                }}if(WxEdit16->GetValue()== wxString(_("4"))){
                if(dinero2 < 500){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-500;
                    dinero1+=500;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Muelle de Levante"));
                }}
        }
        if(posicion2==17){
            WxStaticText1->SetLabel(_("Carretera de Adrousa"));
            WxStaticText8->SetLabel(_("Coste: 750 $     Alquiler: 82 $     Alquiler con hotel: 600 $"));
        if(WxEdit17->GetValue()== wxString(_("1"))){
                if(dinero2 < 82){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-82;
                    dinero1=dinero1+82;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Carretera de Adrousa"));
                }}if(WxEdit17->GetValue()== wxString(_("3"))){
                if(dinero2 < 600){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-600;
                    dinero1+=600;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Carretera de Adrousa"));
                }}
        }
        if(posicion2==18){
            WxStaticText1->SetLabel(_("Autopista de Hertia"));
            WxStaticText8->SetLabel(_("Coste: 800 $     Alquiler: 86 $     Alquiler con hotel: 700 $"));
        if(WxEdit18->GetValue()== wxString(_("1"))){
                if(dinero2 < 86){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-86;
                    dinero1=dinero1+86;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Autopista de Hertia"));
                }}if(WxEdit18->GetValue()== wxString(_("3"))){
                if(dinero2 < 700){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-700;
                    dinero1+=700;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Autopista de Hertia"));
                }}
        }
        if(posicion2==19){
            WxStaticText1->SetLabel(_("Calle Salgano"));
            WxStaticText8->SetLabel(_("Coste: 900 $     Alquiler: 90 $     Alquiler con hotel: 800 $"));
        if(WxEdit19->GetValue()== wxString(_("1"))){
                if(dinero2 < 90){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-90;
                    dinero1=dinero1+90;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Calle Salgano"));
                }}if(WxEdit19->GetValue()== wxString(_("3"))){
                if(dinero2 < 800){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-800;
                    dinero1+=800;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Calle Salgano"));
                }}
        }
        if(posicion2==20){
            WxStaticText1->SetLabel(_("Paseo de Kolinberg"));
            WxStaticText8->SetLabel(_("Coste: 1000 $     Alquiler: 100 $     Alquiler con hotel: 900 $"));
        if(WxEdit20->GetValue()== wxString(_("1"))){
                if(dinero2 < 100){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-100;
                    dinero1=dinero1+100;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Paseo de Kolinberg"));
                }}
        if(WxEdit20->GetValue()== wxString(_("3"))){
                if(dinero2 < 900){
                    WxStaticText1->SetLabel(_("No puedes pagar el alquiler, caes en la bancarrota"));
                    WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
                }else{
                    dinero2=dinero2-900;
                    dinero1+=900;
                    WxStaticText8->SetLabel(_("Has pagado el alquiler de Paseo de Kolinberg"));
                }}
        }

      WxStaticText3->SetLabel(_("4"));
      WxStaticText10->SetLabel(wxString()<<posicion2);
      WxStaticText5->SetLabel(wxString()<<dinero2);
      WxStaticText4->SetLabel(wxString()<<dinero1);
}
}

/*
 * WxButton3Click
 */
void MonopolyFrm::WxButton3Click(wxCommandEvent& event)
{
double posicion1;
double posicion2;
double dinero1;
double dinero2;
double casilla;
WxStaticText4->GetLabel().ToDouble(&dinero1);
WxStaticText5->GetLabel().ToDouble(&dinero2);
if(WxStaticText3->GetLabel()== wxString(_("2"))){
    WxStaticText7->GetLabel().ToDouble(&posicion1);
    if(posicion1==1 && WxEdit11->GetValue()==wxString(_("0"))){
        if(dinero1 < 150){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-150;
            WxEdit11->SetValue(_("1"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has comprado Calle de la Asuncion por 150"));
        }}
        if(posicion1==2 && WxEdit12->GetValue()==wxString(_("0"))){
        if(dinero1 < 200){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-200;
            WxEdit12->SetValue(_("1"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has comprado Rambla de San Antonio por 200"));
        }}
        if(posicion1==3 && WxEdit13->GetValue()==wxString(_("0"))){
        if(dinero1 < 250){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-250;
            WxEdit13->SetValue(_("1"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has comprado Paseo Llagra por 250"));
        }}
        if(posicion1==4 && WxEdit14->GetValue()==wxString(_("0"))){
        if(dinero1 < 300){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-300;
            WxEdit14->SetValue(_("1"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has comprado Avenida Molpeceres por 300"));
        }}
        if(posicion1==5 && WxEdit4->GetValue()==wxString(_("0"))){
        if(dinero1 < 350){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-350;
            WxEdit4->SetValue(_("1"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has comprado Calle Zorrilla por 350"));
        }}
        if(posicion1==6 && WxEdit5->GetValue()==wxString(_("0"))){
        if(dinero1 < 400){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-400;
            WxEdit5->SetValue(_("1"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has comprado Callejon de la Paz por 400"));
        }}
        if(posicion1==7){
        if(dinero1 < 200){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero y es un impuesto obligatorio"));
            WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
        }else{
            dinero1=dinero1-200;
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has pagado el Impuesto sobre la renta fijo de 200 $"));
        }}
        if(posicion1==8 && WxEdit6->GetValue()==wxString(_("0"))){
        if(dinero1 < 450){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-450;
            WxEdit6->SetValue(_("1"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has comprado Calle Hersinamiento por 450"));
        }}
        if(posicion1==9 && WxEdit7->GetValue()==wxString(_("0"))){
        if(dinero1 < 450){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-450;
            WxEdit7->SetValue(_("1"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has comprado Paseo de Longbridge por 450"));
        }}
        if(posicion1==10 && WxEdit8->GetValue()==wxString(_("0"))){
        if(dinero1 < 500){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-500;
            WxEdit8->SetValue(_("1"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has comprado Plaza Reunida por 500"));
        }}
        if(posicion1==11){
        if(dinero1 < 500){
            WxStaticText1->SetLabel(_("No puedes pagar la carcel"));
            WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
        }else{
            dinero1=dinero1-500;
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has pagado la fianza de la carcel que cuesta 500 $"));
        }}
        if(posicion1==12 && WxEdit9->GetValue()==wxString(_("0"))){
        if(dinero1 < 550){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-550;
            WxEdit9->SetValue(_("1"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has comprado Calle Oscura por 550"));
        }}
        if(posicion1==13 && WxEdit3->GetValue()==wxString(_("0"))){
        if(dinero1 < 540){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-540;
            WxEdit3->SetValue(_("1"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has comprado Rua Libertad por 540"));
        }}
        if(posicion1==14 && WxEdit10->GetValue()==wxString(_("0"))){
        if(dinero1 < 600){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-600;
            WxEdit10->SetValue(_("1"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has comprado Rue del Percebe por 600"));
        }}
        if(posicion1==15 && WxEdit15->GetValue()==wxString(_("0"))){
        if(dinero1 < 600){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-600;
            WxEdit15->SetValue(_("1"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has comprado Avenida de Quintanilla por 600"));
        }}
        if(posicion1==16 && WxEdit16->GetValue()==wxString(_("0"))){
        if(dinero1 < 700){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-700;
            WxEdit16->SetValue(_("1"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has comprado Muelle de Levante por 700"));
        }}
        if(posicion1==17 && WxEdit17->GetValue()==wxString(_("0"))){
        if(dinero1 < 750){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-750;
            WxEdit17->SetValue(_("1"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has comprado Carretera de Adrousa por 750"));
        }}
        if(posicion1==18 && WxEdit18->GetValue()==wxString(_("0"))){
        if(dinero1 < 800){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-800;
            WxEdit18->SetValue(_("1"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has comprado Autopista de Hertia por 800"));
        }}
        if(posicion1==19 && WxEdit19->GetValue()==wxString(_("0"))){
        if(dinero1 < 900){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-900;
            WxEdit19->SetValue(_("1"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has comprado Calle Salgano por 900"));
        }}
        if(posicion1==20 && WxEdit20->GetValue()==wxString(_("0"))){
        if(dinero1 < 1000){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-1000;
            WxEdit20->SetValue(_("1"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has comprado Paseo de Kolinberg por 1000"));
        }}
        }
//Parte correspondiente al jugador 2, cambiar todos los numeros de datos a los correspondientes
if(WxStaticText3->GetLabel()== wxString(_("4"))){
    WxStaticText10->GetLabel().ToDouble(&posicion2);
        if(posicion2==1 && WxEdit11->GetValue()==wxString(_("0"))){
        if(dinero2 < 150){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-150;
            WxEdit11->SetValue(_("2"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has comprado Calle de la Asuncion por 150"));
        }}
        if(posicion2==2 && WxEdit12->GetValue()==wxString(_("0"))){
        if(dinero2 < 200){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-200;
            WxEdit12->SetValue(_("2"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has comprado Rambla de San Antonio por 200"));
        }}
        if(posicion2==3 && WxEdit13->GetValue()==wxString(_("0"))){
        if(dinero2 < 250){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-250;
            WxEdit13->SetValue(_("2"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has comprado Paseo Llagra por 250"));
        }}
        if(posicion2==4 && WxEdit14->GetValue()==wxString(_("0"))){
        if(dinero2 < 300){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-300;
            WxEdit14->SetValue(_("2"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has comprado Avenida Molpeceres por 300"));
        }}
        if(posicion2==5 && WxEdit4->GetValue()==wxString(_("0"))){
        if(dinero2 < 350){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-350;
            WxEdit4->SetValue(_("2"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has comprado Calle Zorrilla por 350"));
        }}
        if(posicion2==6 && WxEdit5->GetValue()==wxString(_("0"))){
        if(dinero2 < 400){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-400;
            WxEdit5->SetValue(_("2"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has comprado Callejon de la Paz por 400"));
        }}
        if(posicion2==7){
        if(dinero2 < 200){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero y es un impuesto obligatorio"));
            WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
        }else{
            dinero2=dinero2-200;
            WxStaticText4->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has pagado el Impuesto sobre la renta fijo de 200 $"));
        }}
        if(posicion2==8 && WxEdit6->GetValue()==wxString(_("0"))){
        if(dinero2 < 450){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-450;
            WxEdit6->SetValue(_("2"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has comprado Calle Hersinamiento por 450"));
        }}
        if(posicion2==9 && WxEdit7->GetValue()==wxString(_("0"))){
        if(dinero2 < 450){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-450;
            WxEdit7->SetValue(_("2"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has comprado Paseo de Longbridge por 450"));
        }}
        if(posicion2==10 && WxEdit8->GetValue()==wxString(_("0"))){
        if(dinero2 < 500){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-500;
            WxEdit8->SetValue(_("2"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has comprado Plaza Reunida por 500"));
        }}
        if(posicion2==11){
        if(dinero2 < 500){
            WxStaticText1->SetLabel(_("No puedes pagar la fianza"));
            WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
        }else{
            dinero2=dinero2-500;
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has pagado la fianza de la carcel que cuesta 500 $"));
        }}
        if(posicion2==12 && WxEdit9->GetValue()==wxString(_("0"))){
        if(dinero2 < 550){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-550;
            WxEdit9->SetValue(_("2"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has comprado Calle Oscura por 550"));
        }}
        if(posicion2==13 && WxEdit3->GetValue()==wxString(_("0"))){
        if(dinero2 < 540){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-540;
            WxEdit3->SetValue(_("2"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has comprado Rua Libertad por 540"));
        }}
        if(posicion2==14 && WxEdit10->GetValue()==wxString(_("0"))){
        if(dinero2 < 600){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-600;
            WxEdit10->SetValue(_("2"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has comprado Rue del Percebe por 600"));
        }}
        if(posicion2==15 && WxEdit15->GetValue()==wxString(_("0"))){
        if(dinero2 < 600){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-600;
            WxEdit15->SetValue(_("2"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has comprado Avenida de Quintanilla por 600"));
        }}
        if(posicion2==16 && WxEdit16->GetValue()==wxString(_("0"))){
        if(dinero2 < 700){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-700;
            WxEdit16->SetValue(_("2"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has comprado Muelle de Levante por 700"));
        }}
        if(posicion2==17 && WxEdit17->GetValue()==wxString(_("0"))){
        if(dinero2 < 750){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-750;
            WxEdit17->SetValue(_("2"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has comprado Carretera de Adrousa por 750"));
        }}
        if(posicion2==18 && WxEdit18->GetValue()==wxString(_("0"))){
        if(dinero2 < 800){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-800;
            WxEdit18->SetValue(_("2"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has comprado Autopista de Hertia por 800"));
        }}
        if(posicion2==19 && WxEdit19->GetValue()==wxString(_("0"))){
        if(dinero2 < 900){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-900;
            WxEdit19->SetValue(_("2"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has comprado Calle Salgano por 900"));
        }}
        if(posicion2==20 && WxEdit20->GetValue()==wxString(_("0"))){
        if(dinero2 < 1000){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-1000;
            WxEdit20->SetValue(_("2"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has comprado Paseo de Kolinberg por 1000"));
        }}

    //Cambiar WxStatics empezando por 19 y el precio y los textos

    //Codigo de propiedades 0-Libre 1-Comparad por 1 2-Comprada por 2 3-Hotel de 1 4-Hotel de 2        
}
}
/*
 * WxButton6Click1
 */
void MonopolyFrm::WxButton6Click1(wxCommandEvent& event)
{
if(WxStaticText3->GetLabel()!= wxString(_("1"))) { //Errores que pueden ocurrir
        WxStaticText1->SetLabel(_("No puedes tirar los dados, antes debes empezar el juego"));
        }	// insert your code here
}

/*
 * WxButton5Click
 */
void MonopolyFrm::WxButton5Click(wxCommandEvent& event)
{
	if(WxStaticText3->GetLabel()!= wxString(_("1"))) { //Errores que pueden ocurrir
        WxStaticText1->SetLabel(_("No puedes tirar los dados, antes debes empezar el juego"));
        }// insert your code here
}

/*
 * WxButton7Click
 */
void MonopolyFrm::WxButton7Click(wxCommandEvent& event)
{
    double jugador;
    WxStaticText3->GetLabel().ToDouble(&jugador);
if(jugador ==2){
    WxStaticText3->SetLabel(_("3"));
}
if(jugador == 4){
    WxStaticText3->SetLabel(_("1"));
}
}

/*
 * MonopolyFrmActivate
 */
void MonopolyFrm::MonopolyFrmActivate(wxActivateEvent& event)
{
	wxMessageDialog *xMsg = new wxMessageDialog(this,_("Bienvenido a Monopoly de Divel, pulsa JUGAR para comenzar"), _("Bienvenido"), wxOK);
                xMsg->ShowModal();
                free(xMsg);// insert your code here
}

/*
 * WxButton8Click
 */
void MonopolyFrm::WxButton8Click(wxCommandEvent& event)
{
#ifdef WIN32
  if(WinExec(".\\Ayuda.exe",SW_NORMAL)==true){
        WinExec(".\\Ayuda.exe",SW_NORMAL);
        }else{
            WxStaticText1->SetLabel(_("No se encuentra el archivo de ayuda"));
            }// insert your code here
#endif
}

/*
 * WxButton10Click
 */
void MonopolyFrm::WxButton10Click(wxCommandEvent& event)
{
    double dinero1;
    double dinero2;
    WxMemo1->GetValue().ToDouble(&dinero1);
    WxMemo2->GetValue().ToDouble(&dinero2);
	WxStaticText4->SetLabel(wxString()<<dinero1);
    WxStaticText5->SetLabel(wxString()<<dinero2);// insert your code here
    wxMessageDialog *zMsg = new wxMessageDialog(this,_("Se han hecho los intercambios de propiedades y dinero de los jugadores. Si algo no coincide con el trato acordado con los jugadores o no sabes como utilizar el Modo Banca, lee el manual PDF de ayuda."), _("Monopoly--Modo Banca"), wxOK);
                zMsg->ShowModal();
                free(zMsg);
}

/*
 * WxButton11Click
 */
void MonopolyFrm::WxButton11Click(wxCommandEvent& event)
{

}   

/*
 * WxButton12Click
 */
void MonopolyFrm::WxButton12Click(wxCommandEvent& event)
{
//		wxFileDialog *SaveDialog = new wxFileDialog(
//		this, _("Guardar partida Monopoly"), wxEmptyString, wxEmptyString,
//		_("Partida Monopoly Divel 1.8.1|*.mpl8|Partida Monopoly Universal|*.mpl"),wxFD_SAVE | wxFD_OVERWRITE_PROMPT, wxDefaultPosition);// insert your code here
//		if(SaveDialog->ShowModal()==wxID_OK){
//            WxMemo1->SaveFile(SaveDialog->GetPath());
//        }
    FILE* guardar;
    double asuncion;
    guardar=fopen("Partida.mpl","w");
    rewind(guardar);
    WxEdit11->GetValue().ToDouble(&asuncion);
    fputc(asuncion,guardar);
    fclose(guardar);
    
}

/*
 * WxButton11Click0
 */
void MonopolyFrm::WxButton11Click0(wxCommandEvent& event)
{
	FILE* archivo;
    double asuncion;
    double dos;
    double tres;
    double cuatro;
    double cinco;
    double seis;
    double ocho;
    double nueve;
    double diez;
    double doce;
    double trece;
    double catorce;
    double quince;
    double dieciseis;
    double diecisiete;
    double dieciocho;
    double diecinueve;
    double veinte;
//    wxString archivoactual;
//	wxFileDialog *cargar = new wxFileDialog(this, wxT("Selecciona la partida"), wxT(""), wxT(""),
//                                                wxT("Partidas de Monopoly Divel 1.8.1|*.mpl8|Partida Monopoly Universal|*.mpl"), wxOPEN);
//    cargar->ShowModal();
//    WxMemo1->LoadFile(cargar->GetPath());
//    archivoactual=cargar->GetPath();
//   const char* ascii_str = (const char*)archivoactual.mb_str(wxConvUTF8);
	archivo=fopen("Partida1.mpl","r");
	rewind(archivo);
	
	asuncion=fgetc(archivo);
	dos=fgetc(archivo);
	tres=fgetc(archivo);
	cuatro=fgetc(archivo);
	cinco=fgetc(archivo);
	seis=fgetc(archivo);
	ocho=fgetc(archivo);
	nueve=fgetc(archivo);
	diez=fgetc(archivo);
	doce=fgetc(archivo);
	trece=fgetc(archivo);
	catorce=fgetc(archivo);
	quince=fgetc(archivo);
	dieciseis=fgetc(archivo);
	diecisiete=fgetc(archivo);
	dieciocho=fgetc(archivo);
	diecinueve=fgetc(archivo);
	veinte=fgetc(archivo);
	
	WxEdit11->SetValue(wxString()<<asuncion);
	WxEdit12->SetValue(wxString()<<dos);
	WxEdit13->SetValue(wxString()<<tres);
	WxEdit14->SetValue(wxString()<<cuatro);
	WxEdit4->SetValue(wxString()<<cinco);
	WxEdit5->SetValue(wxString()<<seis);
	WxEdit6->SetValue(wxString()<<ocho);
	WxEdit7->SetValue(wxString()<<nueve);
	WxEdit8->SetValue(wxString()<<diez);
	WxEdit9->SetValue(wxString()<<doce);
	WxEdit3->SetValue(wxString()<<trece);
	WxEdit10->SetValue(wxString()<<catorce);
	WxEdit15->SetValue(wxString()<<quince);
	WxEdit16->SetValue(wxString()<<dieciseis);
	WxEdit17->SetValue(wxString()<<diecisiete);
	WxEdit18->SetValue(wxString()<<dieciocho);
	WxEdit19->SetValue(wxString()<<diecinueve);
	WxEdit20->SetValue(wxString()<<veinte);
	
	WxMemo1->LoadFile(wxT("Din11"));
	WxMemo2->LoadFile(wxT("Din21"));
	
	fclose(archivo);// insert your code here
}

/*
 * WxButton12Click0
 */
void MonopolyFrm::WxButton12Click0(wxCommandEvent& event)
{
    //		wxFileDialog *SaveDialog = new wxFileDialog(
//		this, _("Guardar partida Monopoly"), wxEmptyString, wxEmptyString,
//		_("Partida Monopoly Divel 1.8.1|*.mpl8|Partida Monopoly Universal|*.mpl"),wxFD_SAVE | wxFD_OVERWRITE_PROMPT, wxDefaultPosition);// insert your code here
//		if(SaveDialog->ShowModal()==wxID_OK){
//            WxMemo1->SaveFile(SaveDialog->GetPath());
//        }
    FILE* guardar;
    double asuncion;
    double dos;
    double tres;
    double cuatro;
    double cinco;
    double seis;
    double ocho;
    double nueve;
    double diez;
    double doce;
    double trece;
    double catorce;
    double quince;
    double dieciseis;
    double diecisiete;
    double dieciocho;
    double diecinueve;
    double veinte;
    
    wxMessageBox(wxT("Asegurese de poner el dinero en el cajon de intercambio.\nVea PDF de Ayuda para mas informacion."));
    
    guardar=fopen("Partida1.mpl","w");
    rewind(guardar);
    
    WxEdit11->GetValue().ToDouble(&asuncion);
    WxEdit12->GetValue().ToDouble(&dos);
    WxEdit13->GetValue().ToDouble(&tres);
    WxEdit14->GetValue().ToDouble(&cuatro);
    WxEdit4->GetValue().ToDouble(&cinco);
    WxEdit5->GetValue().ToDouble(&seis);
    WxEdit6->GetValue().ToDouble(&ocho);
    WxEdit7->GetValue().ToDouble(&nueve);
    WxEdit8->GetValue().ToDouble(&diez);
    WxEdit9->GetValue().ToDouble(&doce);
    WxEdit3->GetValue().ToDouble(&trece);
    WxEdit10->GetValue().ToDouble(&catorce);
    WxEdit15->GetValue().ToDouble(&quince);
    WxEdit16->GetValue().ToDouble(&dieciseis);
    WxEdit17->GetValue().ToDouble(&diecisiete);
    WxEdit18->GetValue().ToDouble(&dieciocho);
    WxEdit19->GetValue().ToDouble(&diecinueve);
    WxEdit20->GetValue().ToDouble(&veinte);
    
    fputc(asuncion,guardar);
    fputc(dos,guardar);
    fputc(tres,guardar);
    fputc(cuatro,guardar);
    fputc(cinco,guardar);
    fputc(seis,guardar);
    fputc(ocho,guardar);
    fputc(nueve,guardar);
    fputc(diez,guardar);
    fputc(doce,guardar);
    fputc(trece,guardar);
    fputc(catorce,guardar);
    fputc(quince,guardar);
    fputc(dieciseis,guardar);
    fputc(diecisiete,guardar);
    fputc(dieciocho,guardar);
    fputc(diecinueve,guardar);
    fputc(veinte,guardar);
    
    WxMemo1->SaveFile(wxT("Din11"));
    WxMemo2->SaveFile(wxT("Din21"));
    
    
    fclose(guardar);	// insert your code here
}

/*
 * WxButton13Click
 */
void MonopolyFrm::WxButton13Click(wxCommandEvent& event)
{
	    FILE* guardar;
    double asuncion;
    double dos;
    double tres;
    double cuatro;
    double cinco;
    double seis;
    double ocho;
    double nueve;
    double diez;
    double doce;
    double trece;
    double catorce;
    double quince;
    double dieciseis;
    double diecisiete;
    double dieciocho;
    double diecinueve;
    double veinte;
    
    wxMessageBox(wxT("Asegurese de poner el dinero en el cajon de intercambio.\nVea PDF de Ayuda para mas informacion."));

    guardar=fopen("Partida2.mpl","w");
    rewind(guardar);

    WxEdit11->GetValue().ToDouble(&asuncion);
    WxEdit12->GetValue().ToDouble(&dos);
    WxEdit13->GetValue().ToDouble(&tres);
    WxEdit14->GetValue().ToDouble(&cuatro);
    WxEdit4->GetValue().ToDouble(&cinco);
    WxEdit5->GetValue().ToDouble(&seis);
    WxEdit6->GetValue().ToDouble(&ocho);
    WxEdit7->GetValue().ToDouble(&nueve);
    WxEdit8->GetValue().ToDouble(&diez);
    WxEdit9->GetValue().ToDouble(&doce);
    WxEdit3->GetValue().ToDouble(&trece);
    WxEdit10->GetValue().ToDouble(&catorce);
    WxEdit15->GetValue().ToDouble(&quince);
    WxEdit16->GetValue().ToDouble(&dieciseis);
    WxEdit17->GetValue().ToDouble(&diecisiete);
    WxEdit18->GetValue().ToDouble(&dieciocho);
    WxEdit19->GetValue().ToDouble(&diecinueve);
    WxEdit20->GetValue().ToDouble(&veinte);

    fputc(asuncion,guardar);
    fputc(dos,guardar);
    fputc(tres,guardar);
    fputc(cuatro,guardar);
    fputc(cinco,guardar);
    fputc(seis,guardar);
    fputc(ocho,guardar);
    fputc(nueve,guardar);
    fputc(diez,guardar);
    fputc(doce,guardar);
    fputc(trece,guardar);
    fputc(catorce,guardar);
    fputc(quince,guardar);
    fputc(dieciseis,guardar);
    fputc(diecisiete,guardar);
    fputc(dieciocho,guardar);
    fputc(diecinueve,guardar);
    fputc(veinte,guardar);
    
    WxMemo1->SaveFile(wxT("Din12"));
	WxMemo2->SaveFile(wxT("Din22"));


    fclose(guardar);// insert your code here
}

/*
 * WxButton14Click
 */
void MonopolyFrm::WxButton14Click(wxCommandEvent& event)
{
	    FILE* guardar;
    double asuncion;
    double dos;
    double tres;
    double cuatro;
    double cinco;
    double seis;
    double ocho;
    double nueve;
    double diez;
    double doce;
    double trece;
    double catorce;
    double quince;
    double dieciseis;
    double diecisiete;
    double dieciocho;
    double diecinueve;
    double veinte;
    
    
    
    wxMessageBox(wxT("Asegurese de poner el dinero en el cajon de intercambio.\nVea PDF de Ayuda para mas informacion."));

    guardar=fopen("Partida3.mpl","w");
    rewind(guardar);

    WxEdit11->GetValue().ToDouble(&asuncion);
    WxEdit12->GetValue().ToDouble(&dos);
    WxEdit13->GetValue().ToDouble(&tres);
    WxEdit14->GetValue().ToDouble(&cuatro);
    WxEdit4->GetValue().ToDouble(&cinco);
    WxEdit5->GetValue().ToDouble(&seis);
    WxEdit6->GetValue().ToDouble(&ocho);
    WxEdit7->GetValue().ToDouble(&nueve);
    WxEdit8->GetValue().ToDouble(&diez);
    WxEdit9->GetValue().ToDouble(&doce);
    WxEdit3->GetValue().ToDouble(&trece);
    WxEdit10->GetValue().ToDouble(&catorce);
    WxEdit15->GetValue().ToDouble(&quince);
    WxEdit16->GetValue().ToDouble(&dieciseis);
    WxEdit17->GetValue().ToDouble(&diecisiete);
    WxEdit18->GetValue().ToDouble(&dieciocho);
    WxEdit19->GetValue().ToDouble(&diecinueve);
    WxEdit20->GetValue().ToDouble(&veinte);


    fputc(asuncion,guardar);
    fputc(dos,guardar);
    fputc(tres,guardar);
    fputc(cuatro,guardar);
    fputc(cinco,guardar);
    fputc(seis,guardar);
    fputc(ocho,guardar);
    fputc(nueve,guardar);
    fputc(diez,guardar);
    fputc(doce,guardar);
    fputc(trece,guardar);
    fputc(catorce,guardar);
    fputc(quince,guardar);
    fputc(dieciseis,guardar);
    fputc(diecisiete,guardar);
    fputc(dieciocho,guardar);
    fputc(diecinueve,guardar);
    fputc(veinte,guardar);
    //Dinero aqui y en el resto de cargar y guardar
//    din1=fopen("Din13","w");
//    rewind(din1);
//    wxString somestring(WxStaticText4->GetLabel());

//    wxFile din1(wxT("Din13"), wxFile::write);
//    din1.Write(somestring);

    // eventually add linefeed after each line

//    din1.Close();
//    wxString dinero2(WxStaticText5->GetLabel());
    
//    wxFile din2(wxT("Din23"), wxFile::write);
    WxMemo1->SaveFile(wxT("Din13"));
    WxMemo2->SaveFile(wxT("Din23"));
//    din2.Close();
//    fputs(dinero1,din1);
//    fclose(din1);


    fclose(guardar);// insert your code here
}

/*
 * WxButton15Click
 */
void MonopolyFrm::WxButton15Click(wxCommandEvent& event)
{
		FILE* archivo;
    double asuncion;
    double dos;
    double tres;
    double cuatro;
    double cinco;
    double seis;
    double ocho;
    double nueve;
    double diez;
    double doce;
    double trece;
    double catorce;
    double quince;
    double dieciseis;
    double diecisiete;
    double dieciocho;
    double diecinueve;
    double veinte;
//    wxString archivoactual;
//	wxFileDialog *cargar = new wxFileDialog(this, wxT("Selecciona la partida"), wxT(""), wxT(""),
//                                                wxT("Partidas de Monopoly Divel 1.8.1|*.mpl8|Partida Monopoly Universal|*.mpl"), wxOPEN);
//    cargar->ShowModal();
//    WxMemo1->LoadFile(cargar->GetPath());
//    archivoactual=cargar->GetPath();
//   const char* ascii_str = (const char*)archivoactual.mb_str(wxConvUTF8);
	archivo=fopen("Partida2.mpl","r");
	rewind(archivo);

	asuncion=fgetc(archivo);
	dos=fgetc(archivo);
	tres=fgetc(archivo);
	cuatro=fgetc(archivo);
	cinco=fgetc(archivo);
	seis=fgetc(archivo);
	ocho=fgetc(archivo);
	nueve=fgetc(archivo);
	diez=fgetc(archivo);
	doce=fgetc(archivo);
	trece=fgetc(archivo);
	catorce=fgetc(archivo);
	quince=fgetc(archivo);
	dieciseis=fgetc(archivo);
	diecisiete=fgetc(archivo);
	dieciocho=fgetc(archivo);
	diecinueve=fgetc(archivo);
	veinte=fgetc(archivo);

	WxEdit11->SetValue(wxString()<<asuncion);
	WxEdit12->SetValue(wxString()<<dos);
	WxEdit13->SetValue(wxString()<<tres);
	WxEdit14->SetValue(wxString()<<cuatro);
	WxEdit4->SetValue(wxString()<<cinco);
	WxEdit5->SetValue(wxString()<<seis);
	WxEdit6->SetValue(wxString()<<ocho);
	WxEdit7->SetValue(wxString()<<nueve);
	WxEdit8->SetValue(wxString()<<diez);
	WxEdit9->SetValue(wxString()<<doce);
	WxEdit3->SetValue(wxString()<<trece);
	WxEdit10->SetValue(wxString()<<catorce);
	WxEdit15->SetValue(wxString()<<quince);
	WxEdit16->SetValue(wxString()<<dieciseis);
	WxEdit17->SetValue(wxString()<<diecisiete);
	WxEdit18->SetValue(wxString()<<dieciocho);
	WxEdit19->SetValue(wxString()<<diecinueve);
	WxEdit20->SetValue(wxString()<<veinte);
		WxMemo1->LoadFile(wxT("Din12"));
	WxMemo2->LoadFile(wxT("Din22"));

	fclose(archivo);// insert your code here
}

/*
 * WxButton16Click
 */
void MonopolyFrm::WxButton16Click(wxCommandEvent& event)
{
		FILE* archivo;
    double asuncion;
    double dos;
    double tres;
    double cuatro;
    double cinco;
    double seis;
    double ocho;
    double nueve;
    double diez;
    double doce;
    double trece;
    double catorce;
    double quince;
    double dieciseis;
    double diecisiete;
    double dieciocho;
    double diecinueve;
    double veinte;
    
    double dinero1;
    double dinero2;
//    wxString archivoactual;
//	wxFileDialog *cargar = new wxFileDialog(this, wxT("Selecciona la partida"), wxT(""), wxT(""),
//                                                wxT("Partidas de Monopoly Divel 1.8.1|*.mpl8|Partida Monopoly Universal|*.mpl"), wxOPEN);
//    cargar->ShowModal();
//    WxMemo1->LoadFile(cargar->GetPath());
//    archivoactual=cargar->GetPath();
//   const char* ascii_str = (const char*)archivoactual.mb_str(wxConvUTF8);
	archivo=fopen("Partida3.mpl","r");
	rewind(archivo);

	asuncion=fgetc(archivo);
	dos=fgetc(archivo);
	tres=fgetc(archivo);
	cuatro=fgetc(archivo);
	cinco=fgetc(archivo);
	seis=fgetc(archivo);
	ocho=fgetc(archivo);
	nueve=fgetc(archivo);
	diez=fgetc(archivo);
	doce=fgetc(archivo);
	trece=fgetc(archivo);
	catorce=fgetc(archivo);
	quince=fgetc(archivo);
	dieciseis=fgetc(archivo);
	diecisiete=fgetc(archivo);
	dieciocho=fgetc(archivo);
	diecinueve=fgetc(archivo);
	veinte=fgetc(archivo);
	
	WxEdit11->SetValue(wxString()<<asuncion);
	WxEdit12->SetValue(wxString()<<dos);
	WxEdit13->SetValue(wxString()<<tres);
	WxEdit14->SetValue(wxString()<<cuatro);
	WxEdit4->SetValue(wxString()<<cinco);
	WxEdit5->SetValue(wxString()<<seis);
	WxEdit6->SetValue(wxString()<<ocho);
	WxEdit7->SetValue(wxString()<<nueve);
	WxEdit8->SetValue(wxString()<<diez);
	WxEdit9->SetValue(wxString()<<doce);
	WxEdit3->SetValue(wxString()<<trece);
	WxEdit10->SetValue(wxString()<<catorce);
	WxEdit15->SetValue(wxString()<<quince);
	WxEdit16->SetValue(wxString()<<dieciseis);
	WxEdit17->SetValue(wxString()<<diecisiete);
	WxEdit18->SetValue(wxString()<<dieciocho);
	WxEdit19->SetValue(wxString()<<diecinueve);
	WxEdit20->SetValue(wxString()<<veinte);
	

	fclose(archivo);
	
	WxMemo1->LoadFile(wxT("Din13"));
	WxMemo2->LoadFile(wxT("Din23"));
	
//    FILE* din13;
//    FILE* din23;
//    char* d13;
//    char* d23;
//    din13=fopen("Din13","r");
//    din23=fopen("Din23","r");
//    fgets(d13,2000,din13);
//    fgets(d23,2000,din23);
  //  wxString mystring(d13, wxConvUTF8);
  //  wxString mystring2(d23, wxConvUTF8);
  //  WxStaticText4->SetLabel(_("%s")+ d13);
  //  WxStaticText5->SetLabel(_("%s")+ d23);
//  WxEdit1->SetValue(fgets(d13,2000,din13));
//  WxEdit2->SetValue(fgets(d13,2000,din13));
  
//    fclose(din13);
//    fclose(din23);
	
  //  wxFile din1(wxT("Din13"), wxFile::read);
  //  str1=fgets(din1);
  //  WxStaticText4->SetLabel(wxString()<<str1);
  //  din1.Close();
    

  //  wxFile din2(wxT("Din23"), wxFile::read);
  //  wxString str2 = din2.GetFirstLine();
  //  WxStaticText4->SetLabel(str2);
  //  din2.Close();// insert your code here
  
  
}

/*
 * WxButton5Click0
 */
void MonopolyFrm::WxButton5Click0(wxCommandEvent& event)
{
double posicion1;
double posicion2;
double dinero1;
double dinero2;
double casilla;
WxStaticText4->GetLabel().ToDouble(&dinero1);
WxStaticText5->GetLabel().ToDouble(&dinero2);
if(WxStaticText3->GetLabel()== wxString(_("2"))){
    WxStaticText7->GetLabel().ToDouble(&posicion1);
    if(posicion1==1 && WxEdit11->GetValue()==wxString(_("1"))){
        if(dinero1 < 150){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-150;
            WxEdit11->SetValue(_("3"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has construido Calle de la Asuncion por 150"));
        }}
        if(posicion1==2 && WxEdit12->GetValue()==wxString(_("1"))){
        if(dinero1 < 200){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-200;
            WxEdit12->SetValue(_("3"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has construido Rambla de San Antonio por 200"));
        }}
        if(posicion1==3 && WxEdit13->GetValue()==wxString(_("1"))){
        if(dinero1 < 250){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-250;
            WxEdit13->SetValue(_("3"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has construido Paseo Llagra por 250"));
        }}
        if(posicion1==4 && WxEdit14->GetValue()==wxString(_("1"))){
        if(dinero1 < 300){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-300;
            WxEdit14->SetValue(_("3"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has construido Avenida Molpeceres por 300"));
        }}
        if(posicion1==5 && WxEdit4->GetValue()==wxString(_("1"))){
        if(dinero1 < 350){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-350;
            WxEdit4->SetValue(_("3"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has construido Calle Zorrilla por 350"));
        }}
        if(posicion1==6 && WxEdit5->GetValue()==wxString(_("1"))){
        if(dinero1 < 400){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-400;
            WxEdit5->SetValue(_("3"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has construido Callejon de la Paz por 400"));
        }}
        if(posicion1==7){
        if(dinero1 < 200){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero y es un impuesto obligatorio"));
            WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
        }else{
            dinero1=dinero1-200;
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has pagado el Impuesto sobre la renta fijo de 200 $"));
        }}
        if(posicion1==8 && WxEdit6->GetValue()==wxString(_("1"))){
        if(dinero1 < 450){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-450;
            WxEdit6->SetValue(_("3"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has construido Calle Hersinamiento por 450"));
        }}
        if(posicion1==9 && WxEdit7->GetValue()==wxString(_("1"))){
        if(dinero1 < 450){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-450;
            WxEdit7->SetValue(_("3"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has construido Paseo de Longbridge por 450"));
        }}
        if(posicion1==10 && WxEdit8->GetValue()==wxString(_("1"))){
        if(dinero1 < 500){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-500;
            WxEdit8->SetValue(_("3"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has construido Plaza Reunida por 500"));
        }}
        if(posicion1==11){
        if(dinero1 < 500){
            WxStaticText1->SetLabel(_("No puedes pagar la carcel"));
            WxStaticText8->SetLabel(_("Ha ganado el jugador 2"));
        }else{
            dinero1=dinero1-500;
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has pagado la fianza de la carcel que cuesta 500 $"));
        }}
        if(posicion1==12 && WxEdit9->GetValue()==wxString(_("1"))){
        if(dinero1 < 550){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-550;
            WxEdit9->SetValue(_("3"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has construido Calle Oscura por 550"));
        }}
        if(posicion1==13 && WxEdit3->GetValue()==wxString(_("1"))){
        if(dinero1 < 540){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-540;
            WxEdit3->SetValue(_("3"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has construido Rua Libertad por 540"));
        }}
        if(posicion1==14 && WxEdit10->GetValue()==wxString(_("1"))){
        if(dinero1 < 600){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-600;
            WxEdit10->SetValue(_("3"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has construido Rue del Percebe por 600"));
        }}
        if(posicion1==15 && WxEdit15->GetValue()==wxString(_("1"))){
        if(dinero1 < 600){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-600;
            WxEdit15->SetValue(_("3"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has construido Avenida de Quintanilla por 600"));
        }}
        if(posicion1==16 && WxEdit16->GetValue()==wxString(_("1"))){
        if(dinero1 < 700){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-700;
            WxEdit16->SetValue(_("3"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has construido Muelle de Levante por 700"));
        }}
        if(posicion1==17 && WxEdit17->GetValue()==wxString(_("1"))){
        if(dinero1 < 750){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-750;
            WxEdit17->SetValue(_("3"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has construido Carretera de Adrousa por 750"));
        }}
        if(posicion1==18 && WxEdit18->GetValue()==wxString(_("1"))){
        if(dinero1 < 800){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-800;
            WxEdit18->SetValue(_("3"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has construido Autopista de Hertia por 800"));
        }}
        if(posicion1==19 && WxEdit19->GetValue()==wxString(_("1"))){
        if(dinero1 < 900){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-900;
            WxEdit19->SetValue(_("3"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has construido Calle Salgano por 900"));
        }}
        if(posicion1==20 && WxEdit20->GetValue()==wxString(_("1"))){
        if(dinero1 < 1000){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero1=dinero1-1000;
            WxEdit20->SetValue(_("3"));
            WxStaticText4->SetLabel(wxString()<<dinero1);
            WxStaticText1->SetLabel(_("Has construido Paseo de Kolinberg por 1000"));
        }}
        }
//Parte correspondiente al jugador 2, cambiar todos los numeros de datos a los correspondientes
if(WxStaticText3->GetLabel()== wxString(_("4"))){
    WxStaticText10->GetLabel().ToDouble(&posicion2);
        if(posicion2==1 && WxEdit11->GetValue()==wxString(_("2"))){
        if(dinero2 < 150){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-150;
            WxEdit11->SetValue(_("4"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has construido Calle de la Asuncion por 150"));
        }}
        if(posicion2==2 && WxEdit12->GetValue()==wxString(_("2"))){
        if(dinero2 < 200){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-200;
            WxEdit12->SetValue(_("4"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has construido Rambla de San Antonio por 200"));
        }}
        if(posicion2==3 && WxEdit13->GetValue()==wxString(_("2"))){
        if(dinero2 < 250){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-250;
            WxEdit13->SetValue(_("4"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has construido Paseo Llagra por 250"));
        }}
        if(posicion2==4 && WxEdit14->GetValue()==wxString(_("2"))){
        if(dinero2 < 300){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-300;
            WxEdit14->SetValue(_("4"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has construido Avenida Molpeceres por 300"));
        }}
        if(posicion2==5 && WxEdit4->GetValue()==wxString(_("2"))){
        if(dinero2 < 350){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-350;
            WxEdit4->SetValue(_("4"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has construido Calle Zorrilla por 350"));
        }}
        if(posicion2==6 && WxEdit5->GetValue()==wxString(_("2"))){
        if(dinero2 < 400){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-400;
            WxEdit5->SetValue(_("4"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has construido Callejon de la Paz por 400"));
        }}
        if(posicion2==7){
        if(dinero2 < 200){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero y es un impuesto obligatorio"));
            WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
        }else{
            dinero2=dinero2-200;
            WxStaticText4->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has pagado el Impuesto sobre la renta fijo de 200 $"));
        }}
        if(posicion2==8 && WxEdit6->GetValue()==wxString(_("2"))){
        if(dinero2 < 450){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-450;
            WxEdit6->SetValue(_("4"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has construido Calle Hersinamiento por 450"));
        }}
        if(posicion2==9 && WxEdit7->GetValue()==wxString(_("2"))){
        if(dinero2 < 450){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-450;
            WxEdit7->SetValue(_("4"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has construido Paseo de Longbridge por 450"));
        }}
        if(posicion2==10 && WxEdit8->GetValue()==wxString(_("2"))){
        if(dinero2 < 500){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-500;
            WxEdit8->SetValue(_("4"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has construido Plaza Reunida por 500"));
        }}
        if(posicion2==11){
        if(dinero2 < 500){
            WxStaticText1->SetLabel(_("No puedes pagar la fianza"));
            WxStaticText8->SetLabel(_("Ha ganado el jugador 1"));
        }else{
            dinero2=dinero2-500;
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has pagado la fianza de la carcel que cuesta 500 $"));
        }}
        if(posicion2==12 && WxEdit9->GetValue()==wxString(_("2"))){
        if(dinero2 < 550){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-550;
            WxEdit9->SetValue(_("4"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has construido Calle Oscura por 550"));
        }}
        if(posicion2==13 && WxEdit3->GetValue()==wxString(_("2"))){
        if(dinero2 < 540){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-540;
            WxEdit3->SetValue(_("4"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has construido Rua Libertad por 540"));
        }}
        if(posicion2==14 && WxEdit10->GetValue()==wxString(_("2"))){
        if(dinero2 < 600){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-600;
            WxEdit10->SetValue(_("4"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has construido Rue del Percebe por 600"));
        }}
        if(posicion2==15 && WxEdit15->GetValue()==wxString(_("2"))){
        if(dinero2 < 600){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-600;
            WxEdit15->SetValue(_("4"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has construido Avenida de Quintanilla por 600"));
        }}
        if(posicion2==16 && WxEdit16->GetValue()==wxString(_("2"))){
        if(dinero2 < 700){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-700;
            WxEdit16->SetValue(_("4"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has construido Muelle de Levante por 700"));
        }}
        if(posicion2==17 && WxEdit17->GetValue()==wxString(_("2"))){
        if(dinero2 < 750){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-750;
            WxEdit17->SetValue(_("4"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has construido Carretera de Adrousa por 750"));
        }}
        if(posicion2==18 && WxEdit18->GetValue()==wxString(_("2"))){
        if(dinero2 < 800){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-800;
            WxEdit18->SetValue(_("4"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has construido Autopista de Hertia por 800"));
        }}
        if(posicion2==19 && WxEdit19->GetValue()==wxString(_("2"))){
        if(dinero2 < 900){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-900;
            WxEdit19->SetValue(_("4"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has construido Calle Salgano por 900"));
        }}
        if(posicion2==20 && WxEdit20->GetValue()==wxString(_("2"))){
        if(dinero2 < 1000){
            WxStaticText1->SetLabel(_("No tienes suficiente dinero pasa"));
        }else{
            dinero2=dinero2-1000;
            WxEdit20->SetValue(_("4"));
            WxStaticText5->SetLabel(wxString()<<dinero2);
            WxStaticText1->SetLabel(_("Has construido Paseo de Kolinberg por 1000"));
        }}

    //Cambiar WxStatics empezando por 19 y el precio y los textos

    //Codigo de propiedades 0-Libre 1-Comparad por 1 2-Comprada por 2 3-Hotel de 1 4-Hotel de 2
}// insert your code here
}
