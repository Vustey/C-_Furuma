//
// Created by vu tran on 07/05/2022.
//
#include "../header.h"
#include "Customer.h"
#include "Facility.h"
#ifndef FURUMA_OFFICIAL_BOOKING_H
#define FURUMA_OFFICIAL_BOOKING_H


class Booking {
public:
    const Facility &getFacility() const;

    void setFacility(const Facility &facility);

    const Customer &getIdBooking() const;

    void setIdBooking(const Customer &idBooking);

    const string &getStartDate() const;

    void setStartDate(const string &startDate);

    const string &getEndDate() const;

    void setEndDate(const string &endDate);

    const Customer &getCustomer() const;

    void setCustomer(const Customer &customer);

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
