//
// Created by ppitu on 09.09.2020.
//

#ifndef AUTOSERVICE_MAINWINDOW_H
#define AUTOSERVICE_MAINWINDOW_H

#include <wx/wx.h>
#include <wx/panel.h>
#include <wx/notebook.h>

enum
{
    ID_CAR_DIALOG = wxID_HIGHEST + 1
};

class MainWindow : public wxFrame {
public:
    MainWindow(const wxString& title);

private:
    wxPanel *mainPanel;
    wxBoxSizer *mainSizer;


    DECLARE_EVENT_TABLE()
};


#endif //AUTOSERVICE_MAINWINDOW_H
