//----------------------------------- 
// Name:   Sean Maidana Dollanarte
// Project: BAMSS
// Purpose: This is the landing page of our program
// this is the first page that users will see
// and they can either login or register
//----------------------------------- 
#include "LandingPageForm.h"

using namespace System;
using namespace System::Windows::Forms;

//array<String^>^ args
[STAThread]

int main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    BAMMS::LandingPageForm form;
    Application::Run(% form);
}

