//
// Created by ppitu on 17.09.2020.
//

#include "CarDialog.h"

CarDialog::CarDialog(const wxString &title) :
    wxDialog(NULL, -1, title, wxDefaultPosition)//, wxSize(1000, 1000))
{
    panel = new wxPanel(this, -1);

    mainSizer = new wxBoxSizer(wxVERTICAL);
    bottomSizer = new wxBoxSizer(wxHORIZONTAL);

    stBrand = new wxStaticText(panel, -1, wxT("Marka"), wxPoint(5, 5), wxSize(240, 150));
    tcBrand = new wxTextCtrl(panel, -1, wxT(""), wxPoint(105, 5));
    stDescription = new wxStaticText(panel, -1, wxT("Opis"), wxPoint(5, 45), wxSize(240, 150));
    tcDescroption = new wxTextCtrl(panel, -1, wxT(""), wxPoint(105, 45));
    stPrice = new wxStaticText(panel, -1, wxT("Cena"), wxPoint(5, 85), wxSize(240, 150));
    tcPrice = new wxTextCtrl(panel, -1, wxT(""), wxPoint(105, 85));
    stMileage = new wxStaticText(panel, -1, wxT("Przebieg"), wxPoint(5, 125), wxSize(240, 150));
    tcMileage = new wxTextCtrl(panel, -1, wxT(""), wxPoint(105, 125));
    stManufactureYear = new wxStaticText(panel, -1, wxT("Rok produkcji"), wxPoint(5, 165), wxSize(240, 150));
    tcManufactureYear = new wxTextCtrl(panel, -1, wxT(""), wxPoint(105, 165));
    stPetrol = new wxStaticText(panel, -1, wxT("Paliwo"), wxPoint(5, 205), wxSize(240, 150));
    tcPetrol = new wxTextCtrl(panel, -1, wxT(""), wxPoint(105, 205));
    stCarPower = new wxStaticText(panel, -1, wxT("Moc"), wxPoint(5, 245), wxSize(240, 150));
    tcCarPower = new wxTextCtrl(panel, -1, wxT(""), wxPoint(105, 245));
    stColor = new wxStaticText(panel, -1, wxT("Color"), wxPoint(5, 285), wxSize(240, 150));
    tcColor = new wxTextCtrl(panel, -1, wxT(""), wxPoint(105, 285));


    btnOk = new wxButton(this, -1, wxT("Ok"), wxDefaultPosition, wxSize(70, 30));
    btnAnuluj = new wxButton(this, -1, wxT("Anuluj"), wxDefaultPosition, wxSize(70, 30));

    bottomSizer->Add(btnOk, 1);
    bottomSizer->Add(btnAnuluj, 1, wxLEFT , 5);

    mainSizer->Add(panel, 1);
    mainSizer->Add(bottomSizer, 0, wxALIGN_CENTER | wxTOP | wxBOTTOM, 10);

    SetSizer(mainSizer);
    Fit();
    Center();

    ShowModal();

    Destroy();
}
