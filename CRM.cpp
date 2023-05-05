#include "CRM.h"
#include <Windows.h>
using namespace PCmasterCRM; // Назва проекту
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CRM);
	return 0;
}
