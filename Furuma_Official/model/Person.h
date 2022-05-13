//
// Created by vu tran on 07/05/2022.
//
#include "../header.h"
#ifndef FURUMA_OFFICIAL_PERSON_H
#define FURUMA_OFFICIAL_PERSON_H

class Person {
public:
    const string &getIdCode() const;

    void setIdCode(const string &idCode);

    const string &getNamePerson() const;

    void setNamePerson(const string &namePerson);

    const string &getDateOfBirth() const;

    void setDateOfBirth(const string &dateOfBirth);

    const string &getSex() const;

    void setSex(const string &sex);

    const string &getIdPerson() const;

    void setIdPerson(const string &idPerson);

    const string &getPhoneNumber() const;

    void setPhoneNumber(const string &phoneNumber);

    const string &getEmailAddress() const;

    void setEmailAddress(const string &emailAddress);

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
