//
// Created by vu tran on 07/05/2022.
//

#include "Booking.h"

Booking::Booking() {}

Booking::Booking(const Customer &customer, const Facility &facility, const Customer &idBooking, const string &startDate,
                 const string &endDate) : customer(customer), facility(facility), idBooking(idBooking),
                                          startDate(startDate), endDate(endDate) {}




