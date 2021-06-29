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

	try
	{
		pFrame = new AppFrame(0L);
		pFrame->Show();
	}
	catch (...)
	{

	}

	// Images
	wxInitAllImageHandlers();

	return true;
}