#include "CarSimulator.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create an instance of your Windows Form
    CarSimulator::CarSimulator form;

    // Run the application
    Application::Run(% form);

    return 0;
}