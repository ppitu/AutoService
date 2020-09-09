//
// Created by ppitu on 07.09.2020.
//

#ifndef AUTOSERVICE_TRANSACTION_H
#define AUTOSERVICE_TRANSACTION_H


class Transaction {
public:
    virtual ~Transaction();
    virtual void Execute() = 0;
};


#endif //AUTOSERVICE_TRANSACTION_H
