//
// Created by ppitu on 07.09.2020.
//

#include <iostream>

#include "Database.h"
#include "Car.h"


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

void Database::addCar(Car *car) {

}


