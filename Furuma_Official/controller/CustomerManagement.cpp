//
// Created by vu tran on 08/05/2022.
//

#include "CustomerManagement.h"
#include "FurumaController.h"
void CustomerManagement::customerMenu()  {
    while (1){
        int choice;
        cout<<"CustomerManagement"<<endl;
        cout<<"1.DisplayCustomer"<<endl;
        cout<<"2.AddCustomer"<<endl;
        cout<<"3.EditCustomer"<<endl;
        cout<<"4.Exit."<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        cin.ignore();
        switch (choice){
            case 1:{
                CustomerService().displayCustomer();
                break;
            }
            case 2:{
                CustomerService().createCustomer();
                break;
            }
            case 3:{
                CustomerService().editCustomer();
                break;
            }
            case 4:{
                FurumaController::displayFuruma();
                break;
            }
        }
    }
}
