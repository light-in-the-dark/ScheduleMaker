#include "mainform.h"
#include <Windows.h>
using namespace ScheudleMaker;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew mainform);
	return 0;
}
