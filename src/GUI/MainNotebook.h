//
// Created by ppitu on 16.09.2020.
//

#ifndef AUTOSERVICE_MAINNOTEBOOK_H
#define AUTOSERVICE_MAINNOTEBOOK_H

#include "CarGrid.h"

#include "wx/panel.h"
#include "wx/notebook.h"
#include "wx/button.h"

class MainNotebook : public wxNotebook {
public:
    MainNotebook(wxPanel *panel);

    void OnQuit(wxCommandEvent& event);
    void OnCarDialog(wxCommandEvent& event);

private:
    wxPanel *mainPanel;
    wxBoxSizer *mainSizer;

    CarGrid *carGrid;

};


#endif //AUTOSERVICE_MAINNOTEBOOK_H
