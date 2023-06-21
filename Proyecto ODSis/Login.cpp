#include <cstdlib>

#include "Login.h"

using namespace ProyectoODSis;
using namespace System;
using namespace System::Windows::Forms;

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Login());
	return 0;
}