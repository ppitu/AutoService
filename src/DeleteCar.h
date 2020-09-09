//
// Created by ppitu on 09.09.2020.
//

#ifndef AUTOSERVICE_DELETECAR_H
#define AUTOSERVICE_DELETECAR_H

#include "Transaction.h"

class DeleteCar : public Transaction {
public:
    DeleteCar(int _id);
    virtual ~DeleteCar();
    void Execute();

private:
    int id;
};


#endif //AUTOSERVICE_DELETECAR_H
