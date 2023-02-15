#include "KyWindow.h"
KyWindow::KyWindow() : wxFrame(nullptr, 0, "Ky's Calculator", wxPoint(0, 0), wxSize(310, 350))
{
	textBox = new wxTextCtrl(this, wxID_ANY, " ", wxPoint(0, 0), wxSize(300, 60));
	zero = new wxButton(this, 1, "0", wxPoint(0, 200), wxSize(60, 60));
	one = new wxButton(this, 2, "1", wxPoint(60, 200), wxSize(60, 60));
	two = new wxButton(this, 3, "2", wxPoint(120, 200), wxSize(60, 60));
	three = new wxButton(this, 4, "3", wxPoint(180, 200), wxSize(60, 60));
	four = new wxButton(this, 5, "4", wxPoint(240, 200), wxSize(60, 60));
	five = new wxButton(this, 6, "5", wxPoint(0, 150), wxSize(60, 60));
	six = new wxButton(this, 7, "6", wxPoint(60, 150), wxSize(60, 60));
	seven = new wxButton(this, 8, "7", wxPoint(120, 150), wxSize(60, 60));
	eight = new wxButton(this, 9, "8", wxPoint(180, 150), wxSize(60, 60));
	nine = new wxButton(this, 10, "9", wxPoint(240, 150), wxSize(60, 60));
	cButton = new wxButton(this, 11, "clear", wxPoint(240, 250), wxSize(60, 60));
	plus = new wxButton(this, 12, "+", wxPoint(0, 100), wxSize(60, 60));
	minus = new wxButton(this, 13, "-", wxPoint(60, 100), wxSize(60, 60));
	multiply = new wxButton(this, 14, "*", wxPoint(120, 100), wxSize(60, 60));
	divide = new wxButton(this, 15, "/", wxPoint(180, 100), wxSize(60, 60));
	equals = new wxButton(this, 16, "=", wxPoint(240, 100), wxSize(60, 60));
	dButton = new wxButton(this, 17, "delete", wxPoint(240, 50), wxSize(60, 60));
	mod = new wxButton(this, 18, "%", wxPoint(0, 50), wxSize(60, 60));
	sin = new wxButton(this, 19, "sin", wxPoint(60, 50), wxSize(60, 60));
	cos = new wxButton(this, 20, "cos", wxPoint(120, 50), wxSize(60, 60));
	tan = new wxButton(this, 21, "tan", wxPoint(180, 50), wxSize(60, 60));
	neg = new wxButton(this, 22, "neg", wxPoint(0, 250), wxSize(60, 60));
	dot = new wxButton(this, 23, ".", wxPoint(120, 250), wxSize(60, 60));
}
KyWindow::~KyWindow()
{
}