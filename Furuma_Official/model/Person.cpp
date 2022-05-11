//
// Created by vu tran on 07/05/2022.
//

#include "Person.h"

Person::Person(const string &idCode, const string &namePerson, const string &dateOfBirth, const string &sex,
               const string &idPerson, const string &phoneNumber, const string &emailAddress) : idCode(idCode),
                                                                                                namePerson(namePerson),
                                                                                                dateOfBirth(
                                                                                                        dateOfBirth),
                                                                                                sex(sex),
                                                                                                idPerson(idPerson),
                                                                                                phoneNumber(
                                                                                                        phoneNumber),
                                                                                                emailAddress(
                                                                                                        emailAddress) {}

Person::Person() {
}

void Person::output() {
    cout<<"Person{idCode:"<<idCode<<" "<<"namePerson:"<<namePerson<<" "<<"dateOfBirth:"<<dateOfBirth
    <<" "<<"sex:"<<sex<<" "<<"idPerson"<<idPerson<<" "<<"phoneNumber:"<<phoneNumber<<" "<<"emailAddress:"<<emailAddress<<"}"
    <<endl;
}
