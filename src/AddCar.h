//
// Created by ppitu on 07.09.2020.
//

#ifndef AUTOSERVICE_ADDCAR_H
#define AUTOSERVICE_ADDCAR_H

#include "Transaction.h"

#include <string>

class AddCar : public Transaction {
public:
    virtual ~AddCar();
    AddCar(int carid, std::string _brand, std::string _description, int _manufacture_year, std::string _petrol, float _price, float _mileage,
           int _car_power, std::string _color);
    virtual void Execute();

private:
    int itsId;
    std::string brand;
    std::string description;
    int manufacture_year;
    std::string petrol;
    float price;
    float mileage;
    int car_power;
    std::string color;
};


#endif //AUTOSERVICE_ADDCAR_H
