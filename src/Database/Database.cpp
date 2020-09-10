//
// Created by ppitu on 07.09.2020.
//

#include <iostream>

#include "Database.h"
#include "Car.h"

Database database;

Database::Database() {
    con = mysql_init(NULL);
    if(!mysql_real_connect(con, "localhost", "root", "M@rek123", "", 0, NULL, 0))
    {
        std::cout << "Error\n";
    }

    mysql_query(con, "USE cars");
}

Database::~Database() {
    mysql_close(con);
}

Car *Database::getCar(int carId) {



    return itsCars[carId];
}

void Database::addCar(int carid, Car* c) {
    std::string sql = "INSERT INTO cars(CarID, Brand, Description, Color, Petrol, ManufactureYear, CarPower, Price, Mileage) VALUES "
                      "(" + std::to_string(carid) + ", '" + c->getBrand() + "', '" + c->getDescription() + "', '" + c->getColor() + "', '" + c->getPetrol() +
                      "', " + std::to_string(c->getManufactureYear())+ ", " + std::to_string(c->getCarPower()) + ", " + std::to_string(c->getPrice()) +
                      ", " + std::to_string(c->getMileage()) + ")";

    if(mysql_query(con, sql.c_str()) != 0)
        std::cout << "Error1\n";


    itsCars[carid] = c;
}

void Database::clear() {
    itsCars.clear();
}

bool Database::isInDatabase(int id) {
    return itsCars.contains(id);
}

void Database::deleteCar(int id) {
    std::string sql = "DELETE FROM cars WHERE CarID = " + std::to_string(id);

    mysql_query(con, sql.c_str());

    itsCars.erase(id);
}


