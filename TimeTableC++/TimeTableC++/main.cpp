#include "myLoginForm.h"
#include "makeTimeTableForm.h"
#include "StudentReport.h"
#include "CoursesCRUD.h"
#include"DiaplayAvailableTimeslots.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    TimeTableC::myLoginForm form1;
    Application::Run(% form1);
}
