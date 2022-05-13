//
// Created by vu tran on 07/05/2022.
//

#include "Booking.h"

Booking::Booking() {}

Booking::Booking(const Customer &customer, const Facility &facility, const Customer &idBooking, const string &startDate,
                 const string &endDate) : customer(customer), facility(facility), idBooking(idBooking),
                                          startDate(startDate), endDate(endDate) {}

const Facility &Booking::getFacility() const {
    return facility;
}

void Booking::setFacility(const Facility &facility) {
    Booking::facility = facility;
}

const Customer &Booking::getIdBooking() const {
    return idBooking;
}

void Booking::setIdBooking(const Customer &idBooking) {
    Booking::idBooking = idBooking;
}

const string &Booking::getStartDate() const {
    return startDate;
}

void Booking::setStartDate(const string &startDate) {
    Booking::startDate = startDate;
}

const string &Booking::getEndDate() const {
    return endDate;
}

void Booking::setEndDate(const string &endDate) {
    Booking::endDate = endDate;
}

const Customer &Booking::getCustomer() const {
    return customer;
}

void Booking::setCustomer(const Customer &customer) {
    Booking::customer = customer;
}




