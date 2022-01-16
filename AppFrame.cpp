#include "AppFrame.h"

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

void AppFrame::OnExit(wxCommandEvent& event)
{
	Destroy();
}