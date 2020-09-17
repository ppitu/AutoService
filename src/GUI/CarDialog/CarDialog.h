//
// Created by ppitu on 17.09.2020.
//

#ifndef AUTOSERVICE_CARDIALOG_H
#define AUTOSERVICE_CARDIALOG_H

#include <wx/wx.h>

#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/statbox.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/panel.h>

class CarDialog : public wxDialog {
public:
    CarDialog(const wxString& title);
private:
    wxPanel *panel;

    wxBoxSizer *mainSizer;
    wxBoxSizer *bottomSizer;

    wxStaticText *stBrand;
    wxStaticText *stDescription;
    wxStaticText *stManufactureYear;
    wxStaticText *stPetrol;
    wxStaticText *stPrice;
    wxStaticText *stMileage;
    wxStaticText *stCarPower;
    wxStaticText *stColor;

    wxTextCtrl *tcBrand;
    wxTextCtrl *tcDescroption;
    wxTextCtrl *tcManufactureYear;
    wxTextCtrl *tcPetrol;
    wxTextCtrl *tcPrice;
    wxTextCtrl *tcMileage;
    wxTextCtrl *tcCarPower;
    wxTextCtrl *tcColor;

    wxButton *btnOk;
    wxButton *btnAnuluj;
};


#endif //AUTOSERVICE_CARDIALOG_H
