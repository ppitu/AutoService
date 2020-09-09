#include <iostream>
#include "main.h"
#include "../src/GUI/MainWindow.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit() {
    MainWindow *mainWindow = new MainWindow(wxT("MainWindow"));
    mainWindow->Show(true);

    return true;
}
