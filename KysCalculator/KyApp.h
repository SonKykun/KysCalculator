#pragma once
#include "wx/wx.h"
class KyWindow;
class KyApp : public wxApp
{
	KyWindow* window = nullptr;
public:
	virtual bool OnInit();
};

