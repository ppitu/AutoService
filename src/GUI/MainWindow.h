//
// Created by ppitu on 09.09.2020.
//

#ifndef AUTOSERVICE_MAINWINDOW_H
#define AUTOSERVICE_MAINWINDOW_H

#include <wx/wx.h>
#include <wx/panel.h>

class MainWindow : public wxFrame {
public:
    MainWindow(const wxString& title);

private:
    wxPanel *mainPanel;
    wxBoxSizer *mainSizer;
};


#endif //AUTOSERVICE_MAINWINDOW_H
