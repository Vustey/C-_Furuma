//
// Created by vu tran on 07/05/2022.
//
#include "../header.h"
#include"Person.h"
#ifndef FURUMA_OFFICIAL_EMPLOYEE_H
#define FURUMA_OFFICIAL_EMPLOYEE_H


class Employee: public Person{
private:
    string level;
    string position;
    float salary;
public:
    Employee(const string &idCode, const string &namePerson, const string &dateOfBirth, const string &sex,
             const string &idPerson, const string &phoneNumber, const string &emailAddress, const string &level,
             const string &position, float salary);
    Employee();
    void output();


};


#endif //FURUMA_OFFICIAL_EMPLOYEE_H
