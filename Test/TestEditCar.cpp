//
// Created by ppitu on 09.09.2020.
//

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

#include "../src/Car.h"
#include "../src/AddCar.h"

#include "Database/Database.h"

extern Database database;

BOOST_AUTO_TEST_SUITE(editCarTransactionSuite)
    BOOST_AUTO_TEST_CASE(editCar)
    {
        int id = 1;
        AddCar t(id, "Volvo", "Nowy samochod", 2009, "Benzyna", 3400.4, 180000, 240, "niebieski");
        t.Execute();

        Car* car = database.getCar(id);
    }



BOOST_AUTO_TEST_SUITE_END()