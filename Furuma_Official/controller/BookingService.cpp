//
// Created by vu tran on 08/05/2022.
//

#include "BookingService.h"
#include "BookingManagement.h"
void BookingService::bookingservice() {
    while (1){
        int choice;
        cout<<"BookingService"<<endl;
        cout<<"1.AddBooking"<<endl;
        cout<<"2.DisplayBooking"<<endl;
        cout<<"3.Exit"<<endl;
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
                BookingManagement::bookingMenu();
                break;
            }
        }
    }
}
