#include "KyApp.h"
#include "KyWindow.h"
wxIMPLEMENT_APP(KyApp);
bool KyApp::OnInit()
{
	window = new KyWindow();
	window->Show();
	return true;
}