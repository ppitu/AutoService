//
// Created by ppitu on 09.09.2020.
//

#include "MainWindow.h"

#include "CarGrid.h"
#include "MainNotebook.h"

MainWindow::MainWindow(const wxString &title) : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150))
{
    mainPanel = new wxPanel(this, -1);
    mainSizer = new wxBoxSizer(wxVERTICAL);

    MainNotebook *mainNotebook = new MainNotebook(mainPanel);

    mainSizer->Add(mainNotebook, 1, wxALL | wxEXPAND, 5);

    mainPanel->SetSizer(mainSizer);
    SetMinSize(wxSize(1000, 600));
}
