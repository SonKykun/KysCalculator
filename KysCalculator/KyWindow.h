#pragma once
#include "wx/wx.h"
class KyWindow : public wxFrame
{
public:
	KyWindow();
	~KyWindow();
	wxTextCtrl* textBox = nullptr;
	wxButton* zero = nullptr;
	wxButton* one = nullptr;
	wxButton* two = nullptr;
	wxButton* three = nullptr;
	wxButton* four = nullptr;
	wxButton* five = nullptr;
	wxButton* six = nullptr;
	wxButton* seven = nullptr;
	wxButton* eight = nullptr;
	wxButton* nine = nullptr;
	wxButton* cButton = nullptr;
	wxButton* dButton = nullptr;
	wxButton* plus = nullptr;
	wxButton* minus = nullptr;
	wxButton* multiply = nullptr;
	wxButton* divide = nullptr;
	wxButton* equals = nullptr;
	wxButton* mod = nullptr;
	wxButton* sin = nullptr;
	wxButton* cos = nullptr;
	wxButton* tan = nullptr;
	wxButton* neg = nullptr;
	wxButton* dot = nullptr;
};

