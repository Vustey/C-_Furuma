//
// Created by vu tran on 07/05/2022.
//
#include "../header.h"
#ifndef FURUMA_OFFICIAL_PERSON_H
#define FURUMA_OFFICIAL_PERSON_H


class Person {
protected:
    string idCode;
    string namePerson;
    string dateOfBirth;
    string sex;
    string idPerson;
    string phoneNumber;
    string emailAddress;
public:
    Person(const string &idCode, const string &namePerson, const string &dateOfBirth, const string &sex,
           const string &idPerson, const string &phoneNumber, const string &emailAddress);
    Person();
    virtual void output()=0;

};


#endif //FURUMA_OFFICIAL_PERSON_H
