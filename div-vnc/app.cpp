/*
DivVNC is a simply client for VNC protocol
(C) Adrian Arroyo Calle 2013
*/
#include "wx/wx.h"
#include "rfb/rfbclient.h"

class DivVNC : public wxApp
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
class VNCFrame : public wxFrame
{
public:
    // ctor(s)
    VNCFrame(const wxString& title);
	void VNCLoop(wxIdleEvent&);
private:
	rfbClient* cl;
	DECLARE_EVENT_TABLE()
};
BEGIN_EVENT_TABLE(VNCFrame, wxFrame)
    EVT_IDLE(VNCFrame::VNCLoop)
END_EVENT_TABLE()
bool DivVNC::OnInit()
{
	SetAppName(wxT("DivVNC"));
	SetVendorName(wxT("Adrian Arroyo Calle for Divel"));

    // create the main application window
    VNCFrame *frame = new VNCFrame(wxT("DivVNC"));

    // and show it (the frames, unlike simple controls, are not shown when
    // created initially)
    frame->Show(true);


}
static void update(rfbClient* cl,int x,int y,int w,int h) {
	rfbPixelFormat* pf=&cl->format;
        int bpp=pf->bitsPerPixel/8;
        int row_stride=cl->width*bpp;
        for(int j=0;j<cl->height*row_stride;j+=row_stride)
                for(int i=0;i<cl->width*bpp;i+=bpp) {
                        unsigned char* p=cl->frameBuffer+j+i;
                        unsigned int v;
                        if(bpp==4)
                                v=*(unsigned int*)p;
                        else if(bpp==2)
                                v=*(unsigned short*)p;
                        else
                                v=*(unsigned char*)p;
                        fputc((v>>pf->redShift)*256/(pf->redMax+1),stdout);
                        fputc((v>>pf->greenShift)*256/(pf->greenMax+1),stdout);
                        fputc((v>>pf->blueShift)*256/(pf->blueMax+1),stdout);
                }
}
VNCFrame::VNCFrame(const wxString& title) : wxFrame(NULL, wxID_ANY, title)
{
	SetSize(800,600);
	cl=rfbGetClient(8,3,4);
	cl->GotFrameBufferUpdate=update;
	cl->listenPort = 5500;
	cl->appData.encodingsString="raw";
	int dos=2;
	
	strcmp(wxApp::argv[0],"vnc");
	strcmp(wxApp::argv[1],"127.0.0.1:5500");
	if(!rfbInitClient(cl,&wxApp::argc,wxApp::argv))
	{
		wxLogError(wxT("Can't start VNC client'"));
	}
}
void VNCFrame::VNCLoop(wxIdleEvent& event)
{
		int i=WaitForMessage(cl,1000000/60);
        if(i<0) {
                wxClose(true);
        }
        if(i)
                if(!HandleRFBServerMessage(cl))
                        wxClose(true);
}
IMPLEMENT_APP(DivVNC)
