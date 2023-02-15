#pragma once
#include "wx/wx.h"
#include "KyWindow.h"
class KyApp : public wxApp
{
	KyWindow* window = nullptr;
public:
	virtual bool OnInit();
};

