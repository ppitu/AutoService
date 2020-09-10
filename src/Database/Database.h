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
    void addCar(int carid, Car*);
    void clear();
    bool isInDatabase(int id);
    void deleteCar(int id);

private:
    MYSQL *con;

    std::map<int, Car*> itsCars;
};


#endif //AUTOSERVICE_DATABASE_H
