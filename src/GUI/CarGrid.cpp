//
// Created by ppitu on 09.09.2020.
//

#include "CarGrid.h"

CarGrid::CarGrid(wxPanel *panel) : wxGrid(panel, wxID_ANY) {
    CreateGrid(10, 10);

}

CarGrid::CarGrid(wxNotebook *notebook) : wxGrid(notebook, wxID_ANY) {
    CreateGrid(10, 10);
}
