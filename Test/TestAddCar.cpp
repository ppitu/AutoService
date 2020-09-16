//
// Created by ppitu on 07.09.2020.
//

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>

#include "../src/Car.h"
#include "../src/AddCar.h"
#include "Database/Database.h"
#include "Database/DatabaseCar.h"

BOOST_AUTO_TEST_SUITE(addCarTransactionSuite)
    BOOST_AUTO_TEST_CASE(addCar)
    {
        int id = 10;
        AddCar t(id, "Volvo", "Nowy samochod", 2009, "Benzyna", 3400.4, 180000, 240, "niebieski");
        t.Execute();

        Database *database = new DatabaseCar();

        Car* car = database->getCar(id);

        BOOST_CHECK_EQUAL(car->getBrand(), "Volvo");
        BOOST_CHECK_EQUAL(car->getCarPower(), 240);
        BOOST_CHECK_EQUAL(car->getColor(), "niebieski");
        BOOST_CHECK_EQUAL(car->getDescription(), "Nowy samochod");
        BOOST_CHECK_EQUAL(car->getManufactureYear(), 2009);
        BOOST_CHECK_EQUAL(car->getMileage(), 180000);
        BOOST_CHECK_EQUAL(car->getPetrol(), "Benzyna");
        //BOOST_CHECK_EQUAL(car->getPrice(), 3400.4);
    }



BOOST_AUTO_TEST_SUITE_END()

