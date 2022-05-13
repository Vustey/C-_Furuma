//
// Created by vu tran on 08/05/2022.
//

#include "EmployeeManagement.h"
#include "FurumaController.h"
void EmployeeManagement::employeeMenu() {
    while (1){
        int choice;
        cout<<"EmployeeManagement"<<endl;
        cout<<"1.DisplayEmployee"<<endl;
        cout<<"2.AddEmployee"<<endl;
        cout<<"3.EditEmployee"<<endl;
        cout<<"4.Exit."<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        cin.ignore();
        switch (choice){
            case 1:{
                EmployeeService().displayEmployee();
                break;
            }
            case 2:{
                EmployeeService().createEmployee();
                break;
            }
            case 3:{
                break;
            }
            case 4:{
                FurumaController::displayFuruma();
                break;
            }
        }
    }
}
