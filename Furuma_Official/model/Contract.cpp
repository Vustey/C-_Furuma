//
// Created by vu tran on 07/05/2022.
//

#include "Contract.h"

Contract::Contract(const Booking &booking, const Customer &customer, const string &idContract, double prePayment,
                   double totalPayment) : booking(booking), customer(customer), idContract(idContract),
                                          prePayment(prePayment), totalPayment(totalPayment) {}

Contract::Contract() {

}

const Booking &Contract::getBooking() const {
    return booking;
}

void Contract::setBooking(const Booking &booking) {
    Contract::booking = booking;
}

const Customer &Contract::getCustomer() const {
    return customer;
}

void Contract::setCustomer(const Customer &customer) {
    Contract::customer = customer;
}

const string &Contract::getIdContract() const {
    return idContract;
}

void Contract::setIdContract(const string &idContract) {
    Contract::idContract = idContract;
}

double Contract::getPrePayment() const {
    return prePayment;
}

void Contract::setPrePayment(double prePayment) {
    Contract::prePayment = prePayment;
}

double Contract::getTotalPayment() const {
    return totalPayment;
}

void Contract::setTotalPayment(double totalPayment) {
    Contract::totalPayment = totalPayment;
}

void Contract::output() {
}
