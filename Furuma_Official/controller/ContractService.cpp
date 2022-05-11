//
// Created by vu tran on 08/05/2022.
//

#include "ContractService.h"
#include "BookingManagement.h"
void ContractService::contractservice() {
    while (1){
        int choice;
        cout<<"ContractService"<<endl;
        cout<<"1.CreateContract"<<endl;
        cout<<"2.DisplayContract"<<endl;
        cout<<"3.EditContract"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch (choice) {
            case 1:{
                break;
            }
            case 2:{
                break;
            }
            case 3:{
                break;
            }
            case 4:{
                BookingManagement::bookingMenu();
                break;
            }
        }
    }
}
