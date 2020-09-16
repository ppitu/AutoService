project(AutoService)

set(HEADER_FILES
        Car.h
        Transaction.h
        AddCar.h
        Database/Database.h)

set(SOURCE_FILE
        Car.cpp
        Transaction.cpp
        AddCar.cpp
        Database/Database.cpp DeleteCar.cpp DeleteCar.h EditCar.cpp EditCar.h GUI/MainWindow.cpp GUI/MainWindow.h GUI/CarGrid.cpp GUI/CarGrid.h Database/DatabaseCar.cpp Database/DatabaseCar.h GUI/MainNotebook.cpp GUI/MainNotebook.h)

add_library(AutoService_lib STATIC ${SOURCE_FILE} ${HEADER_FILE})