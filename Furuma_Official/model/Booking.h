//
// Created by vu tran on 07/05/2022.
//
#include "../header.h"
#include "Customer.h"
#include "Facility.h"
#ifndef FURUMA_OFFICIAL_BOOKING_H
#define FURUMA_OFFICIAL_BOOKING_H


class Booking {
private:
    Facility facility;
    Customer idBooking;
    string startDate;
    string endDate;
    Customer customer;
public:
    Booking(const Customer &customer, const Facility &facility, const Customer &idBooking, const string &startDate,
            const string &endDate);

    Booking();
    void output();

};


#endif //FURUMA_OFFICIAL_BOOKING_H
