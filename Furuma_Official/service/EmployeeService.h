//
// Created by vu tran on 13/05/2022.
//
#include "../header.h"
#include<list>
#include "../model/Employee.h"
#ifndef FURUMA_OFFICIAL_EMPLOYEESERVICE_H
#define FURUMA_OFFICIAL_EMPLOYEESERVICE_H

class EmployeeService {
public:
    void displayEmployee();
    void createEmployee();
    void editEmployee();
private:
    list<Employee>list;

};


#endif //FURUMA_OFFICIAL_EMPLOYEESERVICE_H
