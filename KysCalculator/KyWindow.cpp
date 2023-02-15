#include "KyWindow.h"
wxBEGIN_EVENT_TABLE(KyWindow, wxFrame)
EVT_BUTTON(1, OnButton0Clicked)
EVT_BUTTON(2, OnButton1Clicked)
EVT_BUTTON(3, OnButton2Clicked)
EVT_BUTTON(4, OnButton3Clicked)
EVT_BUTTON(5, OnButton4Clicked)
EVT_BUTTON(6, OnButton5Clicked)
EVT_BUTTON(7, OnButton6Clicked)
EVT_BUTTON(8, OnButton7Clicked)
EVT_BUTTON(9, OnButton8Clicked)
EVT_BUTTON(10, OnButton9Clicked)
EVT_BUTTON(11, OnButtoncClicked)
EVT_BUTTON(12, OnButtonplusClicked)
EVT_BUTTON(13, OnButtonminusClicked)
EVT_BUTTON(14, OnButtonmultiplyClicked)
EVT_BUTTON(15, OnButtondivideClicked)
EVT_BUTTON(16, OnButtonequalsClicked)
EVT_BUTTON(17, OnButtondClicked)
EVT_BUTTON(18, OnButtonmodClicked)
EVT_BUTTON(19, OnButtonsinClicked)
EVT_BUTTON(20, OnButtoncosClicked)
EVT_BUTTON(21, OnButtontanClicked)
EVT_BUTTON(22, OnButtonnegClicked)
EVT_BUTTON(23, OnButtondotClicked)
wxEND_EVENT_TABLE()
KyWindow::KyWindow() : wxFrame(nullptr, 0, "Ky's Calculator", wxPoint(0, 0), wxSize(310, 350))
{
	textBox = new wxTextCtrl(this, wxID_ANY, " ", wxPoint(0, 0), wxSize(300, 60));
	textBox->SetBackgroundColour(*wxWHITE);
	zero = new wxButton(this, 1, "0", wxPoint(0, 200), wxSize(60, 60));
	zero->SetBackgroundColour(*wxWHITE);
	one = new wxButton(this, 2, "1", wxPoint(60, 200), wxSize(60, 60));
	one->SetBackgroundColour(*wxWHITE);
	two = new wxButton(this, 3, "2", wxPoint(120, 200), wxSize(60, 60));
	two->SetBackgroundColour(*wxWHITE);
	three = new wxButton(this, 4, "3", wxPoint(180, 200), wxSize(60, 60));
	three->SetBackgroundColour(*wxWHITE);
	four = new wxButton(this, 5, "4", wxPoint(240, 200), wxSize(60, 60));
	four->SetBackgroundColour(*wxWHITE);
	five = new wxButton(this, 6, "5", wxPoint(0, 150), wxSize(60, 60));
	five->SetBackgroundColour(*wxWHITE);
	six = new wxButton(this, 7, "6", wxPoint(60, 150), wxSize(60, 60));
	six->SetBackgroundColour(*wxWHITE);
	seven = new wxButton(this, 8, "7", wxPoint(120, 150), wxSize(60, 60));
	seven->SetBackgroundColour(*wxWHITE);
	eight = new wxButton(this, 9, "8", wxPoint(180, 150), wxSize(60, 60));
	eight->SetBackgroundColour(*wxWHITE);
	nine = new wxButton(this, 10, "9", wxPoint(240, 150), wxSize(60, 60));
	nine->SetBackgroundColour(*wxWHITE);
	cButton = new wxButton(this, 11, "clear", wxPoint(240, 250), wxSize(60, 60));
	cButton->SetBackgroundColour(*wxWHITE);
	plus = new wxButton(this, 12, "+", wxPoint(0, 100), wxSize(60, 60));
	plus->SetBackgroundColour(*wxWHITE);
	minus = new wxButton(this, 13, "-", wxPoint(60, 100), wxSize(60, 60));
	minus->SetBackgroundColour(*wxWHITE);
	multiply = new wxButton(this, 14, "*", wxPoint(120, 100), wxSize(60, 60));
	multiply->SetBackgroundColour(*wxWHITE);
	divide = new wxButton(this, 15, "/", wxPoint(180, 100), wxSize(60, 60));
	divide->SetBackgroundColour(*wxWHITE);
	equals = new wxButton(this, 16, "=", wxPoint(240, 100), wxSize(60, 60));
	equals->SetBackgroundColour(*wxWHITE);
	dButton = new wxButton(this, 17, "delete", wxPoint(240, 50), wxSize(60, 60));
	dButton->SetBackgroundColour(*wxWHITE);
	mod = new wxButton(this, 18, "%", wxPoint(0, 50), wxSize(60, 60));
	mod->SetBackgroundColour(*wxWHITE);
	sin = new wxButton(this, 19, "sin", wxPoint(60, 50), wxSize(60, 60));
	sin->SetBackgroundColour(*wxLIGHT_GREY);
	cos = new wxButton(this, 20, "cos", wxPoint(120, 50), wxSize(60, 60));
	cos->SetBackgroundColour(*wxLIGHT_GREY);
	tan = new wxButton(this, 21, "tan", wxPoint(180, 50), wxSize(60, 60));
	tan->SetBackgroundColour(*wxLIGHT_GREY);
	neg = new wxButton(this, 22, "neg", wxPoint(0, 250), wxSize(60, 60));
	neg->SetBackgroundColour(*wxLIGHT_GREY);
	dot = new wxButton(this, 23, ".", wxPoint(120, 250), wxSize(60, 60));
	dot->SetBackgroundColour(*wxLIGHT_GREY);
	panel = new wxPanel(this, wxID_ANY, wxPoint(0, 0), wxSize(310, 350));
	panel->SetBackgroundColour(*wxWHITE);
}
KyWindow::~KyWindow()
{
}
void KyWindow::OnButton0Clicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(zero->GetLabel());
	}
	else
	{
		textBox->AppendText(zero->GetLabel());
	}
}
void KyWindow::OnButton1Clicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(one->GetLabel());
	}
	else
	{
		textBox->AppendText(one->GetLabel());
	}
}
void KyWindow::OnButton2Clicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(two->GetLabel());
	}
	else
	{
		textBox->AppendText(two->GetLabel());
	}
}
void KyWindow::OnButton3Clicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(three->GetLabel());
	}
	else
	{
		textBox->AppendText(three->GetLabel());
	}
}
void KyWindow::OnButton4Clicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(four->GetLabel());
	}
	else
	{
		textBox->AppendText(four->GetLabel());
	}
}
void KyWindow::OnButton5Clicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(five->GetLabel());
	}
	else
	{
		textBox->AppendText(five->GetLabel());
	}
}
void KyWindow::OnButton6Clicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(six->GetLabel());
	}
	else
	{
		textBox->AppendText(six->GetLabel());
	}
}
void KyWindow::OnButton7Clicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(seven->GetLabel());
	}
	else
	{
		textBox->AppendText(seven->GetLabel());
	}
}
void KyWindow::OnButton8Clicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(eight->GetLabel());
	}
	else
	{
		textBox->AppendText(eight->GetLabel());
	}
}
void KyWindow::OnButton9Clicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(nine->GetLabel());
	}
	else
	{
		textBox->AppendText(nine->GetLabel());
	}
}
void KyWindow::OnButtoncClicked(wxCommandEvent& cldBtn)
{
	textBox->Clear();
}
void KyWindow::OnButtondClicked(wxCommandEvent& cldBtn)
{
	textBox->Undo();
}
void KyWindow::OnButtonplusClicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(plus->GetLabel());
	}
	else
	{
		textBox->AppendText(plus->GetLabel());
	}
}
void KyWindow::OnButtonminusClicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(minus->GetLabel());
	}
	else
	{
		textBox->AppendText(minus->GetLabel());
	}
}
void KyWindow::OnButtonmultiplyClicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(multiply->GetLabel());
	}
	else
	{
		textBox->AppendText(multiply->GetLabel());
	}
}
void KyWindow::OnButtondivideClicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(divide->GetLabel());
	}
	else
	{
		textBox->AppendText(divide->GetLabel());
	}
}
void KyWindow::OnButtonequalsClicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(equals->GetLabel());
	}
	else
	{
		textBox->AppendText(equals->GetLabel());
	}
}
void KyWindow::OnButtonmodClicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(mod->GetLabel());
	}
	else
	{
		textBox->AppendText(mod->GetLabel());
	}
}
void KyWindow::OnButtonsinClicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(sin->GetLabel());
	}
	else
	{
		textBox->AppendText(sin->GetLabel());
	}
}
void KyWindow::OnButtoncosClicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(cos->GetLabel());
	}
	else
	{
		textBox->AppendText(cos->GetLabel());
	}
}
void KyWindow::OnButtontanClicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(tan->GetLabel());
	}
	else
	{
		textBox->AppendText(tan->GetLabel());
	}
}
void KyWindow::OnButtonnegClicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(neg->GetLabel());
	}
	else
	{
		textBox->AppendText(neg->GetLabel());
	}
}
void KyWindow::OnButtondotClicked(wxCommandEvent& cldBtn)
{
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue(dot->GetLabel());
	}
	else
	{
		textBox->AppendText(dot->GetLabel());
	}
}