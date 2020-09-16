//
// Created by ppitu on 16.09.2020.
//

#include <iostream>

#include "DatabaseCar.h"
#include "Car.h"

DatabaseCar::~DatabaseCar() {

}

void DatabaseCar::addCar(Car *car) {
    std::string sql = "INSERT INTO cars(Brand, Description, Color, Petrol, ManufactureYear, CarPower, Price, Mileage) VALUES "
                      "( " + car->getBrand() + "', '" + car->getDescription() + "', '" + car->getColor() + "', '" + car->getPetrol() +
                      "', " + std::to_string(car->getManufactureYear())+ ", " + std::to_string(car->getCarPower()) + ", " + std::to_string(car->getPrice()) +
                      ", " + std::to_string(car->getMileage()) + ")";

    if(mysql_query(con, sql.c_str()) != 0)
        std::cout << "Error1\n";
}
