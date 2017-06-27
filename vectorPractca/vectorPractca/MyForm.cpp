#include"MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"

using namespace System;
using namespace System::Windows::Forms;

std::vector<int> v1, v2, v3;
bool polOtrEl = false;
bool sortEl = false;
int Pol, Otr;


[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	vectorPractca::MyForm form;
	Application::Run(%form);
}