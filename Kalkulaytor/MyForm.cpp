#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) //Автоматически очищать массив строк - ^>^
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Kalkulaytor::MyForm form;
	Application::Run(% form);
}

