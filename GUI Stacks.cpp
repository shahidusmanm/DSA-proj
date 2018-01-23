// GUI Stacks.cpp : main project file.

#include "stdafx.h"
#include "Form4.h"
#include "Form2.h"
#include "Form3.h"
#include "Form1.h"


using namespace GUIStacks;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
