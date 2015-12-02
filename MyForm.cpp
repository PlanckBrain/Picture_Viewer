#include <iostream>
#include "Givin.h"
#include "MyForm.h"
#include <iomanip>

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Picture_viewer::MyForm form;
	Application::Run(%form);
}