//
// Created by ppitu on 07.09.2020.
//

#include "Database.h"
#include "Car.h"

Database database;

Database::~Database() {

}

Car *Database::getCar(int carId) {
    return itsCars[carId];
}

void Database::addCar(int carid, Car* c) {
    itsCars[carid] = c;
}

void Database::clear() {
    itsCars.clear();
}

bool Database::isInDatabase(int id) {
    return itsCars.contains(id);
}

void Database::deleteCar(int id) {
    itsCars.erase(id);
}

Database::Database() {

}
