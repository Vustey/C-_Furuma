//
// Created by vu tran on 07/05/2022.
//
#include "../header.h"
#include "Person.h"

#ifndef FURUMA_OFFICIAL_CUSTOMER_H
#define FURUMA_OFFICIAL_CUSTOMER_H


class Customer: public Person, public error_code {
private:
    string typeCustomer;
    string address;
public:
    Customer(const string &idCode, const string &namePerson, const string &dateOfBirth, const string &sex,
             const string &idPerson, const string &phoneNumber, const string &emailAddress, const string &typeCustomer,
             const string &address);
    Customer();
    void output();

};


#endif //FURUMA_OFFICIAL_CUSTOMER_H
