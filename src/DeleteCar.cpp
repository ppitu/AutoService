//
// Created by ppitu on 09.09.2020.
//

#include "DeleteCar.h"
#include "Database/Database.h"

extern Database database;

DeleteCar::DeleteCar(int _id) : id{_id} {

}

DeleteCar::~DeleteCar() {

}

void DeleteCar::Execute() {
    database.deleteCar(id);
}
