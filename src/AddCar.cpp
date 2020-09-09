//
// Created by ppitu on 07.09.2020.
//

#include "AddCar.h"

#include "Car.h"
#include "Database/Database.h"
#include <utility>

extern Database database;

AddCar::~AddCar()
{

}

void AddCar::Execute() {
    Car* car = new Car(itsId, brand, description, manufacture_year, petrol, price, mileage, car_power, color);

    database.addCar(itsId, car);
}

AddCar::AddCar(int carid, std::string _brand, std::string _description, int _manufacture_year,
               std::string _petrol, float _price, float _mileage, int _car_power,
               std::string _color) : itsId(carid), brand(std::move(_brand)), description(std::move(_description)), manufacture_year(_manufacture_year),
                                                           petrol(std::move(_petrol)), price(_price), mileage(_mileage), car_power(_car_power), color(std::move(_color)){

}
