//
// Created by ppitu on 16.09.2020.
//

#ifndef AUTOSERVICE_DATABASECAR_H
#define AUTOSERVICE_DATABASECAR_H

#include "Database.h"

class DatabaseCar : public Database
{
public:

    virtual ~DatabaseCar();
    void addCar(Car *car);

};


#endif //AUTOSERVICE_DATABASECAR_H
