#pragma once

#include <wx/app.h>

class AppFrame;

class TemplateApp : public wxApp
{
	public:
		~TemplateApp();
		virtual bool OnInit();

	private:
		AppFrame* pFrame = nullptr;
};