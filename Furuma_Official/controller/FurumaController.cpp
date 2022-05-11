//
// Created by vu tran on 08/05/2022.
//
#include "FurumaController.h"
#include "CustomerManagement.h"
#include "EmployeeManagement.h"
#include "FacilityManagement.h"
#include "BookingManagement.h"
#include "PromotionManagement.h"
void FurumaController::displayFuruma() {
    while (1){
        int choice;
        cout<<"       FURUMA    "<<endl;
        cout<<"1.CustomerManagement."<<endl;
        cout<<"2.EmployeeManagement."<<endl;
        cout<<"3.FacilityManagement."<<endl;
        cout<<"4.Booking."<<endl;
        cout<<"5.PromotionManagement."<<endl;
        cout<<"6.Exit."<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice){
            case 1:{
                CustomerManagement::customerMenu();
                break;
            }
            case 2:{
                EmployeeManagement::employeeMenu();
                break;
            }
            case 3:{
                FacilityManagement::facilityMenu();
                break;
            }
            case 4:{
                BookingManagement::bookingMenu();
                break;
            }
            case 5:{
                PromotionManagement::promotionMenu();
                break;
            }
            case 6:{
                exit(0);
                break;
            }
        }
    }
}
