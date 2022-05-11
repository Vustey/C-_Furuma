//
// Created by vu tran on 08/05/2022.
//
#include "FurumaController.h"
#include "BookingManagement.h"
#include "BookingService.h"
#include "ContractService.h"
void BookingManagement::bookingMenu() {
    while (1){
        int choice;
        cout<<"BookingManagement"<<endl;
        cout<<"1.BookingService"<<endl;
        cout<<"2.ContractService"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch (choice) {
            case 1:{
                BookingService::bookingservice();
                break;
            }
            case 2:{
                ContractService::contractservice();
                break;
            }
            case 3:{
                FurumaController::displayFuruma();
                break;
            }
        }
    }
}
