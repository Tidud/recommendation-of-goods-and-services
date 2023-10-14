#include "MyForm.h"
#include "MyForm1.h"
#include <Windows.h>
#include "matrix.h"
#include "network.h"
#include <fstream>
using namespace houses;

[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	


	return 0;
}