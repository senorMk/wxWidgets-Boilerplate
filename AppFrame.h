#pragma once

#include <wx/wx.h>
#include "AppFrameBase.h"

class AppFrame : public AppFrameBase
{
	public:
		AppFrame(wxWindow* parent);
		virtual ~AppFrame();

		void OnClose(wxCloseEvent& event);
		void OnIconMinimize(wxIconizeEvent& event);

	protected:
		virtual void OnExit(wxCommandEvent& event);
		virtual void OnMinimize(wxCommandEvent& event);

	private:
		wxDECLARE_EVENT_TABLE();
};
