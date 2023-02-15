#pragma once
#include "wx/wx.h"
class KyWindow : public wxFrame
{
public:
	KyWindow();
	~KyWindow();
	wxPanel* panel = nullptr;
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
	void OnButton0Clicked(wxCommandEvent& cldBtn);
	void OnButton1Clicked(wxCommandEvent& cldBtn);
	void OnButton2Clicked(wxCommandEvent& cldBtn);
	void OnButton3Clicked(wxCommandEvent& cldBtn);
	void OnButton4Clicked(wxCommandEvent& cldBtn);
	void OnButton5Clicked(wxCommandEvent& cldBtn);
	void OnButton6Clicked(wxCommandEvent& cldBtn);
	void OnButton7Clicked(wxCommandEvent& cldBtn);
	void OnButton8Clicked(wxCommandEvent& cldBtn);
	void OnButton9Clicked(wxCommandEvent& cldBtn);
	void OnButtoncClicked(wxCommandEvent& cldBtn);
	void OnButtondClicked(wxCommandEvent& cldBtn);
	void OnButtonplusClicked(wxCommandEvent& cldBtn);
	void OnButtonminusClicked(wxCommandEvent& cldBtn);
	void OnButtonmultiplyClicked(wxCommandEvent& cldBtn);
	void OnButtondivideClicked(wxCommandEvent& cldBtn);
	void OnButtonequalsClicked(wxCommandEvent& cldBtn);
	void OnButtonmodClicked(wxCommandEvent& cldBtn);
	void OnButtonsinClicked(wxCommandEvent& cldBtn);
	void OnButtoncosClicked(wxCommandEvent& cldBtn);
	void OnButtontanClicked(wxCommandEvent& cldBtn);
	void OnButtonnegClicked(wxCommandEvent& cldBtn);
	void OnButtondotClicked(wxCommandEvent& cldBtn);
	wxDECLARE_EVENT_TABLE();
};

