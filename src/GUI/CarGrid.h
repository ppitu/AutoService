//
// Created by ppitu on 09.09.2020.
//

#ifndef AUTOSERVICE_CARGRID_H
#define AUTOSERVICE_CARGRID_H

#include <wx/wx.h>
#include <wx/grid.h>
#include <wx/panel.h>
#include <wx/notebook.h>

class CarGrid : public wxGrid {
public:
    CarGrid(wxPanel *panel);
    CarGrid(wxNotebook *notebook);
};


#endif //AUTOSERVICE_CARGRID_H
