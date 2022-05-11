//
// Created by vu tran on 07/05/2022.
//
#include "../header.h"
#include "Customer.h"
#include "Booking.h"
#ifndef FURUMA_OFFICIAL_CONTRACT_H
#define FURUMA_OFFICIAL_CONTRACT_H


class Contract {
private:
    Booking booking;
    Customer customer;
    string idContract;
    double prePayment;
    double totalPayment;
public:
    Contract(const Booking &booking, const Customer &customer, const string &idContract, double prePayment,
             double totalPayment);
    Contract();
};


#endif //FURUMA_OFFICIAL_CONTRACT_H