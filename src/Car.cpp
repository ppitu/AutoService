//
// Created by ppitu on 07.09.2020.
//

#include "Car.h"

#include <utility>

Car::Car(int _id, std::string _brand, std::string _description, int _manufacture_year, std::string _petrol,
         float _price, float _mileage, int _car_power, std::string _color) : id(_id), brand(std::move(_brand)), description(std::move(_description)),
         manufacture_year(_manufacture_year), petrol(std::move(_petrol)), price(_price), mileage(_mileage), car_power(_car_power), color(std::move(_color)){

}

std::string Car::getBrand() const {
    return brand;
}

std::string Car::getDescription() const {
    return description;
}

std::string Car::getPetrol() const {
    return petrol;
}

std::string Car::getColor() const {
    return color;
}

int Car::getManufactureYear() const {
    return manufacture_year;
}

int Car::getCarPower() const {
    return car_power;
}

float Car::getPrice() const {
    return price;
}

float Car::getMileage() const {
    return mileage;
}
