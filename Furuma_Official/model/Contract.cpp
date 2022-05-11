//
// Created by vu tran on 07/05/2022.
//

#include "Contract.h"

Contract::Contract(const Booking &booking, const Customer &customer, const string &idContract, double prePayment,
                   double totalPayment) : booking(booking), customer(customer), idContract(idContract),
                                          prePayment(prePayment), totalPayment(totalPayment) {}

Contract::Contract() {

}
