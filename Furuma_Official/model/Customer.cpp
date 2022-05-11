//
// Created by vu tran on 07/05/2022.
//

#include "Customer.h"

Customer::Customer(const string &idCode, const string &namePerson, const string &dateOfBirth, const string &sex,
                   const string &idPerson, const string &phoneNumber, const string &emailAddress,
                   const string &typeCustomer, const string &address) : Person(idCode, namePerson, dateOfBirth, sex,
                                                                               idPerson, phoneNumber, emailAddress),
                                                                        typeCustomer(typeCustomer), address(address) {}

Customer::Customer() {

}

void Customer::output() {
    cout<<"Customer{idCode:"<<idCode<<" "<<"namePerson:"<<namePerson<<" "<<"dateOfBirth:"<<dateOfBirth
        <<" "<<"sex:"<<sex<<" "<<"idPerson"<<idPerson<<" "<<"phoneNumber:"<<phoneNumber<<" "<<"emailAddress:"<<emailAddress<<" "<<"typeCustomer:"<<typeCustomer
        <<"address:"<<address<<"}"<<endl;
}
