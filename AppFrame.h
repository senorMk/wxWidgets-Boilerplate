#pragma once

#include <wx/wx.h>
#include "AppFrameBase.h"

class AppFrame : public AppFrameBase
{
	public:
		AppFrame(wxWindow* parent);
		virtual ~AppFrame();

		void OnClose(wxCloseEvent& event);

	protected:
		virtual void OnExit(wxCommandEvent& event);

};
