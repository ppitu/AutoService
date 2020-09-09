//
// Created by ppitu on 07.09.2020.
//

#ifndef AUTOSERVICE_CAR_H
#define AUTOSERVICE_CAR_H

#include <string>

class Car {
public:
    Car(int _id, std::string _brand, std::string _description, int _manufacture_year, std::string _petrol, float _price, float _mileage,
        int _car_power, std::string _color);
    std::string getBrand() const;
    std::string getDescription() const;
    std::string getPetrol() const;
    std::string getColor() const;
    int getManufactureYear() const;
    int getCarPower() const;
    float getPrice() const;
    float getMileage() const;

private:
    int id;
    std::string brand;
    std::string description;
    int manufacture_year;
    std::string petrol;
    float price;
    float mileage;
    int car_power;
    std::string color;

};


#endif //AUTOSERVICE_CAR_H
