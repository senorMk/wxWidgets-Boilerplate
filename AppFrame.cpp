#include "AppFrame.h"

wxBEGIN_EVENT_TABLE(AppFrame, wxDialog)
	EVT_ICONIZE(AppFrame::OnIconMinimize)
wxEND_EVENT_TABLE()

AppFrame::AppFrame(wxWindow* parent)
	: AppFrameBase(parent)
{
}

AppFrame::~AppFrame()
{
}

void AppFrame::OnClose(wxCloseEvent& event)
{
	Destroy();
}

void AppFrame::OnIconMinimize(wxIconizeEvent& event)
{
}

void AppFrame::OnExit(wxCommandEvent& event)
{
	Destroy();
}

void AppFrame::OnMinimize(wxCommandEvent& event)
{
}