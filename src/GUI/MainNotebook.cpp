//
// Created by ppitu on 16.09.2020.
//

#include "MainNotebook.h"



MainNotebook::MainNotebook(wxPanel *panel) : wxNotebook(panel, wxID_ANY)
{
    mainPanel = new wxPanel(this, -1);
    mainSizer = new wxBoxSizer(wxVERTICAL);

    wxTextCtrl *textCtrl = new wxTextCtrl(this, wxID_ANY, wxT("Tak"));

    carGrid = new CarGrid(mainPanel);

    mainSizer->Add(carGrid);

    mainPanel->SetSizer(mainSizer);

    AddPage(mainPanel, wxT("Samochody"));
}
