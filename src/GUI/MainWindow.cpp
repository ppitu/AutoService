//
// Created by ppitu on 09.09.2020.
//

#include "MainWindow.h"

#include "CarGrid.h"

MainWindow::MainWindow(const wxString &title) : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150))
{
    mainPanel = new wxPanel(this, -1);
    mainSizer = new wxBoxSizer(wxVERTICAL);

    CarGrid *carGrid = new CarGrid(mainPanel);

    mainSizer->Add(carGrid, 1, wxALL | wxEXPAND, 5);

    mainPanel->SetSizer(mainSizer);
}
