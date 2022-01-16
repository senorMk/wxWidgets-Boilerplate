#include "App.h"
#include "AppFrame.h"

IMPLEMENT_APP(TemplateApp);

TemplateApp::~TemplateApp()
{
}

bool TemplateApp::OnInit()
{
	// Set application name
	wxApp::SetAppName("Template");

	pFrame = new AppFrame(0L);
	pFrame->Show();

	// Images
	wxInitAllImageHandlers();

	return true;
}