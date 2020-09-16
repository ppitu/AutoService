//
// Created by ppitu on 07.09.2020.
//

#ifndef AUTOSERVICE_DATABASE_H
#define AUTOSERVICE_DATABASE_H

#include <map>

#include <mysql/mysql.h>

class Car;
class Database {
public:
    Database();
    virtual ~Database();
    Car* getCar(int carId);
    virtual void addCar(Car *car);
    void clear();
    bool isInDatabase(int id);
    void deleteCar(int id);

protected:
    MYSQL *con;

    std::map<int, Car*> itsCars;
};


#endif //AUTOSERVICE_DATABASE_H
