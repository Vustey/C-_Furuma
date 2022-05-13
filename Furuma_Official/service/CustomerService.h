//
// Created by vu tran on 13/05/2022.
//
#include "../header.h"
#include <list>
#include "../model/Customer.h"
#ifndef FURUMA_OFFICIAL_CUSTOMERSERVICE_H
#define FURUMA_OFFICIAL_CUSTOMERSERVICE_H


class CustomerService {
public:
    void displayCustomer();
    void createCustomer();
    void editCustomer();
private:
    list<Customer>list;
};


#endif //FURUMA_OFFICIAL_CUSTOMERSERVICE_H
