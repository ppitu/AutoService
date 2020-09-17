//
// Created by ppitu on 16.09.2020.
//

#include "MainNotebook.h"
#include "CarDialog/CarDialog.h"
#include "MainWindow.h"

MainNotebook::MainNotebook(wxPanel *panel) : wxNotebook(panel, wxID_ANY)
{
    mainPanel = new wxPanel(this, -1);
    mainSizer = new wxBoxSizer(wxVERTICAL);



    carGrid = new CarGrid(mainPanel);

    wxButton *button = new wxButton(mainPanel, wxID_EXIT, wxT("Test"));
    wxButton *button1 = new wxButton(mainPanel, ID_CAR_DIALOG, wxT("Test1"));

    mainSizer->Add(carGrid);
    mainSizer->Add(button);
    mainSizer->Add(button1);

    mainPanel->SetSizer(mainSizer);

    AddPage(mainPanel, wxT("Samochody"));
}

void MainNotebook::OnQuit(wxCommandEvent &event) {
    Close(true);

}

void MainNotebook::OnCarDialog(wxCommandEvent &event) {
    CarDialog *carDialog = new CarDialog(wxT("Car dialog"));
    carDialog->Show(true);
}
