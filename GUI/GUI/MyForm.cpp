#include "MyForm.h"
#include <Windows.h>

using namespace System;
using namespace Windows::Forms;


[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew GUI::MyForm());
	return 0;
}
